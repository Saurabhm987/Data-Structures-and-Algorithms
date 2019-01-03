/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
*/


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
             return false;
        }
        int a = 0, y = x;
        while (x > 0) {
            a = a * 10 + x % 10; 
            x /= 10; 
        }
        return a == y;
    }
};
