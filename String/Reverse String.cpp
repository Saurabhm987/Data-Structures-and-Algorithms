/* Write a function that takes a string as input and returns the string reversed. */


class Solution {
public:
    string reverseString(string s) {
        int m = 0;
        int n = s.length() - 1;
        
        while (m < n) {
            char t = s[m];
            s[l] = s[n];
            s[n] = t;
            ++m;
            --n;
        }
        return s;
    }
};
