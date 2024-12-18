#include <stdio.h> 

int reverse(int num){
    int reversed = 0, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;              
    }
    return reversed;
}

int main() { 
    int A, B;
    
    scanf("%d %d",&A,&B); 
    A = reverse(A); 
    B = reverse(B);
    
    int C = A+B; 
    printf("%d",reverse(C));
    return 0;
}