#include<stdio.h>
#define MAX_SIZE 15

int intersection_array(int a[], int len_a, int b[], int len_b, int result[]){
    int i, j, result_num=0;
    for(i=0;i<len_a;i++) {
        for (j = 0; j < len_b; j++) {
            if (a[i] == b[j]) {
                result[result_num++] = a[i];
            }
        }
    }
    return result_num;
}

int union_array(int a[], int len_a, int b[], int len_b, int result[]){
    int temp_result_arr[MAX_SIZE] = {0,};
    int i, j, result_num=0;
    for(i=0;i<len_a;i++){
        temp_result_arr[i]=a[i];
    }
    for(i=0;i<len_b;i++){
        temp_result_arr[len_a+i]=b[i];
    }
    for(i=0;i<len_a;i++)
        for(j=0;j<len_b;j++)
            if(a[i]==b[j]){
                temp_result_arr[len_a+j]=0;
            }
    for(i=0;i<len_b+len_a;i++){
        if(temp_result_arr[i] != 0){
            result[result_num] = temp_result_arr[i];
            result_num++;
        }
    }
    return result_num;
}

int print_array(char name, int list[], int len) {
    printf("%c[%d] = {", name, len);
    for(int i = 0; i<len-1; i++){
        printf(" %d,", list[i]);
    }
    printf(" %d",list[len-1]);
    printf(" }\n");
}

int main(void){
    int a[]={28, 12, 43, 10, 7, 55};
    int b[]={12, 2, 7, 10, 36};
    int inter_result[MAX_SIZE] = {0,};
    int union_result[MAX_SIZE] = {0,};
    int inter_count, union_count, size_a, size_b;

    size_a=sizeof(a)/sizeof(int);
    size_b=sizeof(b)/sizeof(int);

    print_array("a", a, size_a);
    print_array("b", b, size_b);

    inter_count = intersection_array(a, size_a, b, size_b, inter_result);
    print_array("c", inter_result, inter_count);

    union_count = union_array(a, size_a, b, size_b, union_result);
    print_array("d", union_result, union_count);
    return 0;
}

