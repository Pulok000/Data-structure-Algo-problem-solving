//

#include<bits/stdc++.h>

using namespace std;

void sort01(int a[],int n)
{
int l=0,r=n-1;
while(l<r){
    if(a[l]==1){
        swap(a[l],a[r]);
        r--;
    }
    else{
        l++;
    }
}
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort012(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<""<<endl;


    return 0;
}




