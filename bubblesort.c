#include <stdio.h>
int main()
{	int i,j,n;
	printf("enter the size of array value n=");
	scanf("%d",&n);
	int a[n],temp;
	for(i=0;i<n;i++)
	{
	printf("enter array element a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
	printf("After sorting/n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}
