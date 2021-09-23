// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here

        //Approach 02:O(n) O(1)

        int l=0,r=n-1;
        int lMax=0,rMax=0;
        long long water=0;

        while(l<=r){

            if(arr[l]<arr[r]){
                if(lMax<arr[l]){
                    lMax=arr[l];
                }
                else{
                    water+=lMax-arr[l];
                }
                l++;
            }
            else{
                if(rMax<arr[r]){
                    rMax=arr[r];
                }
                else{
                    water+=rMax-arr[r];
                }
                r--;
            }
            //cout<<"water: "<<water<<endl;

        }
        return water;

    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends

        //Approach 01:O(n) O(n)

        // long long left[n];
        // long long right[n];
        // long long lMax=0;
        // long long rmax=0;
        // long long water=0;

        // for(int i=0;i<n;i++){
        //     if(arr[i]>lMax)
        //         lMax=arr[i];
        //     left[i]=lMax;
        // }
        // for(int i=n-1;i>=0;i--){
        //     if(arr[i]>rmax)
        //         rmax=arr[i];
        //     right[i]=rmax;
        // }

        // for(int i=0;i<n;i++){
        //     if(((min(left[i],right[i]))-arr[i])>0){
        //         water+=(min(left[i],right[i]))-arr[i];
        //     }
            
        // }

        // return water;
