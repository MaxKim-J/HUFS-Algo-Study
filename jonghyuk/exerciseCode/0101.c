#include <stdio.h>

int main() {
    withMark();
}

int getSize() {
    int x;
    printf("변수 x의 크기 : %d \n", sizeof(x));
    printf("char 크기 : %d \n", sizeof(char));
    printf("short 크기 : %d \n", sizeof(short));
    printf("int 크기 : %d \n", sizeof(int));
    printf("long 크기 : %d \n", sizeof(long));
    printf("float 크기 : %d \n", sizeof(float));
    printf("double 크기 : %d \n", sizeof(double));
    return 0;
}

int getWord() {
    char code1 = 'A';
    char code2 = 65; //아스키 코드 초기화
    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2);
    printf("code2/decimal = %d\n", code2);
    return 0;
}

int charChar() {
    char code = 'A';
    printf("%d %d %d\n", code, code + 1, code + 2);
    printf("%c %c %c\n", code, code + 1, code + 2);
    return 0;
}

// 실수 크기의 비교는 오차 범위를 넘느냐 안넘느냐

int constantly() {
    int x = 10;
    int y = 10;
    printf("x = %d\n", x);
    printf("++x = %d\n", ++x);
    printf("x = %d\n\n", x);
    printf("y = %d\n", y);
    printf("y++ = %d\n", y++);
    printf("y = %d\n", y);
    return 0;
}

int monthlyDays() {
    int month;
    printf("Which month(1-12)? ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("%d-month has %d days", month, 31);
    } else if(month == 2) {
        printf("%d-month has %d days", month, 28);
    } else {
        printf("%d-month has %d days", month, 30);
    }
}

int wordSort() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ('A' <= ch && ch <= 'Z') {
        printf("\'%c\' is uppercase\n", ch);
    } else if ('a' <= ch && ch <= 'z' ) {
        printf("\'%c\' is lowercase\n", ch);
    } else if ('0' <= ch && ch <= '9' ) {
        printf("\'%c\' is digit\n", ch);
    } else {
        printf("\'%c\' is special character\n", ch);
    }
}

int myInteger() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    switch (number) {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        default:
            printf("many\n");
            break;
    }
}

int withMark() {
    int amount, gender, weight;
    float genderInf, hour, alcohol, currentAlcohol;

    printf("Amount(ml)? ");
    scanf("%d", &amount);

    printf("Alcohol level(%%)? ");
    scanf("%f", &alcohol);

    printf("Gender(male=1, female=2)? ");
    scanf("%d", &gender);

    printf("weight(kg)? ");
    scanf("%d", &weight);

    printf("Elapsed time(hour)? ");
    scanf("%f", &hour);

    switch(gender) {
        case 1:
            genderInf = 0.7;
            break;
        case 2:
            genderInf = 0.6;
            break;
    }
    float userAlcohol = amount * (alcohol/100) * 0.7948;
    float maxAlcohol = userAlcohol / (weight * genderInf) / 10;
    if (hour > 0.5) {
        currentAlcohol = maxAlcohol - (0.015 * (hour - 0.5));
        if (currentAlcohol < 0) {
            currentAlcohol = 0;
        }
    } else {
        currentAlcohol = maxAlcohol;
    }
    printf("Maximum blood alcohol level is %.3f%%\n", maxAlcohol);
    printf("Current blood alcohol level is %.3f%%\n", currentAlcohol);
}




