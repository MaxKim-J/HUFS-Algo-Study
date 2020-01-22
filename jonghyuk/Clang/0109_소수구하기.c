#include <stdio.h>

int is_prime(int n) {
    for (int i=2;i<n;i++){
        if (n%i == 0){
            return 0;
        }
        return 1;
    }
}

void main() {
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    if (is_prime(num) == 1){
        printf("%d is prime number", num);
    } else {
        printf("%d is not prime number",num);
    }
}





