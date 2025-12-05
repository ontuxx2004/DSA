#include<stdio.h>
int main()
{
     int arry[]={1,2,3,4,5,6};
     int n=6;
     int i;
  
     for(i=0;i<n-1;i++)
     {
        arry[i]=arry[i+1];
     }
     n--;
     for(i=0;i<n;i++)
     {
        printf("%d ",arry[i]);
     }
 
}