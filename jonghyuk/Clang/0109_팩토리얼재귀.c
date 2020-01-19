#include <stdio.h>

long factorial(int n) {
    if (n <= 1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

void main() {
    int num, f;
    printf("Enter Integer: ");
    scanf("%d",&num);
    f = factorial(num);
    printf("%d! is %d", num, f);

}





