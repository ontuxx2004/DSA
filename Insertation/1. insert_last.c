#include<stdio.h>
int main()
{
    int arry[10]={1,2,3,4,5};
    int n=5;
    int i;
   
     arry[n]=6;
     n++;
     for(i=0;i<n;i++)
     {
        printf("%d ",arry[i]);
     }
}