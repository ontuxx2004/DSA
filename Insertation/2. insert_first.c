#include<stdio.h>
int main()
{
    int arry[10]={1,2,3,4,5};
    int n=5;
    int values = 0;
    int i;
    n++;
    
    for(i=n-1;i>0;i--)
    {
        arry[i]=arry[i-1];
    }
   arry[0]=values;
   for(i=0;i<n;i++)
   {
    printf("%d ", arry[i]);
   }
}