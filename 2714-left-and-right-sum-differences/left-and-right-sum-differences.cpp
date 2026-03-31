class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        vector<int> ans;
        for(int i =0; i<n; i++){
            total_sum += nums[i];
           
        }
         int leftsum = 0;
        for(int i=0; i<n; i++){
            int right_sum = total_sum - nums[i] - leftsum;
            int diff  = abs(leftsum - right_sum);
            ans.push_back(diff);
            leftsum += nums[i];
        }   

        return ans;
 
        
    }
   
};