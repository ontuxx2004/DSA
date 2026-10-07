#include<bits/stdc++.h>
using namespace std;

vector<int>parent;
vector<int>ranki;

bool sortbywt(tuple<int,int,int>a,tuple<int,int,int>b)
{

   return get<2>(a) < get<2>(b);
}
int findOp(int u)
{
    if(parent[u]==-1)
    {
        return u;
    }
    return findOp(parent[u]);
}


void UnionOp( int u,int v)

{
    if(ranki[u]>ranki[v])
    {
        parent[v]=u;
    }
    else if(ranki[u]<ranki[v])
    {
        parent[u]=v;
    }
    else
        parent[u]=v;
        ranki[v]++;
}
int main()
{

    int v,e;
    int sc,des,wt;
    cout<<"enter the vertices and edges:"<<endl;
    cin>>v>>e;

    parent.resize(v+1,-1);
    ranki.resize(v+1,0);

    vector<tuple<int,int,int>> edges;
    cout<<"enter edges(sc des wt):"<<endl;
    for(int i=0;i<e;i++)
    {
        cin>>sc>>des>>wt;
        edges.push_back({sc,des,wt});
    }

    int totalweight=0;
    int count=0;

    sort(edges.begin(),edges.end(),sortbywt);


    for(auto edge:edges)
    {
        int u= get<0>(edge);
        int des=get<1>(edge);
        int w=get<2>(edge);

        int rootU=findOp(u);
        int rootV=findOp(des);

        if(rootU !=rootV)

        {

            cout<<u<<"-"<<des<<"="<<v<<endl;
            totalweight+=w;
            count++;
            if(count==v-1)
            {
                break;
            }


        }
    }
    cout<<"minimum MST="<<totalweight<<endl;
    return 0;
}

