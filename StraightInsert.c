#include <stdio.h>

void InsertSort(ElemType a[],int n)
/* 用直接插入法对a[0]-a[n-1]排序 */
{
  int i,j;
  ElemType temp;
  
  for(i=0; i<n-1; i++)
  {
    temp=a[i+1];
    j=i;    /* 从最右边开始 */
    
    while(j>-1 && temp.key<a[j].key)
    {
      a[j+1]=a[j];
      j--;
    }
    
    a[j+1]=temp;
    
}
