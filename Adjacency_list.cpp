//Adjacency List 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int n,m; 
    cin>>n>>m;
    vector<int>adj[n+1];
    //for weighted graph
    //vector<pair<int><int>>adj[n+1]; to store weight and edges
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
        
        /* In case of weighted graph
        int u,v,wt;
        cin>>u>>v,wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
        */
        
        //adj[v].push_back(u);  in case of directed graph line is omitted based of direction of graph
    }
    return 0;
}