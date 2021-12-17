#include <stdio.h>
void mergeSort(int a[], int lb, int ub);
void merge(int a[], int lb, int mid, int ub);
void print(int a[], int n);

int main()
{
    //int a[] = {32, 45, 67, 2, 7};
    //int n = sizeof(a)/sizeof(a[0]);
    int n,i;

    printf("enter size of array");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {   printf("enter array elements a[%d]=",i);
	   scanf("%d",&a[i]); 
    }

    mergeSort(a, 0, n - 1);
    printf("\nafter Sorting\n");
    print(a,n);

}

void mergeSort(int a[], int lb, int ub)
{
    int mid;
    if(lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid+1, ub);
        merge(a, lb, mid, ub);
    }
}

void merge(int a[], int lb, int mid, int ub)
{
    int b[5];   //same size of a[]
    int i, j, k;
    k = 0;
    i = lb;
    j = mid + 1;
    while(i <= mid && j <= ub)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];    
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    while(i <= mid)
    {
        b[k++] = a[i++];
    }

    while(j <= ub)
    {
        b[k++] = a[j++];
    }

    for(i=ub; i >= lb; i--)
    {
        a[i] = b[--k];  
    }
}

void print(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
}
