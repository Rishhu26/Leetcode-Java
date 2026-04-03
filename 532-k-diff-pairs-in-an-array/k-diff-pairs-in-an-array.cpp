class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;

        sort(nums.begin(), nums.end());
        
        int start = 0, end = 1;
        int n = nums.size();
        int count = 0;

        while(end < n){
            int diff = nums[end] - nums[start];

            if(diff == k){
                count++;

                start++;
                end++;

                 while(end < n && nums[end] == nums[end-1]) end++;
            }
            else if(diff < k){
                end++;
            }
            else{
                start++;
            }

            if(start == end) end++;
        }
        return count;
    }
};