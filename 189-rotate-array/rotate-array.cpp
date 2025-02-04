class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; //this handles the case where k > n if k<n then k remains the same.

        // now we will reverse the array 
        reverse(nums.begin(),nums.end());

        // now reverse the first k elements 
        reverse(nums.begin(),nums.begin()+k);

        //now reverse the remaining elements after k

        reverse(nums.begin()+k,nums.end());
        
    }
};