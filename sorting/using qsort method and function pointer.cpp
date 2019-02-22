/* sorting with use of qsort method and passing function argument*/



#include <iostream>

using namespace std;
int compare(const void* a, const void* b){
    
    int A = *((int*)a) ; 
    int B = *((int*)b) ;
    
    return A-B;
    
} 

int main()
{
    int i;
    int A[] = { -3,2,1,-5,6,-4 };
    
    qsort(A, 6, sizeof(int),compare);
    
    for( i = 0; i < 6; i ++){
        cout<<' '<<A[i];
    }

    return 0;
}
