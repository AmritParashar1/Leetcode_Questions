class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid; // Target found
            } 
            else if (nums[mid] < target) {
                low = mid + 1;  // Search in the right half
            } 
            else {
                ans = mid;  // Potential insertion point
                high = mid - 1;  // Search in the left half
            }
        }

        return ans; // Return the insertion point
    }
};
