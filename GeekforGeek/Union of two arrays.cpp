//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1


#include <bits/stdc++.h>
using namespace std;


void print(int a[],int n){

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<""<<endl;
}


class Solution{
    public:

    int doUnion(int a[], int n, int b[], int m)  {

        // approach 01:(STL set)
//        set<int> s;
//
//        for(int i=0;i<n;i++){
//            s.insert(a[i]);
//        }
//        for(int i=0;i<m;i++){
//            s.insert(b[i]);
//        }
//
//        return s.size();

          //O(m * log(m) + n * log(n))


        //approach 02:(STL map)
//
//        map<int,int> map1;
//        for(int i=0;i<n;i++){
//            map1.insert(make_pair(a[i],i));
//        }
//
//        for(int i=0;i<m;i++){
//            map1.insert(make_pair(b[i],i));
//        }
//
//
//        return map1.size();

        //O(m+n)

        //Approach: 03(Union ALgo) if element are distinct

//        int i=0,j=0,ct=0;
//
//        while(i<n && j<m){
//            if(a[i]<b[j]){
//                i++;
//                ct++;
//            }
//            else if(a[i]>b[j]){
//                j++;
//                ct++;
//            }
//            else{
//                i++;
//                j++;
//                ct++;
//            }
//        }
//
//        while(i<n){
//                i++;
//            ct++;
//        }
//
//        while(j<m){
//                j++;
//            ct++;
//        }
//
//        return ct;

    //Approach 04:(03 update handling dublicate)

//        int i=0,j=0,ct=0;
//
//        int x[n],y[m];
//        int x_ct=0,y_ct=0;
//
//        sort(a,a+n);
//        sort(b,b+m);
//
//        for(int i=1;i<n;i++){
//            if(a[i-1]!=a[i]){
//                x[x_ct]=a[i-1];
//                x_ct++;
//
//            }
//        }
//        x[x_ct]=a[n-1];
//        x_ct++;
//
//
//        for(int i=1;i<m;i++){
//            if(b[i-1]!=b[i]){
//                y[y_ct]=b[i-1];
//                y_ct++;
//            }
//        }
//
//        y[y_ct]=b[m-1];
//        y_ct++;
//
//        //print(x,x_ct);
//
//
//        while(i<x_ct && j<y_ct){
//            if(x[i]<y[j]){
//                i++;
//                ct++;
//            }
//            else if(x[i]>y[j]){
//                j++;
//                ct++;
//            }
//            else{
//                i++;
//                j++;
//                ct++;
//            }
//        }
//
//        while(i<x_ct){
//                i++;
//                ct++;
//        }
//
//        while(j<y_ct){
//                j++;
//                ct++;
//        }
//
//        return ct;


//INTERSECT:

        int i=0,j=0,ct=0;

        int x_sz=0,y_sz=0;
        int x[n],y[m];

        sort(a,a+n);
        sort(b,b+m);

        for(int i=0;i<n;i++){
                if((i+1)<n){
                    if(a[i]!=a[i+1]){
                        x[x_sz]=a[i];
                        x_sz++;
                    }
                }
        }

        x[x_sz]=a[n-1];
        x_sz++;

        for(int i=1;i<m;i++){
            if(b[i-1]!=b[i]){
                y[y_sz]=b[i-1];
                y_sz++;
            }
        }

        y[y_sz]=b[m-1];
        y_sz++;

        while(i<x_sz && j<y_sz){
            if(x[i]<y[j]){
                i++;

            }
            else if(x[i]>y[j]){
                j++;
            }
            else{
                i++;
                j++;
                ct++;
            }
        }

    }
};


int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];

	    for(int i = 0;i<n;i++)
	       cin >> a[i];

	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;

	}

	return 0;
}
