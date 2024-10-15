class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> map;

        int sum = 0; int result = 0;
        map[sum] = 1;

        for(int n:nums)
        {
            sum = sum+n;
            result = result + map[sum-k];
            map[sum]++;
        }

        return result;
        
    }
};