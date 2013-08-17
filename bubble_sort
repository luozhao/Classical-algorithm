/*
*
*  @function The bubble sort algorithm
*  @author lz
*  @date 2013.8.17
*/

#include <stdio.h>

void bubble_sort(int *a, int n)
{
	int i,j,temp;
	int flag = 1;
	for(i = n -1; i >= 0; i--)
	{
		for(j = 0; j < i ; j++) 
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

				flag = 0;				// 发生交换
			}
		}
		if (flag)						// 一次循环过程中没有交换，此时数组已有序
			return ;
		else
			continue;
	}
}

void print(int *a,int n)
{
	for(; n > 0 ; )
		printf("%d ",a[--n]);
}
int main()
{
	int a[] = {1,9,7,3,2,5,6,4,0,8};
	int n = sizeof(a) / sizeof(int);
	bubble_sort(a,n);
	print(a,n);
	return 0;
}
