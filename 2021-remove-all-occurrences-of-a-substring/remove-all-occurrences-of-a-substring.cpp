class Solution {
public:
    string removeOccurrences(string s, string part) {

        for(int i=0;i<s.length();i++) {
            for(int j=0;j+part.length()<=s.length();j++) {
                bool match = true;
                
                for(int k=0;k<part.length();k++) {
                    if(s[j+k] != part[k]) {
                        match = false;
                        break;
                    }
                }

                if(match) {
                    s.erase(j,part.length());
                    i = -1;
                    break;
                }

            
            }
        }

        return s;
        
    }
};