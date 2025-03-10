class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAreaa = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left<right) {
           maxAreaa = max(maxAreaa , (right-left)*min(height[left],height[right]));

            if(height[left]<height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxAreaa; 
        
    }
};