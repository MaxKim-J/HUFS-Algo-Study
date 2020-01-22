#include <stdio.h>

void hanoi_tower(int n,char from, char tmp,char to){
    if (n==1){
        printf("Move disk1 %c =>%c\n", from, to);
    } else {
        hanoi_tower(n-1,from,to,tmp);
        printf("Move dis%d %c => %c\n", n, from, to);
        hanoi_tower(n-1,tmp,from,to);
    }
};

void main(void) {
    int n;
    printf("Enter # of disks: ");
    scanf("%d",&n);
    hanoi_tower(n, 'A', 'B', 'C');
}





