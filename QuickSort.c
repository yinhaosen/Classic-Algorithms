#include <stdio.h>

void QuickSort(ElemType a[],int low,int high)
/* low, high 分别用来标记待排序数组的起始、终止位置 */
{
  int i,j;
  ElemType temp;
  
  i=low;
  j=high;
  temp=a[low];  /* 以第一个元素为标准元素 */
  
  
  while(i<j)
  {
    while(i<j && temp.key<=a[j].key)    /* 数组右端扫描 */
      j--;
    
    if(i<j)
    {
      a[i]=a[j];
      i++;
      
    }
    
    while(i<j && a[i].key<temp.key)     /* 数组左端扫描 */
      i++;
      
    if(i<j)
    {
      a[j]=a[i];
      j--;
    }
    
  }
  

  a[i]=temp;
  if(low<i)
    QuickSort(a,low,i-1);   /* 对左端子序列进行递归 */
  if(i<high)
    QuickSort(a,j+1,high);  /* 对右端子序列进行递归 */
    
}
    
