// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int findS(vector<int>& v){

    for(int i=v.size()-1;i>0;i--){
       // cout<<"v[i]: "<<v[i]<<endl;
        if(v[i-1]<v[i]){
            return (i-1);
        }
    }
    return -1;
}



int findE(vector<int>& v,int s){


    int bigS=INT_MAX;
    int ans;

    for(int i=s;i<v.size();i++){
        // cout<<"v[i]:"<<v[i]<<endl;
        // cout<<"v[s]:"<<v[s]<<endl;
        // cout<<"bigS"<<bigS<<endl;

            if(v[i]>v[s] && v[i]<=bigS){

                bigS=v[i];
                ans=i;
            }
    }

    return ans;

}

void reverse(vector<int>& v,int s,int e){
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
}

    void nextPermutation(vector<int>& nums) {

        //Approach 03:


        int s=findS(nums);
        int e=findE(nums,s);
        // cout<<"S: "<<s<<endl;
        // cout<<"e: "<<e<<endl;


        if(s==-1){
            reverse(nums,0,nums.size()-1);
        }
        else{
            swap(nums[s],nums[e]);

            reverse(nums,s+1,nums.size()-1);

            //sort(nums.begin()+s+1,nums.end());
        }

        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<""<<endl;



        
    }

// { Driver Code Starts.

int main()
{
    int t,n,m;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

    
       
        nextPermutation(v);




    }
}




        //Approach 01:
        
        // if(next_permutation(nums.begin(),nums.end())){
        //     //pass
        // }
        // else{
        //     sort(nums.begin(),nums.end());
        // }


        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<""<<endl;


//Approach:02

        // int s=findS(nums);
        // int e=findE(nums,s);
        // // cout<<"S: "<<s<<endl;
        // // cout<<"e: "<<e<<endl;


        // if(s==-1){
        //     sort(nums.begin(),nums.end());
        // }
        // else{
        //     swap(nums[s],nums[e]);
        //     sort(nums.begin()+s+1,nums.end());
        // }


        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<""<<endl;
