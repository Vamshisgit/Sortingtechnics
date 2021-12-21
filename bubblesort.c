#include <stdio.h>
int main()
{	int i,j,n,temp;
	int a[]={12,3,54,57,52,87,9,65,76,46,74,38,29};
 
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
