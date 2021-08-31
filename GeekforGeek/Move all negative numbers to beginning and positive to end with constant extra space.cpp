#include<bits/stdc++.h>

using namespace std;

void sort01(int a[],int n)
{
int s=0,e=n-1;
while(s<e){
    if(a[e]<0){
        swap(a[e],a[s]);
        s++;
    }
    else{
        e--;
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
    sort01(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<""<<endl;


    return 0;
}
