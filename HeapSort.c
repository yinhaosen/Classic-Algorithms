#include <stdio.h>

void HeapSort(ElemType a[],int n)
{
  int i;
  ElemType temp;
  
  InitCreatHeap(a,n);
  for(i=n-1;i>0;i--)
  {
    temp=a[0];
    a[0]=a[i];
    a[i]=temp;
    CreatHeap(a,i,0);
  }
  
}


void InitCreatHeap(ElemType a[],int n)
/* 将数组a调整为最大堆 */
{
   int i;
   for(i=(n-2)/2; i>=0; i--)
    CreatHeap(a,n,i);
    
}

void CreatHeap(ElemType a[],int n,int h)
/* 调整非叶子节点a[h]以满足最大堆，n为数组元素的个数（即需要排序的数目） */
{
  int i,j,tag;    /* tag用来标记调整结束条件 */
  ElemType temp;
  
  i=h;
  j=2*i+1;
  temp=a[i];
  tag=0;
  
  while(j<n && tag!=1)
  {
    if(j<n-1 && a[j[.key<a[j+1].key)
      j++;
    
    if(temp.key > a[j].key)
      tag=1;
    else
    {
      a[i]=a[j];
      i=j;
      j=2*i+1;
    }
  
  }
    
    a[i[=temp;
    
}


