class Solution {
public:
int countstudents(vector<int>arr,int pages)
{
    int student = 1;
    long long pageStudent = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(pageStudent + arr[i] <= pages)
        {
            pageStudent+=arr[i];
        }
        else
        {
            student++;
            pageStudent = arr[i];
        }
    }
    return student;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low <=high)
    {
        int mid = (low + high)/2;
        int students = countstudents( arr,mid);
        if(students>m)
        {
            low = mid + 1;
        }
        else high = mid - 1;
 
    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
        
        
    }
};