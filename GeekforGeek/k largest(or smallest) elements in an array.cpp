//https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/
#include<bits/stdc++.h>
using namespace std;

void kthLarge(int a[],int n,int k)
{
    bool flag;
    for(int i=0;i<k;i++){
        for(int j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag=true;
            }
        }
        if(!flag)
            break;
    }

    cout<<a[n-k]<<endl;

}


int main()
{
    int n=7,k=3;

    int a[]={7,6,5,4,3,2,1};

    kthLarge(a,n,k);

    return 0;
}

//Approach-1:
//void kthLarge(int a[],int n,int k)
//{
//    bool flag;
//    for(int i=0;i<k;i++){
//        for(int j=0;j<(n-i-1);j++){
//            if(a[j]>a[j+1]){
//                swap(a[j],a[j+1]);
//                flag=true;
//            }
//        }
//        if(!flag)
//            break;
//
//    }
//
//    cout<<a[n-k]<<endl;
//
//}

//Approach-2
//    int kthSmallest(int arr[], int l, int r, int k) {
//        r++;
//        sort(arr,arr+r);
//        return arr[k-1];
//    }

//approach -3:

//void kthLarge(int a[],int n,int k)
//{
//    set<int> s(a,a+n);
//    set<int>::iterator itr
//        = s.begin(); // s.begin() returns a pointer to first
//                     // element in the set
//    advance(itr, k - 1); // itr points to kth element in set
//
//}
