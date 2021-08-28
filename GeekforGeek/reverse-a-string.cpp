// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;

	cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){

//way 1:
//int n,temp,i=0;
//n=str.size()-1;
//
//while((n/2)+1>i){
//
//  temp=str[n-i];
//  str[n-i]=str[i];
//  str[i]=temp;
//  i++;
//}

//way 2:
int n,s,e,temp;
n=str.size();
s=0;
e=n-1;

while(s<e){
   temp=str[s];
   str[s]=str[e];
   str[e]=temp;
   s++;
   e--;
}


  return str;
}
