#include<bits/stdc++.h>

using namespace std;


int maxProfit(vector<int>& prices) {

    //Approach :02 -> O(N)
    
    int small=INT_MAX;
    int diff=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<small)
            small=prices[i];

        if((prices[i]-small)>diff)
            diff=prices[i]-small;
    }


    return diff;

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<maxProfit(v)<<endl;

    return 0;
}


    //Approach 01: TLE
    
    // int n=prices.size();
    // //cout<<prices[2]<<endl;

    // int diff=INT_MIN;
      
    //   for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         //cout<<"test"<<endl;
    //         if(abs(prices[i]-prices[j])>diff && prices[i]<prices[j]){
    //             diff=abs(prices[i]-prices[j]);
    //             // cout<<"prices["<<i<<"]"<<prices[i]<<endl;
    //             // cout<<"prices["<<j<<"]"<<prices[j]<<endl;
    //         }
    //     }
        
    //   }  

    //   if(diff==INT_MIN)
    //     return 0;

    //   return diff;

    //O(N);
