#include<bits/stdc++.h>
using namespace std;
vector <int> tree;
void buildTree(int node,int left,int right,vector <int>&arr)
{
     if(left==right)
     {
        tree[node]=arr[left];
        return;
     }

     int mid=(left+right)/2;

     buildTree(2*node+1,left,mid,arr);
     buildTree(2*node+2,mid+1,right,arr);
     tree[node]=tree[2*node+1]+tree[2*node+2];
}

int query(int node,int left,int right,int ql,int qr)
{
    // no overlap
    if(right<ql || left>qr )
    {
        return 0;
    }

    //complete overlap

    if(left>=ql && right <=qr)
    {
        return tree[node];
    }

    //partial overlap

    int mid=(left+right)/2;
    int leftTree=query(2*node+1,left,mid,ql,qr);
    int rightTree=query(2*node+2,mid+1,right,ql,qr);
    return leftTree+rightTree;

}
int main()
{
    int n;
    cout<<"enter arry size= ";
    cin>> n;

    vector<int>arr(n);

    cout<<"enter arry elements= ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //segment tree resize
    tree.resize(4*n);

    //build tree

    buildTree(0,0,n-1,arr);

    //query input

    int ql,qr;
    cout<<"enter query range :";
    cin>>ql>>qr;

    //output

    cout<<"sum="<<query(0,0,n-1,ql,qr)<<endl;
    return 0;


}