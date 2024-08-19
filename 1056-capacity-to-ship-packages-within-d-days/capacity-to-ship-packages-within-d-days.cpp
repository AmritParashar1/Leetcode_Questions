class Solution {
public:
    int daysreq(vector<int>& weights , int capacity)
    {
        int n = weights.size();
        int days = 1;
        int load = 0;

        for(int i=0;i<n;i++)
        {
            if(load + weights[i] > capacity)
            {
                days = days + 1;
                load = weights[i];
            }
            else
            {
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = accumulate(weights.begin(),weights.end(),0);
        int maxweight = *max_element(weights.begin(),weights.end());

        
        int low = maxweight ; int high = sum;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int daysrequired = daysreq(weights,mid);

            if(daysrequired <= days)
            {
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }

        }
        return low;

        
    }
};