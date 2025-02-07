class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int maxSum = nums[0];
        int currSum = 0;

        for(int i=0;i<n;i++) {
            currSum = currSum + nums[i];
            maxSum = max(maxSum , currSum);

            if(currSum <0) currSum = 0;
        }

        return maxSum;

        
    }
};