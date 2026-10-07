#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,W;
    cout<<"enter items :"<<endl;
    cin>>n;

   int weight[n+1];
   int value[n+1];
   cout<<"enter weight :"<<endl;
   for(int i=1;i<=n;i++)
   {
    cin>>weight[i];
   }
   cout<<"enter value of items :"<<endl;
   for(int i=1;i<=n;i++)
   {
    cin>>value[i];
   }

   cout<<"enter cvapacity="<<endl;
   cin>>W;

   int dp[n+1][W+1];
 //initailize roe and coloumn

 for(int i=0;i<=n;i++)
 {
    dp[i][0]=0;
 }
 for(int w=0;w<=W;w++)
 {
    dp[0][w]=0;
 }

 for(int i=1;i<=n;i++)
 {
    for(int w=1;w<=W;w++)
    {
        if(weight[i]<=w)
        {
            dp[i][w]=max(value[i]+dp[i-1][w-weight[i]],dp[i-1][w]);
        }
        else
        {
            dp[i][w]=dp[i-1][w];
        }
    }
 }

 cout<<"the results is ="<<dp[n][W]<<endl;
 return 0;
}