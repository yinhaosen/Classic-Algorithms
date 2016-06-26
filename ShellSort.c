#include <stdio.h>

void ShellSort(ElemType x[],int n,int d[],int number)
/* x为待排序数组，n为数组中元素个数,d[0]-d[number-1]为希尔增量的值，number为步长序列个数 */
{
  int i,j,k,m,span;   /* span为增量 */
  ElemType temp;
  
  for(m=0; m<number; m++)   /* 总共要进行 number 轮排序 */
  {
    span=d[m];
    
    for(k=0; k<span;k++)    /* 每一轮排序中，全部元素按 d[m] 被分为 span 个小组 */
    {
      for(i=k; i+span<n; i+=span)
      {
        temp=x[i+span];
        j=i;
        
        while(j>-1 && temp.key<x[j].key)    /* 组内插入排序 */
        {
          x[j+span]=x[j];
          j-=span;
        }
        
        
        x[j+span]=temp;
        
        
        
        
      }
    }
  }
}
