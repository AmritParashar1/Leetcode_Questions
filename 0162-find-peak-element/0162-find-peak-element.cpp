class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();

        if(n==1) return 0;

        if(arr[0] > arr[1]) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;

        int low = 1; int high = n-2;

        while(low<=high)
        {
            int mid = low + (high - low)/2;

            if(arr[mid]> arr[mid-1] && arr[mid] > arr[mid+1])
            {
                return mid;
            }

            //visualise kar le bhai yaha pe , pichli baar visualise karke
            // click kar gaya tha

            else if(arr[mid] > arr[mid-1])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return -1;
        
    }
};