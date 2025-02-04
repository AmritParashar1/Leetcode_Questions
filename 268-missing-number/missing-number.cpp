class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int xor_result = n;

        for(int i=0;i<n;i++) {
            xor_result = xor_result ^ i ^ nums[i];
        }

        return xor_result;
        
    }
};