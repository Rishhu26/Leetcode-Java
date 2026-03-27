class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int left = 0;
        int right = nums.size();
        for(int i = 0; i < right; i++){
            if(nums[i] != 0){
                int temp = nums[left];
                nums[left] = nums[i];
                nums[i] = temp;
                left++;
            }
        }
        
    }
};