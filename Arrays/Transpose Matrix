/*
Given a matrix A, return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int m=A.size(),n=A[0].size();
        vector<vector<int>> answer(n);
        for(int j=0;j<n;j++)
        for(int i=0;i<m;i++)
        answer[j].push_back(A[i][j]);    
        return answer;
    }
};
