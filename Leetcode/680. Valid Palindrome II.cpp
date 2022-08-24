//680. Valid Palindrome II


class Solution {
public:
    bool validPalindrome(string s) {
        
        int n=s.size();
        
        int left=0;
        int right=n-1;
        
        int i,j;
        int ct=0;
        
        while(left<right){
            if(s[left]!=s[right]){
                i=left;
                j=right;
                ct++;
                break;
            }

            left++;
            right--;
                
        }

        if(ct==0){
            return true;
        }
            
        
        //step 2:
        
        left=0;
        right=n-1;
        int state=1;
        while(left<right){
            if(left==i){
                left++;
            }
                
            
            if(s[left]!=s[right]){
               state=0; 
            }

            left++;
            right--;
        }
        
        if(state){
            return true;
        }
        
        //step3:
        
        left=0;
        right=n-1;
        state=1;
        while(left<right){
            if(right==j)
                right--;
            
            if(s[left]!=s[right]){
               state=0;
               return false; 
            }

            left++;
            right--;
        }
        
        if(state){
            return true;
        }      
        
       return false;
    }
};