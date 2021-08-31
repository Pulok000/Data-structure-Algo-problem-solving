//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout<<#x<<" "<<x<<endl;

#define pb push_back
#define mp make_pair
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define test() cout<<"test-"<<c++<<endl;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void printV(vector<int> v);
void printS(set<int> s);

//ll solve()
void solve(int a[],int n)
{
int s=0,e=n-1,minVal=INT_MAX,maxVal=INT_MIN;

while((n/2)>s){

//FOR MIN VALUE
if(minVal>a[s])
    minVal=a[s];
if(minVal>a[e])
    minVal=a[e];

//FOR MAX VALUE
if(maxVal<a[s])
    maxVal=a[s];
if(maxVal<a[e])
    maxVal=a[e];

    s++;
    e--;
}

if((n%2)!=0){

if(minVal>a[e])
    minVal=a[e];


if(maxVal<a[e])
    maxVal=a[e];
}

cout<<"MinValue: "<<minVal<<endl;
cout<<"MaXValue: "<<maxVal<<endl;

}

int main()
{
optimize();

int n=5;
//cin>>n;

int a[]={1,2,3,4,5};

//for(int i=0;i<n;i++){
//    cin>>a[i];
//}
solve(a,n);


return 0;
}


void printV(vector<int> v)
{
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<endl;
    }
}

void printS(set<int> s)
{
    for(auto i=s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<endl;
    }
}
