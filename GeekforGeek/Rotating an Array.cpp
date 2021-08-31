// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

void reverseal(int a[],int s,int e){

int temp;

while(s<e){

    temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    s++;
    e--;
}

}

class Solution{
public:
    void leftRotate(int arr[], int n, int d) {
        // code here

        //Approach 01: Reversal Algorithms
        reverseal(arr,0,d-1);
        reverseal(arr,d,n-1);
        reverseal(arr,0,n-1);



    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


  // } Driver Code Ends
