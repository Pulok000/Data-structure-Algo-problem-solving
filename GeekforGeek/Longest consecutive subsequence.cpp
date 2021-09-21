// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here


      //Approach 01:hashing

      int n=1e6+102;
      int ct=0;
      bool on=0;

      
      vector<int> v(n);
      int ans=INT_MIN;

      for(int i=0;i<N;i++){
        v[arr[i]]=1;
      }

      for(int i=0;i<n;i++){

        if(v[i]>0 && (!on)){
          ct++;
          on=1;

        }
        else if(v[i]>0 && on){
          ct++;
        }
        else if(v[i]==0 && on){

          if(ct>ans)
            ans=ct;

          ct=0;

          on=0;
        }
      }

      return ans;

    }


};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
