#include<bits/stdc++.h>
#include<vector>
using namespace std;

int parent[100];

int find(int x)
{
    if(parent[x]==-1)
    {
         return x;
    }
    else
    {
        return find(parent[x]);
    }
}
void Union(int x, int y)
{
    int xRoot=find(x);
    int yRoot=find(y);

    if(xRoot != yRoot)
    {
        parent[xRoot]=yRoot;
    }
}
bool isCycle(vector<pair<int,int>> &edges)
{
    for(auto edge:edges)
    {
        int u=edge.first;
        int v=edge.second;

        if (find(u)==find(v))
        {
            return true;
        }
        else
        {
            Union(u,v);
        }
    }

    return false;
}

int main()
{
    int V,E;


    cout<<"enter the number of vertices= ";
    cin>> V;
    cout<<"enter the number of edges= "; 
    cin>> E;

    vector<pair<int,int>>edges;

    for(int i=0;i<V;i++)
    {
        parent[i]=-1;
    }

    cout<<"enter the edges(u:v): "<<endl;
   int u,v;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        edges.push_back({u,v});
    }
  if(isCycle(edges))
  {
    cout<<"Cycle exists;"<<endl;
  }
  else
  {
     cout<<"No cycle detected;"<<endl;
  }

 return 0;
}