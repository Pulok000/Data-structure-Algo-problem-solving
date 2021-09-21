// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

    long long maxL(long long a,long long b){

        if(a>b)
            return a;

        return b;
    }

    long long minL(long long a,long long b){

        if(a<b)
            return a;

        return b;
    }

    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n){
        // code here
        //Approach:02

        long long maxVal=arr[0];
        long long minVal=arr[0];
        long long res=arr[0];

        long long temp1;
        long long temp2;

        for(long long i=1;i<n;i++){

            if(arr[i]==0){
                maxVal=1;
                minVal=1;
                continue;
            }


            temp1=(maxVal*arr[i]);
            temp2=(minVal*arr[i]);

            maxVal=maxL(temp1,temp2);
            maxVal=maxL(maxVal,arr[i]);

            minVal=minL(temp1,temp2);
            minVal=minL(minVal,arr[i]);

            res=maxL(res,maxVal);

        }

        return res;


    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends



    // long long  maxPro(vector<int> arr, int n){

    //     //Approach 01:O(n)+O(1) --> my own implementation

    //    long long maxSum=LLONG_MIN;
    //     long long curSum=1;

    //     bool allSmall=1;

    //     bool firstNeg=0;

    //     long long preNeg;

    //     for(int i=0;i<arr.size();i++){

    //         if(arr[i]!=0)
    //             allSmall=0;


    //         if(arr[i]==0){
    //             curSum=1;
    //             firstNeg=0;
    //         }
    //         else{

    //             if((arr[i]<0) && (!firstNeg)){
    //                 firstNeg=1;
    //                 preNeg=arr[i]*curSum;
    //                 curSum=1;

    //             }
    //             else if((arr[i]<0) && (firstNeg)){
    //                 firstNeg=0;
    //                 curSum=(arr[i]*curSum*preNeg);

    //             }
    //             else{

    //                 curSum=(arr[i]*curSum);
    //             }

                

    //             if(curSum>maxSum)
    //                 maxSum=curSum;
    //         }
    //     }

    //     if(allSmall)
    //         maxSum=0;


    //     return maxSum;

    // }

    // // Function to find maximum product subarray
    // long long maxProduct(vector<int> arr, int n){
    //     // code here



    //      //Approach 01:O(n)+O(1) --> my own implementation


    //     long long a=maxPro(arr,n);
    //     reverse(arr.begin(),arr.end());
    //     long long b=maxPro(arr,n);

    //     return max(a,b);

    // }
