class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xor_result = 0;

        for(int i=0;i<n;i++) {
            xor_result = xor_result ^ nums[i];
        }

        return xor_result;
        
    }
};