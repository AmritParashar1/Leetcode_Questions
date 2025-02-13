class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        priority_queue<long long , vector<long long> , greater<long long>> minHeap(nums.begin(),nums.end());
        int operations = 0;


        while(minHeap.size()>1 && minHeap.top()<k) {
            long long smallest = minHeap.top(); minHeap.pop();
            long long secondSmallest = minHeap.top(); minHeap.pop();

            long long newElement = smallest * 2 + secondSmallest;
            minHeap.push(newElement);
            operations++;
        }

        return operations;


        
    }
};