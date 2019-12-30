#include <stdio.h>

int main() {
    calculSquare();
}

int calculSquare() {
    double row;
    double col;

    printf("사각형의 가로, 세로 크기: ");
    scanf("%lf %lf", &row, &col);
    double size = row * col;
    double dist = 2 * (row+col);

    printf("사각형의 넓이: %lf \n", size);
    printf("사각형의 둘레: %lf", dist);
}

int calculCircle() {
    float radius;
    float size;
    printf("반지름을 입력하시오: ");
    scanf("%f", &radius);
    size = radius * radius * 3.14;
    printf("원의 면적 : %f", size);
}

int sumFunc() {
    int num1;
    int num2;
    printf("첫번째 숫자를 입력하시오: ");
    scanf("%d", &num1);
    printf("두번째 숫자를 입력하시오: ");
    scanf("%d", &num2);
    printf("두수의 합: %d", num1 + num2);
}

int plus() {
    int x = 100;
    int y = 200;
    int sum;
    sum = x+y;
    printf("두수의 합: %d",sum);
}

int variate() {
    int x = 1;
    int y = 0;
    int product;
    int quotient;

    product = x * y;
    quotient = x / y;

    printf("%d\n",product);
    printf("%d\n",quotient);
    return 0;
}

int calculator(void) {
    int x = 20;
    int y = 10;
    int sum = x + y;
    int min = x - y;
    int mul = x * y;
    int div = x / y;
    printf("두수의 합: %d\n", sum);
    printf("두수의 차: %d\n", min);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d\n", div);
}