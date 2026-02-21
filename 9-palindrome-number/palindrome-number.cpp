class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        if(num<0){
            return false;
        }
        int rev = 0;
        while(num != 0){
            int rem = num%10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return false;
            rev = rev *10 + rem ;
            num = num/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};