// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {


        //Approach 03:

        if(intervals.size()==1)
            return intervals;


        vector<vector<int>>r;
        vector<int> store(2);

        sort(intervals.begin(),intervals.end());

        for(int i=1;i<intervals.size();i++){

            // cout<<"intervals["<<i-1<<"][0]: "<<intervals[i-1][0]<<endl;
            // cout<<"intervals["<<i-1<<"][1]: "<<intervals[i-1][1]<<endl;

            // cout<<"intervals["<<i<<"][0]: "<<intervals[i][0]<<endl;
            // cout<<"intervals["<<i<<"][1]: "<<intervals[i][1]<<endl;

            //overlaps

            if(intervals[i-1][0]>=intervals[i][0] && intervals[i-1][0]<intervals[i][1]){
                
                if(intervals[i-1][1]>intervals[i][1])
                    intervals[i][1]=intervals[i-1][1];
            }
            else if(intervals[i-1][0]<intervals[i][0] && intervals[i-1][1]>=intervals[i][0]){
                
                intervals[i][0]=intervals[i-1][0];

                if(intervals[i-1][1]>intervals[i][1]){
                    intervals[i][1]=intervals[i-1][1];
                }

            }
            else if(intervals[i-1][0]>=intervals[i][0] && intervals[i-1][1]<= intervals[i][1]){
                //pass
            }
            else{
            // cout<<"intervals["<<i-1<<"][0]: "<<intervals[i-1][0]<<endl;
            // cout<<"intervals["<<i-1<<"][1]: "<<intervals[i-1][1]<<endl;

                store[0]=intervals[i-1][0];
                store[1]=intervals[i-1][1];
                r.push_back(store);
            }
        }

        int n=intervals.size();
        store[0]=intervals[n-1][0];
        store[1]=intervals[n-1][1];
        r.push_back(store);


        return r;

}

// { Driver Code Starts.

int main()
{
    int t,n,m;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n>>m; //input size of array

        vector<vector<int>> intervals(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>intervals[i][j];
            }
        }

    
       
        vector<vector<int>> result=merge(intervals);

        for(int i = 0; i < result.size(); i++)
        {
            for(int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }


    }
}


//Approach 01:
        
//         int sz=1e4+1001;

//         vector<vector<int>>r;
//         vector<int> v(sz);
// // cout<<"start"<<endl;
// //         for(int i=0;i<v.size();i++){
// //             cout<<v[i];
// //         }


//     for(int i = 0; i <intervals.size(); i++)
//     {
//         //cout<<"i: "<<i<<endl;
//         for(int j=intervals[i][0];j<=intervals[i][1];j++){

//             // cout<<"intervals["<<i<<"][0]: "<<intervals[i][0]<<endl;
//             // cout<<"intervals["<<i<<"][1]: "<<intervals[i][1]<<endl;
//             // cout<<"j: "<<j<<endl;  
//             if(intervals[i][0]==intervals[i][1] ){

//                 if(v[j]!=-1 && v[j]!=-3 && v[j]!=-2)
//                     v[j]=-4;
//                // cout<<"d"<<endl;
                
//             }
//             else{
                
//                     if(v[j]==-2){
//                         v[j]=-2;
//                     }
//                     else if(v[j]==-1){

//                         if(j>intervals[i][0] && j<=intervals[i][1]){
//                             v[j]=-2;
//                         }
//                         else{
//                             v[j]=-1;
//                         }

//                     }
//                     else if(v[j]==-3){

//                         if(j!=intervals[i][1]){
//                             v[j]=-2;
//                         }
//                         else{
//                             v[j]=-3;
//                         }

//                     }
//                     else if(j==intervals[i][0]){
//                         v[j]=-1;
//                     }
//                     else if(j==intervals[i][1]){
//                         v[j]=-3;
//                     }
//                     else{
//                         v[j]=-2;
//                     }

                
//             } 
            
//         }
//     }
//     int s=0,e=sz;
//     bool flag=0;

//     vector<int> store(2);

//     for(int i=0;i<sz;i++){
//         //cout<<"v[i]: "<<v[i]<<endl;

//         //cout<<"test"<<endl;
//         if(v[i]==-4){
//             //v[i]=0;
//             store[0]=i;
//             store[1]=i;
//             r.push_back(store);

//         }
//         else if((v[i]==-1)){
//             s=i;
//             //flag=1;
//         }
//         else if(v[i]==-3){
//             e=i;
//             //flag=0;
//             store[0]=s;
//             store[1]=e;
//             r.push_back(store);


//             // cout<<"s: "<<s<<endl;
//             // cout<<"e: "<<e<<endl;
//         }

//     }
        
// // cout<<"start"<<endl;
// //         for(int i=0;i<v.size();i++){
// //             cout<<v[i]<<endl;
// //         }


//         return r;




        //Approach 02:

//     int del=INT_MAX;
//     vector<vector<int>>r;


//     sort(intervals.begin(),intervals.end());
    

//     for(int i=0;i<intervals.size();i++)
//     {
//         // cout<<"i: "<<i<<endl; 
//         // cout<<"intervals[i][0]: "<<intervals[i][0]<<endl;
//         // cout<<"intervals[i][1]: "<<intervals[i][1]<<endl;
        
//         for(int j=0;j<intervals.size();j++){

//             if((j!=i) && (intervals[j][0]!=del)){

//                 if(intervals[j][0]>=intervals[i][0] && intervals[j][0]<=intervals[i][1]){
//                     if(intervals[j][1]>intervals[i][1]){
//                         intervals[i][1]=intervals[j][1];
//                        // cout<<"x"<<endl;
//                     }

//                     //delete;

//                     // cout<<"deleted["<<intervals[j][0]<<","<<intervals[j][1]<<"] at index: "<<j<<endl;
//                     intervals[j][0]=del;
//                     intervals[j][1]=del;

//                 }
//                 else if(intervals[j][0]<intervals[i][0] && intervals[j][1]>=intervals[i][0]){
//                     intervals[i][0]=intervals[j][0];
                    
//                     if(intervals[j][1]>intervals[i][1])
//                         intervals[i][1]=intervals[j][1];

//                     //delete;
//                     // cout<<"deleted["<<intervals[j][0]<<","<<intervals[j][1]<<"] at index: "<<j<<endl;
//                     intervals[j][0]=del;
//                     intervals[j][1]=del;

                      
//                 }
//                 else if(intervals[j][0]>=intervals[i][0] && intervals[j][1]<=intervals[i][1]){
                    
//                     intervals[j][0]=del;
//                     intervals[j][1]=del;  
//                 }

//             }
//         // cout<<"j: "<<j<<endl; 
//         // cout<<"intervals[j][0]: "<<intervals[j][0]<<endl;
//         // cout<<"intervals[j][1]: "<<intervals[j][1]<<endl;
//         }

// // cout<<"Start"<<endl;
// // cout<<"i: "<<i<<endl; 

// //     for(int i=0;i<intervals.size();i++){

// //         cout<<"intervals[i][0]: "<<intervals[i][0]<<endl;
// //         cout<<"intervals[i][1]: "<<intervals[i][1]<<endl;
// //     }

// // cout<<"end"<<endl;



//     }

//     vector<int> store(2);
//     for(int i=0;i<intervals.size();i++){

//         // cout<<"intervals[i][0]: "<<intervals[i][0]<<endl;
//         // cout<<"intervals[i][1]: "<<intervals[i][1]<<endl;

//         if(intervals[i][0]!=del){

//             store[0]=intervals[i][0];
//             store[1]=intervals[i][1];
//             r.push_back(store);

//         }
//     }

//     return r;
