class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();  // Get the size of the input string
        int maxlen = 0;    // Variable to store the maximum length of the substring
        vector<int> hash(256, 0);  // Vector to store the last occurrence of characters, initialized to 0

        for (int i = 0; i < n; i++) {
            fill(hash.begin(), hash.end(), 0);  // Reset the hash for each new starting index i
            for (int j = i; j < n; j++) {
                if (hash[s[j]] == 1) break;  // If the character is already present, break the loop
                hash[s[j]] = 1;  // Mark the character as visited
                int len = j - i + 1;  // Calculate the current length of the substring
                maxlen = max(len, maxlen);  // Update the maximum length
            }
        }
        
        return maxlen;  // Return the maximum length found
    }
};
