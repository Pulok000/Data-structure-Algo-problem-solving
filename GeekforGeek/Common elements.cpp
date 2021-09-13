// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.

            vector<int> v;

            int a=0,b=0,c=0;

            while((a<n1) && (b<n2) && (c<n3)){


                while((a>0) && (A[a-1]==A[a])){
                    if(a>=n1)
                        break;
                    a++;
                }
                while((b>0) && (B[b-1]==B[b])){
                    if(b>=n2)
                        break;
                    b++;
                }
                while((c>0) && (C[c-1]==C[c])){
                    if(c>=n3)
                        break;
                    c++;
                }


                if((A[a]==B[b]) && (B[b]==C[c])){

                    v.push_back(A[a]);
                    a++;
                    b++;
                    c++;
                }
                else if((A[a]<=B[b]) && (A[a]<=C[c])){

                    if(A[a]==B[b])
                        b++;

                    if(A[a]==C[c])
                        c++;

                    a++;
                }
                else if((B[b]<=A[a]) && (B[b]<=C[c])){

                    if(B[b]==A[a])
                        a++;

                    if(B[b]==C[c])
                        c++;

                    b++;
                }
                else{

                    if(C[c]==A[a])
                        a++;

                    if(C[c]==B[b])
                        b++;

                    c++;
                }

                // cout<<"start"<<endl;

                // cout<<"a: "<<a<<endl;
                // cout<<"b: "<<b<<endl;
                // cout<<"c: "<<c<<endl;

                // cout<<"end"<<endl;
            }


            return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
