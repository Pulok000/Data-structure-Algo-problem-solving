// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 

        int l=0,r=0,sum=arr[0],ans=0;  
        int res=INT_MAX;
        int temp;
        while(r<n){
            
            if(sum>x){
                
                temp=(r-l)+1;
                res=min(res,temp);

                if((sum-arr[l])>x){
                    sum-=arr[l];
                    ans--;
                    l++;
                    temp=(r-l)+1;
                    res=min(res,temp);
                }
                else{

                    r++;
                    sum+=arr[r];
                    ans++;

                }


            }
            else{
                r++;
                sum+=arr[r];
                ans++;
                
            }
            

        }  



        return res;
    }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution obj;
        cout<<obj.smallestSubWithSum(a,n,x)<<endl;
    }
    return 0;
}  // } Driver Code Ends
