/* Fibonacci number function  */

class Solution {
public:
    int fib(int N) {
        
        int sum=0;
        if(N>3){
            return fib(N-1)+fib(N-2);            
        }
        else if( N<=3 && N>1){
            return N-1;
        }
                
        return N;
    }

};
