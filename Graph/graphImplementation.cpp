//implementation of graph

#include<bits/stdc++.h>

using namespace std;

class graph {

public:
    map<int,list<int>> adj;

    void addEdge(int u,int v,bool direction){
        //directed --> 1
        //undirected -->0

        //creating edges from u to v

        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }


    void printList(){

        for(auto i:adj){
            cout<<i.first<<"-->";

            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<"\n";
        }

    }

};



int main()
{

    int n,m;

    cout<<"Enter no of nodes: "<<endl;

    cin>>n;

    cout<<"Enter no of edges: "<<endl;

    cin>>m;

    graph g1;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        //creating a undirected graph

        g1.addEdge(u,v,0);


    }

    //printing graph

    g1.printList();


    return 0;
}


