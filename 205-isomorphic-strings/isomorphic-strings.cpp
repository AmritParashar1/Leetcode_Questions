class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int hashmap[256] = {0};
        bool istmapped[256] = {0};

        for(int i=0;i<s.length();i++) {
            if(hashmap[s[i]] == 0 && istmapped[t[i]]==0) {
                hashmap[s[i]] = t[i];
                istmapped[t[i]] = true;
            }
        }

        for(int i=0;i<s.size();i++) {
            if(char(hashmap[s[i]]) != t[i]) {
                return false;
            }
        }
        return true;
        
    }
};