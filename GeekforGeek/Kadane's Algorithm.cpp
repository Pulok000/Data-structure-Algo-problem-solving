// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){

        // Your code here
        if(n==1)
            return arr[0];

        int sum=arr[0];
        int store[n];
        int s_sz=0;
        for(int i=1;i<n;i++){

            if((sum+arr[i])>0){
                sum+=arr[i];
            }
            else{
                store[s_sz]=sum;
                s_sz++;
                sum=arr[i];
            }
        }
                store[s_sz]=sum;
                s_sz++;

        sum=store[0];

        for(int i=1;i<s_sz;i++){
            if(store[i]>sum)
                sum=store[i];
        }

//        for(int i=0;i<s_sz;i++){
//            cout<<store[i]<<" ";
//        }

        return sum;

    }
};

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
