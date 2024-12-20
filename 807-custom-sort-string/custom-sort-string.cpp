class Solution {
public:
    static string str;
    static bool compare(char char1 , char char2) {

        //this will return true if char1 in str string is less than the position of char2 in the 
        //str string.

        //when true is returned , then char1 is placed before char2 in the output string.
        return(str.find(char1) < str.find(char2));

    }
    string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
        
    }
};
string Solution :: str;