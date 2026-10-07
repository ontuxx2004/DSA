#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S1;
    string S2;
    cout<<"enter first string:"<<endl;
    cin>>S1;
     cout<<"enter second string:"<<endl;
     cin>>S2;

     int m=S1.length();
     int n=S2.length();

     int dp[m+1][n+1];

     for(int i=0;i<=m;i++)
     {
        dp[i][0]=0;
     }
     for(int j=0;j<=n;j++)
     {
        dp[0][j]=0;
     }

     for(int i=1;i<=m;i++)
     {
        for(int j=1;j<=n;j++)
        {
            if(S1[i-1]==S2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
     }
     cout<<"Length of LCS ="<<dp[m][n]<<endl;

     // print LCS

     int i=m;
     int j=n;

     string lcs ="";

     while(i>0 && j>0)
     {
        if(S1[i-1]==S2[j-1])
        {
            lcs+=S1[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]> dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
     }
     reverse(lcs.begin(),lcs.end());
     cout<<"LCS="<<lcs;
     return 0;
      
}
