#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter elemnts nmber"<<endl;
    cin>>n;
    cout<<"enter the elemnets"<<endl;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
      int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    { 
        ans=max(ans,dp[i]);
    }

    cout<<"the results is="<<ans;
    return 0;
}