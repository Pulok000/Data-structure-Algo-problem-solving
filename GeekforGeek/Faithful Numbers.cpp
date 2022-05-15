//https://practice.geeksforgeeks.org/problems/faithful-numbers0014/1/

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long nthFaithfulNum(int N) {
        // code here
        long long sum=0,i=0;
    
        while(N){
    
            sum+=(pow(7,i))*(N&1);
    
            i++;
            N>>=1;
        }
    
        return sum;     
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
