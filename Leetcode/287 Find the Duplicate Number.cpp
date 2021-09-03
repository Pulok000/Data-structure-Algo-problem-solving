#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //total approach 04;




//Approach: 02
        // int l=10e5+100;

        // vector<int> v(l);
        // int temp,ans;

        // for(int i=0;i<nums.size();i++){
        //     temp=nums[i];

        //     v[temp]+=1;

        //     if(v[temp]>1)
        //         ans=temp;
        // }



        // return ans;

        //O(n) O(n) 

//Approach 03:

        int ans,temp;

        for(int i=0;i<nums.size();i++){
            temp=abs(nums[i]);

            if(nums[temp]>0)
                nums[temp]=-nums[temp];
            else
                ans=abs(nums[i]);
        }

        return ans;
        }

        //O(n) O(1) but change the signg of array(make changes in the array)
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        

        vector<int> nums(n);

        for(int i=0; i<n; i++)
            cin>>nums[i];
        Solution obj;
        cout<<obj.findDuplicate(nums)<<endl;
    }
    return 0;
}


        //Approach 01: O(NlogN)
        
        // int n=nums.size();
        
        // sort(nums.begin(),nums.end());
        
        // int ans;
        
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1]){
        //         ans=nums[i];
        //         break;
        //     }
        // }
        
        // return ans;

        //modify array + O(n log n) -->problem
