class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        // If numRows is 0, return an empty triangle
        if (numRows == 0) return triangle;
        
        // Initialize the first row
        triangle.push_back({1});
        
        for (int i = 1; i < numRows; i++) {
            vector<int> row(i + 1, 1); // Create a row with i+1 elements initialized to 1
            
            // Compute the values for the current row
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            // Add the current row to the triangle
            triangle.push_back(row);
        }
        
        return triangle;
    }
};
