#include<stdio.h>
#include<stdlib.h>



void print(void);
void permute(int*,int,int);
int main()
{
	int *arr,n;
	printf("Enter the number of elements in the set:\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements: [numeric] \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	
	permute(arr,0,n-1);
}
void permute(int* arr,int i,int t)
{	
	if(i==t)
	{
		for(int k=0;k<=t;k++)
			printf("%d  ",arr[k]);
		printf("\n");
	}	
	for(int k=i;k<=t;k++)
	{
		int c=arr[i];
		arr[i]=arr[k];
		arr[k]=c;

		permute(arr,i+1,t);

		c=arr[i];
		arr[i]=arr[k];
		arr[k]=c;		
	}
}
