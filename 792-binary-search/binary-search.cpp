class Solution {
public:
    int search(vector<int>& nums, int target) {

        int Start = 0;
        int End = nums.size()-1;

        while (Start <= End) {
          int mid = Start + (End - Start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                Start = mid + 1;
            } else {
                End = mid - 1;
            }
        }
        return -1;
        
    }
};