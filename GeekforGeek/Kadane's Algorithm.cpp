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

        //Approach:Bruteforces
//        if(n==1)
//            return arr[0];
//
//            int ans=INT_MIN;
//
//            int sum=0;
//
//        for(int i=0;i<n;i++){
//
//            for(int j=i;j<n;j++){
//                sum+=arr[j];
//                if(ans<sum){
//                    ans=sum;
//                }
//
//            }
//            sum=0;
//        }
//
//        return ans;

        //O(n^2)

//Approach 02:Kadane's Algo

//        int maxsum=INT_MIN;
//        int curmax=0;
//
//        for(int i=0;i<n;i++){
//            curmax+=arr[i];
//            if(curmax>maxsum)
//                maxsum=curmax;
//
//            if(curmax<0)
//                curmax=0;
//        }
//
//
//        return maxsum;

        //O(n)

//Approach:03(change in implementation)

//        int maxsum=arr[0];
//        int cursum=arr[0];
//
//        for(int i=1;i<n;i++){
//            if((cursum+arr[i])>arr[i]){
//                cursum+=arr[i];
//            }
//            else{
//                cursum=arr[i];
//            }

//            if(cursum>maxsum)
//                maxsum=cursum;
//        }
//
//        return maxsum;

//Approach 04:(ANother simple implementation)

//        int maxsum=arr[0];
//        int cursum=arr[0];
//
//        for(int i=1;i<n;i++){
//            cursum=max(cursum+arr[i],arr[i]);
//            maxsum=max(maxsum,cursum);
//        }
//
//        return maxsum;
   // }

//finding the sub array:

        int maxsum=INT_MIN;
        int cursum=0;
        int s=0,e,update=0;

        for(int i=0;i<n;i++){

            cursum+=arr[i];

            if(cursum>maxsum){
                maxsum=cursum;
                s=update;
                e=i;
            }

            if(cursum<0){
                cursum=0;
                update=i+1;
            }

        }

        cout<<"start: "<<s<<" "<<"end: "<<e<<endl;

        return maxsum;

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
