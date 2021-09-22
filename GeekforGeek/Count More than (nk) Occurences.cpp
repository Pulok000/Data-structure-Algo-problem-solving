// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here

        //Approach 01:hashing--> O(n)+O(n)

        unordered_map<int,int>um;

        int res=0,com=(n/k);

        for(int i=0;i<n;i++){
            um[arr[i]]++;
        }

        for(int i=0;i<n;i++){

            if(um[arr[i]]>com){
                res++;
                um[arr[i]]=0;
            }
            
        }

        return res;

        //approach 02:following the same approach using struct

    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
