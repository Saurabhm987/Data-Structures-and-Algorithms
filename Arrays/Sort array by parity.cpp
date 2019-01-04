/*
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
*/


class Solution {
public:
     vector<int> sortArrayByParity(vector<int> &A) { 
                
        for (int i = 0, j = 0; j < A.size(); j++){
            if (A[j] % 2 == 0){
                swap(A[i++], A[j]);
            }
        }
        return A;
    }
};
