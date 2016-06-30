#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

void RadixSort(ElemType a[],int n,int m,int d)
/* 对数组a中的元素进行排序，关键字为m位d进制整数，桶采用链式队列 */
{
  int i,j,k,power=1;      /* power 表示10的倍数 */
  LQueue *tub;
  tub=(LQueue *)malloc(sizeof(LQueue)*d)  /* 把d个队列定义为动态数组 */
  
  for(i=0; i<d; i++)
    QueueInitiate(&tub[i]);   /* d个队列分别初始化 */
    
  for(i=0; i<m; i++)      /* 进行m次放和收 */
  {
    if(i==0)
      power=1;
    else
      power=power*d;
      
    
    for(j=0; j<n; j++)
    {
      k=a[j].key/power - (a[j].key/(power*d))*d;
      QueueAppend(&tub[k],a[j]);
    }
    
    k=0;
    for(j=0; j<d; j++)
      while(QueueNotEmpty(tub[j])!=0)
      {
        QueueDelete(&tub[j],&a[k]);
        k++;
      }
      
  }
  
}

