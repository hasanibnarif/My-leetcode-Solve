class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector< vector<int> > ret;
        
        // let's sort, so that we can apply TWO POINTER algo
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        // first thing first, let's take a unique pair each time
        // here the i-loop and j-loop doing this for us
        // how to avoid duplication? notice what I did there
        // if(i>0 && nums[i]==nums[i-1])  and if(j>i+1 && nums[j]==nums[j-1])  contidion get this covered for us
        
        for(int i=0;i<n-3;i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            for(int j=i+1;j<n-2;j++) {
                
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                
                
                // so, we have a pair of numbers.
                // how can we find the other pair of numbers? EfficientLY?
                // the ans is TWO POINTERS method
                // out target is to find t, which is target MINUS sum of first pair, hmm? 
                
                long long int t = target - (nums[i] + nums[j]);
                
                int lo = j+1, hi = n-1;
                
                
                
                while(lo<hi) {
                    
                
                    if(lo>j+1 && nums[lo]==nums[lo-1]) { // to avoid duplicatation, jus lyk before
                        lo++; continue;
                    }

                    long long int ss = nums[lo]+nums[hi]; 
                    if(ss==t) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        
                        ret.push_back(temp); // we need all Unique set, remember?
                        lo++; hi--;
                    }
                    
                    else if(ss>t) hi--;
                    
                    else lo++;
                }
                
                
            }
            
             
        }
        
        // there u go!
                       
        return ret;
    }
};