class Solution {
public:

    int sumOfDigits(int num) {
        int sum = 0;
        while(num>0) {
            sum += num%10;
            num /= 10;
        }

        return sum;
    }
       int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> digitSumMap;
        int maxSum = -1;

        for (int num : nums) {
            int digitSum = sumOfDigits(num);
            digitSumMap[digitSum].push_back(num);
        }

        for (auto& [sum, numbers] : digitSumMap) {
            if (numbers.size() > 1) {
                sort(numbers.begin(), numbers.end(), greater<int>());
                maxSum = max(maxSum, numbers[0] + numbers[1]);
            }
        }

        return maxSum;
    }

};