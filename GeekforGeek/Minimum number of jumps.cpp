#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:

    int minJumps(int arr[], int n){
        // Your code here
        int step=arr[0],maxStep=arr[0],jump=1;

        if((n-1)==0)
            return 0;
        else if(arr[0]==0 && n-1>0)
            return -1;
        else{
            for(int i=1;i<n;i++){
                step--;
                
                maxStep=max(maxStep,(arr[i]+i));

                if(step==0){
                    jump++;
                    if(i>=maxStep)
                        return -1;

                    step=maxStep-i;

                    if(i+step>=n-1)
                        break;
                }
            }
        }

        return jump;

    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

    // int maxInx(int index,int step,int arr[]){
    //     int ans=INT_MIN,r=index,ct=0;
    //     for(int i=index;i<index+step+1;i++){

    //         if(arr[i]+ct>ans && arr[i]!=0){
    //             ans=arr[i];
    //             r=i;
    //         }
    //         ct++;
    //     }

    //     if(r==index)
    //         r+=step;

    //     return r;
    // }


        // int end=n-1,ans=0,index=0,step,x=0;
        // bool flag;

        // while(n--){

        //     //cout<<"index: "<<index<<endl;

        //     ans++;
        //     if(arr[index]==0){
        //          if(index>=end){
        //             flag=true;
        //          }
        //         break;               
        //     }

            
        //     if((arr[index]+index)>=end){
        //         flag=true;
        //         break;
        //     }
        //     else{
        //     step=arr[x];
        //     index=maxInx(x,step,arr);

        //     if(x==index){
        //         break;
        //     }
        //     else
        //         x=index;

            

        //     }

        // }
        
        //     if(!flag){
        //     ans=-1;
        // }

        // return ans;
