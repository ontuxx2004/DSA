#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter vertices nmber"<<endl;
    cin>>n;
   int  graph[n][n];
    cout<<"enter adjacency vertices"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }
    }

    //floyd warshell algorithm
  for(int k=0;k<n;k++)
  {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
        }
    }
  }

  cout<<endl<<"shortasest path matrix"<<endl;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }

return 0;
}