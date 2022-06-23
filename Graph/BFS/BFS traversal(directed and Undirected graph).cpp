//BFS traversal 
//The C++ code for BFS traversal for entire graph (valid for directed as well as undirected graphs) with possible multiple disconnected components is as follows:

#include<bits/stdc++.h>

using namespace std;

void bfs(int sourceNode,int n,unordered_map<int,list<int>> &adj,bool *visited,vector<int> &ans){


            queue<int> q;
            q.push(sourceNode);
            visited[sourceNode]=true;

            while(!q.empty()){

                int frontNode=q.front();
                q.pop();

                //Storing Answer:
                ans.push_back(frontNode);

                //Traversing neighbour Node of frontNode:
                for(auto j:adj[frontNode]){

                    if(!visited[j]){
                        q.push(j);
                        visited[j]=true;
                    }
                }
            }
    
}



int main()
{

    int n,m;
    cout<<"Enter no of nodes & edges: "<<endl;
    cin>>n>>m;

    unordered_map<int,list<int>> adj;
    vector<int> ans;


    //createing adj list:

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u;
        cin>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    int sourceNode=0,directed=0;
    bool visited[n+1];

    //Starting bfs with sourse node:
    bfs(sourceNode,n,adj,visited,ans);

    //Traversing All componenet of the graph:
    for(int i=0;i<n;i++){

        if(!visited[i]){
            bfs(i,n,adj,visited,ans);
        }
    }


    //Printing Answer:
    for(auto i:ans){
        cout<<i<<" ";
    }

    cout<<"\n";




    return 0;
}


