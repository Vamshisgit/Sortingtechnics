#include <stdio.h>
int partition(int a[], int lb, int ub);  
void quickSort(int a[], int lb, int ub);  
int main()  
{  
    int i,n;
    printf("enter array size");
    scanf("%d",&n);
    int a[n];
     
    for(i=0;i<n;i++)
    {
	    printf("enter array elements a[%d]=",i);
	    scanf("%d",&a[i]);
    }

    quickSort(a, 0, n-1);  
    printf("\n after sorting\n");  
    for(i=0;i<n;i++)  
    printf(" %d\t", a[i]);  
}  
int partition(int a[], int lb, int ub)  
{  
    int start, end, temp, loc;     
    loc =a[lb]; 
    start = lb;  
    end = ub;  
    while(start<end)
    {
	    while (a[start]<=loc)
	    {start++;}
	    while (a[end]>loc)
	    {end--;}
	    if(start<end)
	    {
		    temp =a[start];
		    a[start]=a[end];
		    a[end]=temp;
	    }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
 
void quickSort(int a[], int lb, int ub)  
{  
    int loc;  
    if(lb<ub)  
    {  
        loc = partition(a, lb, ub);  
        quickSort(a, lb, loc-1);  
        quickSort(a, loc+1, ub);  
    }  
}  
