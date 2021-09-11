// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
        void merge(long long a[],long long l,long long r,long long mid,long long &ct)
        {
            long long l_sz=mid-l+1;
            long long L[l_sz+1];
            long long r_sz=r-(mid+1)+1;
            long long R[r_sz+1];

            for(long long i=0;i<l_sz;++i){
                L[i]=a[i+l];
            }

            for(long long i=0;i<r_sz;++i){
                R[i]=a[i+mid+1];
            }

            L[l_sz]=R[r_sz]=LLONG_MAX;

            int l_i=0;
            int r_i=0;
            // cout<<"start:"<<endl;
            // cout<<"l: "<<l<<endl;
            // cout<<"r: "<<r<<endl;
            for(int i=l;i<=r;++i){

                // cout<<"L["<<l_i<<"]: "<<L[l_i]<<endl;
                // cout<<"R["<<r_i<<"]: "<<R[r_i]<<endl;
                if(L[l_i]>R[r_i]){
                  //  cout<<"X"<<endl;

                    a[i]=R[r_i];
                    r_i++;

                    if(L[l_i]!=LLONG_MAX)
                        ct=ct+((l_sz)-l_i);

                }
                else{

                    a[i]=L[l_i];
                    l_i++;

                }
            }
        }
        void mergeSort(long long a[],long long l,long long r,long long &ct)
        {
            if(l==r) return;
            long long mid=(l+r)/2;
            mergeSort(a,l,mid,ct);
            mergeSort(a,mid+1,r,ct);
            merge(a,l,r,mid,ct);
        }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long ct=0;
        mergeSort(arr,0,N-1,ct);
        return ct;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
