#include<stdio.h>
int main()
{
    int arry[]={1,2,3,4,5};
    int n=5;
    int index=-1,i,k;
    printf("enter ur Values to delet :");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arry[i]==k)
        {
            index=i;
            break;
        }
        
    }
     if(index==-1)
     {
        printf("No Data found to deletation :");

        for(i=0;i<n;i++)
        {
           printf("%d ",arry[i]);
        }
        return 0;
    
     }
      if(index==n-1)
      {
        printf("No next elements to delet :");
        for(i=0;i<n;i++)
        {
            printf("%d ",arry[i]);
        }
         return 0;
      }
    for(i=index+1;i<n-1;i++)
    {
        arry[i]=arry[i+1];
    }
    n--;
    printf("After Deletation : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arry[i]);
    }
    return 0;
}
