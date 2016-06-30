#include <stdio.h>
#include <string.h>

int main()
/* 测试主函数 */
{
    int list[100],n,i;
    int input,low,high,position;
    int BSearch(int list[],int input,int low,int high);
    
    
    printf("输入数字的个数:\n");
    scanf("%d",&n);
    printf("输入一个数组(有序输入):\n");
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
    
    
    printf("输入你要查找的数字:\n");
    scanf("%d",&input);
    
    low=0;
    high=n-1;
    position=BSearch(list,input,low,high);
    printf("该数字在数组的第%d个\n",position+1);
    
    return 0;
    
    
    
}

/* 利用递归的方法进行二分查找 */
int BSearch(int list[],int input,int low,int high)
{
    int mid;
    
    mid=(high+low)/2;
    if(low>high)
        return -1;      //查找失败
    else if(input == list[mid])
        return mid;
    else if(input < list[mid])            //x在左半区查找
        return BSearch(list,input,low,mid-1);
    else                                //x在右半区查找
        return BSearch(list,input,mid+1,high);
        
        
}


/* 利用非递归的方法进行二分查找 */
int BSearch2(int list[],int input,int low,int high)
{
    int mid;
    
    while(low <= high)
    {
        mid=(low+high)/2;
        
        if(input == list[mid])
            return mid;
        if(input < list[mid])
            high=mid-1;
        else
            low=mid+1;
            
    }
    
    return -1;      /* 查找失败 */

}
