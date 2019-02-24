/*
Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.
*/


class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        int sum = 0;
        string s;
        
        while ( i >= 0 || j >= 0){
            
            if(i >= 0){
                
                sum += a.at(i) - '0';
                i-- ;
            }
            
            if( j >= 0){
                
                sum += b.at(j) - '0';
                j--;
            }
            
            sum = sum + carry;
            
            if( sum > 1) {
                
                carry = 1;
            }
            else{
                
                carry = 0;
            }
            
            if(sum % 2==0)
                s += '0';
            else if(sum % 2 == 1)
                s += '1';
            sum = 0;
        }
        
        if( carry == 1){
            
            s += '1';
        }
        reverse(s.begin(), s.end());
        
        return s;
    }
};
