//bubble sorting for array of integers in ascending order//
#include<stdio.h>
void printarray(int *arr,int n)
{
	printf("\n");
}
void bubble_sort(char *arr,int n)
{
	for(int i=0;i<n;i++) {
//	printf("pass: %d\n",i+1);
		for(int j=0;j<n-1;j++)
		{
			if(arr[j] > arr[j+1]) 
			{
				int t = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
	//	printarray(arr,n);
		}
}
}

int main()
{
	int n,i;
	scanf("%s",&n);
	char arr[n];
	scanf("%s",&arr[i]);
	bubble_sort(arr,n);
	printf("%s",arr);
}
	
	



