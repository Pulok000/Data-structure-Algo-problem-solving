// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        //Approach 01:
        int ans=0;

        sort(A,A+n);
        int l,r;

        for(int i=0;i<n-2;i++){

            l=i+1;
            r=n-1;

            while(l<r){

                if(A[i]+A[l]+A[r]==X){
                    ans++;
                    break;
                }
                else if(A[i]+A[l]+A[r]<X){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        return ans;
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,X;
        cin>>n>>X;
        int i,A[n];
        for(i=0;i<n;i++)
            cin>>A[i];
        Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends

        //Attemps:01 -- Failed
        
        // int ans=0;

        // unordered_map<int,int>um;

        // for(int i=0;i<n;i++){
        //         um[i]=X-A[i];
        // }

        // for(int i=0;i<n;i++){


        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             if(um[i]==(A[i]+A[j])){
        //                 A[i]=-1;
        //                 A[j]=-1;
        //                 ans++;
        //             }
        //         }
        //     }
        // }

        // return ans;


        //Approach 01:
        // int ans=0;

        // sort(A,A+n);
        // int l,r;

        // for(int i=0;i<n-2;i++){

        //     l=i+1;
        //     r=n-1;

        //     while(l<r){

        //         if(A[i]+A[l]+A[r]==X){
        //             ans++;
        //             break;
        //         }
        //         else if(A[i]+A[l]+A[r]<X){
        //             l++;
        //         }
        //         else{
        //             r--;
        //         }
        //     }
        // }

        // return ans;

        // //Approach:03
        // int ans=0;

        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;j<n;k++){
        //             if(A[i]+A[j]+A[k]==X){
        //                 return 1;
        //             }
        //         }
        //     }
        // }

        // return 0;
