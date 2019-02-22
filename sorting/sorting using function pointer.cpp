/* sorting given array in ascending or desceding order using function pointer*/



#include <iostream>

using namespace std;
int compare(int a, int b){
    
    if( a < b) return 1;
    else return -1;
    
} 

void sort(int* A, int n, int (*compare)(int a, int b)){
    
    for (int i = 0; i < n; i ++){
        
        for( int j = 0; j < n-1; j ++){
            
            if(compare(A[ j ], A[ j+1 ]) > 0){
                
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i;
    int A[] = { 3,2,1,5,6,4 };
    
    sort(A, 6, compare);
    
    for( i = 0; i < 6; i ++){
        cout<<A[i];
    }

    return 0;
}
