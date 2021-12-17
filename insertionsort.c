#include<stdio.h>
int main()
{
	int i,j,temp,n;
	printf("enter size of array n=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("enter array element a[%d]=",i);
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;(j>=0)&&(a[j]>temp);j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("after insertion sort\n");
	for(i=0;i<n;i++)
	{	
		printf("%d ",a[i]);
	}
}
