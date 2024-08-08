class Solution {
public:
    int reverse(int x) {
        int reverseno = 0;

        while(x != 0)
        {
            int lastdigit = x%10;

            if((reverseno > INT_MAX/10) || (reverseno < INT_MIN/10))
            {
                return 0;
            }
            
            x = x/10;
            reverseno = (reverseno * 10) + lastdigit;
        }

        return reverseno;
    }
};