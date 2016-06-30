#include <stdio.h>
#include <stdlib.h>

void Merge(ElemType a[],ElemType swap[],int k,int n)
/* k为有序子数组的长度，一次二路归并后的有序序列存放在数组 swap 中 */
{
  int i,j,l1,u1,l2,u2,m;  /* l1 代表前一个有序子数组的下界，u1 代表前一个有序子数组的上界；l2 代表后一个有序子数组的下界，u2
                             代表后一个有序子数组的下界 */
                             
  l1=0;     /* 前一个有序子数组的下界为0 */
  m=0       /* m 表示 swap 数组中的序号 */
  
  
  while(l1+k <= n-1)
  {
    l2=l1+k;    /* 计算第二个有序子数组的下界 */
    u1=l2-1;    /* 计算第一个有序子数组的上界 */
    u2=(l2+k-1 <= n-1) ? l2+k-1:n-1;    /* 计算第二个有序子数组的上界 */
    
    
    /* 以下是两个有序子数组的合并 */
    
    for(i=l1,j=l2; i<=u1 && j<=u2; m++)
    {
      if(a[i].key <= a[j].key)
      {
        swap[m]=a[i];
        i++
      }
      
      else
      {
        swap[m]=a[j];
        j++;
      }
      
    }
    
    /* 若子数组2已先归并完，则将子数组1中剩余的元素存放到数组swap中 */
    
    while(i <= u1)
    {
      swap[m]=a[i];
      m++;
      i++;
    }
    
    /* 若子数组1已先归并完，则将子数组2中剩余的元素存放到数组swap中 */
    
    while(j <= u2)
    {
      swap[m]=a[j];
      m++;
      j++;
    }
    
    l1=u2+1;
    
  }
  
  /* 将原始数组中只能凑够一组的数据元素按顺序存放到数组swap中 */
  
  for(i=l1; i<n; i++,m++)
    swap[m]=a[i];
    
}


void MergeSort(ElemType a[],int n)
/* n个数据元素的二路归并排序 */
{
  int i,k=1;        /* 归并长度从1开始 */
  ElemType *swap;
  
  swap=(ElemType *)malloc(sizeof(ElemType)*n);    /* 建立动态数组 */
  while(k<n)
  {
    Merge(a,swap,k,n);
    
    for(i=0; i<n; i++)
      a[i]=swap[i];
    k=2*k;
    
  }
  
  free(swap);
}

    
  
  
                              
