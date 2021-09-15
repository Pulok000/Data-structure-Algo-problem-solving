// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


  
void rearragePosNeg(int a[],int n)
{
    //code here.
    int s=0,e=n-1,l_sz=0;


    while(s<e){

        if(a[s]>0){
            s++;
        }
        else{
            swap(a[s],a[e]);
            e--;
        }

        if(a[s]>0)
            l_sz++;

    }

    if(a[s+1]>0)
        l_sz++;


    //l_sz=(n-1)-l_sz;

     e=n-1;//same var used

    cout<<"l_sz: "<<l_sz<<endl;
    int r_sz=n-l_sz;
     cout<<"r_sz: "<<r_sz<<endl;

    cout<<"n: "<<((n-1)-l_sz)<<endl;

    int i=0;

    while(i<l_sz){
        //cout<<"Test"<<endl;

            if((i%2)==0 && r_sz>0){
                //cout<<"test1"<<endl;

                while(a[e]==0 && ((r_sz-1)>=0)){
                    e--;
                    r_sz--;
                }

                if(a[e]!=0 && ((r_sz-1)>=0)){

                swap(a[e],a[i]);
                e--;
                r_sz--;

                }

                

            }

    i++;        
    }

    s=l_sz;
    e=n-1;


    // if(r_sz>1){
    //     while(s<e){
    //         swap(a[s],a[e]);
    //     }

    // }






}



// { Driver Code Starts.

int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >>n;
        int a[n];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        rearragePosNeg(a,n);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        

    }
}  // } Driver Code Ends
