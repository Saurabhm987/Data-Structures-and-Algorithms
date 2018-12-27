/* 
Given an array A of non-negative integers, half of the integers in A are odd, and half of the integers are even.

Sort the array so that whenever A[i] is odd, i is odd; and whenever A[i] is even, i is even.

You may return any answer array that satisfies this condition.
*/




class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        for(int i=0,j=1;j<A.size();){
            if(A[i]%2 == 1 && A[j]%2 == 0){
                swap(A[i],A[j]);
                i=i+2;
                j=j+2;
            }else if(A[i]%2 == 0 && A[j]%2 == 0){
                i=i+2;
            }else if(A[i]%2 == 1 && A[j]%2 == 1){
                j=j+2;
            }else{
                i=i+2;
                j=j+2;
            }
        }
        return A;
    }
};
