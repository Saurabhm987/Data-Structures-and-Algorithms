/ *Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself. */


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; 
        int i = digits.size()- 1;
        
        while (carry ==  1 && i >= 0){
            digits[i] = digits[i] + carry;    // adding 1 to the last element;
            carry = digits[i] / 10 ;            // checking whether the value is less than 9 
            digits[i] = digits[i] % 10;       // will get 0 to insert in vector
            i--;
        }
        
        if(carry == 1){
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};
