//implementation of graph adjacency matrics

#include<bits/stdc++.h>

using namespace std;



int main()
{

    int n,m;
    cout<<"Enter no of nodes & edges: "<<endl;
    cin>>n>>m;

    int adj[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j]=0;
        }
    }


    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;

    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<",";
        }
        cout<<"\n";
    }



    return 0;
}


/*
 check with this input i you are in hurry
5
7
0 1
0 4
4 1
4 3
1 3
1 2
3 2


*/