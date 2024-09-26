class Solution {
public:
    bool isPalindrome(int x) {

        int reverseno = 0;
        int dup = x;

        while(x>0)
        {
            int lastdigit = x % 10;
            if((reverseno > INT_MAX/10) || (reverseno < INT_MIN/10))
            {
                return 0;
            }

            reverseno = (reverseno*10) + lastdigit;

            x = x/10;
        }

        if(dup == reverseno) return true;
        else return false;
        
    }
};