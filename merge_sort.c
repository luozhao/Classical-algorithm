//将有序数组a[first...mid],b[mid...last],合并到C中

void merge(int a[], int first, int mid, int last, int temp[])
{
  int i = first, j  = mid + 1;
  int m = mid, n  = last;
  int k = 0;
  
  while(i <= m && j <= n)
  {
    if(a[i] < a[j])
      temp[k++] = a[i++];
    else
      temp[k++] = a[j++];
  }
  
  while(i < m)
    temp[k++] = a[i++];
  
  while(j < n)
    temp[k++] = a[j++];
    
  for(i = 0; i < k; i++)
    a[first+i] = temp[i];
}

void merge_sort(int a[], int first, int last, int temp[])
{
  if(first < last)
  {
    int mid = (first+last)>>1;
    merge_sort(a,first,mid,temp);   // 左边有序
    merge_sort(a,mid+1,last,temp);  // 右边有序  
    merge(a,first,mid,last,temp);   // 再将两个序列合并
  }
}

int main()
{
  int *p = (int*)malloc(sizeof(int)*n);
  if(!p)
    exit(1);
  merge_sort(a,0,n-1,p);
  free(p);
  return 0;
}
