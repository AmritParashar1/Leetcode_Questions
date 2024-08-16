class Solution {
public:

    int findmax(vector<int>& piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculatetotalhours(vector<int>& piles, int hourly) {
        long long totalh = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++) {
            // Using integer arithmetic to calculate ceiling of division
            totalh += (piles[i] + hourly - 1) / hourly;
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1; 
        long long high = findmax(piles);

        while(low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalh = calculatetotalhours(piles, mid);

            if(totalh <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
