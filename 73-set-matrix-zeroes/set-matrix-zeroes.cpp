class Solution {
public:

    void MarkRow(vector<vector<int>>& arr,int n , int m,int i) {
        for(int j=0;j<m;j++) {
            if(arr[i][j]!=0) {
                arr[i][j] = -1000;
            }
        }
    }

    void MarkCol(vector<vector<int>>& arr,int n , int m ,int j) {
        for(int i=0;i<n;i++) {
            if(arr[i][j]!=0) {
                arr[i][j] = -1000;
            }
        }
    }
    void setZeroes(vector<vector<int>>& arr) {

        int n = arr.size(); int m = arr[0].size();

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==0) {
                    MarkRow(arr,n,m,i);
                    MarkCol(arr,n,m,j);
                }
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==-1000) {
                    arr[i][j] = 0;
                }
            }
        }
        
    }
};