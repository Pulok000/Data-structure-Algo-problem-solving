// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution{
public:



    void print(int arr[0], int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<""<<endl;
    }

    int nxtgap(int gap){
        if(gap<=1)
            return 0;

        return (gap/2)+(gap%2);
    }


    void merge(int arr1[], int arr2[], int n, int m) {
        // code here

        //Approach 01:
        // int i=0,j=0,k=n-1;

        // while(i<n && j<m){
        //     if(arr1[i]<arr2[j]){
        //         i++;
        //     }
        //     else{
        //         swap(arr2[j],arr1[k]);
        //         j++;
        //         k--;
        //     }
        // }
        // sort(arr1,arr1+n);
        // sort(arr2,arr2+m);


        //Approach 03:(gap algorithms)

        int p1=0,p2;

        int gap=nxtgap(n+m);

        p2=gap;


        while(gap>0){

            while(p2<m+n){

                if(p1<n && p2 <n){

                    if(arr1[p1]>arr1[p2])
                        swap(arr1[p1],arr1[p2]);

                    p1++;
                    p2++;
                }
                else if(p1<n && p2>=n){
                    p2=p2-n;

                    if(arr1[p1]>arr2[p2])
                        swap(arr1[p1],arr2[p2]);


                    p1++;
                    p2++;
                    p2+=n;
                }
                else{
                    p1=p1-n;
                    p2=p2-n;


                    if(arr2[p1]>arr2[p2])
                        swap(arr2[p1],arr2[p2]);


                    p1++;
                    p2++;

                    p1=p1+n;
                    p2=p2+n;
                }

            }
                gap=nxtgap(gap);

                p1=0;
                p2=gap;

        }



    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends

        //Attempt 01--> TLE
        // int temp;

        // for(int i=0;i<m;i++){

        //     for(int j=0;j<n;j++){
        //         if(arr2[i]<arr1[j]){
        //             swap(arr1[j],arr2[i]);
        //         }
        //     }
        // }

        // sort(arr2,arr2+m);

        //Approach 02:TLE
        // int i=0;

        // while(arr1[n-1]>arr2[0]){

        //     if(arr1[i]>arr2[0]){
        //         swap(arr1[i],arr2[0]);
        //         sort(arr2,arr2+m);
        //     }
        //     i++;
        // }
