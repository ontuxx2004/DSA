#include<stdio.h>
int main()
{
  int arry[10]={1,2,3,4,5};
  int n=5;
  int i;
  int data=3;
  int values=10;
  int index=-1;
  for(i=0;i<n;i++)
  {
     if(arry[i]==data)
     {
        index=i;
        break;
     }
 
  }
  index=index+1;
   n++;
for(i=n-1;i>index;i--)
{
    arry[i]=arry[i-1];
}
 arry[index]=values;
 for(i=0;i<n;i++)
 {
    printf("%d ",arry[i]);
 }
}
