class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashtable[256] = {0};

        for(int i=0;i<s.length();i++) {
            hashtable[s[i]]++; 
        }

        for(int i=0;i<t.length();i++) {
            hashtable[t[i]]--;
        }

        for(int i=0;i<256;i++) {
            if(hashtable[i]!=0) {
                return false;
            }
        }
        return true;
    }
};