class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int Start = 0, end = nums.size() - 1;
        
          while(Start <= end){
            int mid = Start + (end - Start) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                Start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return Start; 
    }
};