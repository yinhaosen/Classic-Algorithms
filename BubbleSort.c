#include <stdio.h>

void BubbleSort(ElemType a[],int n)
{
  int i,j,tag=1;    /* tag 标记某轮冒泡是否有交换动作，tag=0表示没有交换动作，本次交换结束 */
  ElemType temp;
  
  
  for(i=1; i<n && tag==1; i++)
  {
    tag=0;
    
    for(j=0; j<n-i; j++)
    {
      if(a[j].key > a[j+1].key)
      {
        tag=1;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
      
    }
    
  }
  
}
