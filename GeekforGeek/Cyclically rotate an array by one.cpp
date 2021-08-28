#include <bits/stdc++.h>
using namespace std;

void reverseal(int a[],int s,int e){

int temp;

while(s<e){

    temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    s++;
    e--;
}

}

void rotate(int arr[], int n)
{
//Approach 01: Normal Reverse

//int temp;
//for(int i=n-1;i>0;i--){
//
//        temp=arr[i];
//        arr[i]=arr[i-1];
//        arr[i-1]=temp;
//}

//Approach 02: Two pointers

//int temp;
//int i=0,j=n-1;
//
//while(i!=j){
//    temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//    i++;
//
//}

//Approach 03:
        int d=n-1;

        reverseal(arr,0,d-1);
        reverseal(arr,d,n-1);
        reverseal(arr,0,n-1);



}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}


