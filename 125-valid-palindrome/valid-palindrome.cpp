#include <algorithm>
class Solution {
public:
    bool isPalindrome(string s) {
    string newstring = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                newstring += tolower(s[i]);
            }
        }
    int n = newstring.size();
    for(int i=0;i<n/2;i++){
        if(newstring[i]!=newstring[n-i-1]){
             return false;
        }       
    }
    return true;
    }
};