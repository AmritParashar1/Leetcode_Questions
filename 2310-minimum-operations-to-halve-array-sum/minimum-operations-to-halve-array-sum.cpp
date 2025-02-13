class Solution {
public:
    int halveArray(vector<int>& nums) {

        priority_queue<double>maxHeap;

        double totalSum = 0; double reducedSum = 0;
        int operations = 0;

        for(int num : nums) {
            maxHeap.push(num);
            totalSum += num;
        } 

        double target = totalSum/2;

        while(reducedSum < target) {
            double largest = maxHeap.top();
            maxHeap.pop();

            largest = largest/2;
            reducedSum += largest;

            maxHeap.push(largest);
            operations++;
        }

        return operations;
        
    }
};