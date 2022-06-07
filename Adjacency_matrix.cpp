//Adjacency matrix
//Disadvantages
/*
Can be used for smaller values of n


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int n,m; //n number of nodes,m is no. of edges
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}