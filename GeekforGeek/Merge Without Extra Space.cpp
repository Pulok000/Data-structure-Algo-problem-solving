// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution{
public:


    void merge(int arr1[], int arr2[], int n, int m) {
        // code here

        //Approach 01:
        int i=0,j=0,k=n-1;

        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                swap(arr2[j],arr1[k]);
                j++;
                k--;
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);


    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends

        //Attempt 01--> TLE
        // int temp;

        // for(int i=0;i<m;i++){

        //     for(int j=0;j<n;j++){
        //         if(arr2[i]<arr1[j]){
        //             swap(arr1[j],arr2[i]);
        //         }
        //     }
        // }

        // sort(arr2,arr2+m);

        //Approach 02:TLE
        // int i=0;

        // while(arr1[n-1]>arr2[0]){

        //     if(arr1[i]>arr2[0]){
        //         swap(arr1[i],arr2[0]);
        //         sort(arr2,arr2+m);
        //     }
        //     i++;
        // }
