// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:


    int getPairsCount(int arr[], int n, int k) {
        // code here
        //const

        //Approach :01

        int limit=1e6;
        
        int hash_sz=1e6+1005;

        vector<int> hash(hash_sz);
        int ct=0,temp;

        for(int i=0;i<n;i++){

            if(arr[i]==k){
                //ct++;
            }
            else{

            if((k-arr[i])>=0 && (k-arr[i]<limit)){
               // cout<<"hash["<<k-arr[i]<<"]: "<<hash[k-arr[i]]<<endl;
                // if((hash[k-arr[i]])>0){
                    temp=(k-arr[i]);
                    ct+=hash[temp];
                    // cout<<"ct: "<<ct<<endl;
                // }
            }
            temp=arr[i];
            hash[temp]=hash[temp]+1;

            }
        }

        return ct;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends

