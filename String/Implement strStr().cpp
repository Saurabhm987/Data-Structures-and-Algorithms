/* Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Input: haystack = "hello", needle = "ll"
Output: 2
*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int len_h = haystack.size();
        int len_n = needle.size();
        int gap_hn = len_h - len_n;
        int index_h = 0;
        
        if(len_n == 0){
            
            return 0;
        }
        
        if( len_n > len_h){
            
            return -1;
        }
        
        while ( index_h <= gap_hn){
            
            int index_n = 0;
            for(; index_n < len_n; index_n ++){
                
                if(haystack[index_h + index_n] != needle[index_n]){
                    break;
                }
            }
            
            if(index_n == len_n){
                return index_h;
            } 
            
            index_h ++;
        }
        
        return -1;
    }
};
