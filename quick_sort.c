/*
*  @function the quick sort algorithm
*  @author lz
*  @date 2013.8.18 
*/
#include <stdio.h>

void print(int a[], int n)
{
	int i = 0;
	
	if(a == NULL || n < 0)
		return;

	for(;i < n; i++)
		printf("%d ",a[i]);
}

void quick_sort(int a[], int low, int high)
{
	int i = low, j = high;
	int temp = a[low];

	while(i < j)
	{
		while(i < j && temp < a[j])
			j--;
		if(i < j)
		{
			a[i] = a[j];
			i++;
		}

		while(i < j && temp > a[i])
			i++;
		if(i < j)
		{
			a[j] = a[i];
			j--;
		}
		
		a[i] = temp;

		if(low < i)
			quick_sort(a,low,i-1);
		if(i < high)
			quick_sort(a,j+1,high);
	}
}

int main()
{
	int a[] = {1,9,2,8,3,7,4,6,5,0};
	int n = sizeof(a) / sizeof(int);

	quick_sort(a,0,9);
	print(a,n);
	return 0;
}
