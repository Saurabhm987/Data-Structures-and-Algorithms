
/*
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].
Return true if and only if the given array A is monotonic.
*/



bool isMonotonic(vector<int> &A) {
       
         //m indicates increasing
         //n indicates decreasing
         
        bool m = true;
        bool n = true;
        for (int i = 1; i < A.size(); ++i) {
            if (A[i - 1] < A[i]) {
                n = false;
            } else if (A[i - 1] > A[i]) {
                m = false;
            }
        }
        return m || n;
    }
