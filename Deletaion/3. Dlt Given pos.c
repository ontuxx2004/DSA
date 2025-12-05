#include<stdio.h>
int main()
{
    int arry[]={1,2,3,4,5};
    int n=5;
    int i,k;
    printf("enter ur deletation index:");
    scanf("%d",&k);

    for(i=k;i<n-1;i++)
    {
        arry[i]=arry[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arry[i]);
    }
}