#include<stdio.h>
int main()
{
	int i,j,temp,n;
	printf("enter size of array n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("entaer array element of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{	int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}

		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	printf("after selection sort\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
