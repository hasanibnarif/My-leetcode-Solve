class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        int sum,best_sum;
        
        
        // lets say nums are a, b,c. so final ans = a+b+c
        // the naive approach will be 3 nested loop looking for best a,b and c
        // complexity n^3 .... very bad
        
        
        // a better approach will be - 
        
        // 1. sort the array
        
        sort(nums.begin(), nums.end());


        // 2. iterate over a
        
        
        for(int i=0;i<n-2;i++) {

           
            
            // 3. then binary search for best combination of b and c
        
            int lo = i+1, hi = n-1;
            
            while(lo<hi) {
                int sum = nums[i] + nums[lo] + nums[hi]; // sum = a + b + c
                
                if(sum==target) return sum;
                
                
                // let's store our best result for returning later
                if( abs(sum-target) < abs(best_sum-target) ) {
                    best_sum = sum;
                }
                
                // you know what i mean right? pretty binary search thing
                if(sum > target) hi--;
                else lo++;
            }
            
            // which will reduce our complexity to n^2
        }
        
        
        // there u go!
        
        return best_sum;
    }
};