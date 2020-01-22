#include <stdio.h>
#define MAX_SIZE 50
int intersection_array(int d[], const int s1[], int n1, const int s2[], int n2)
{
	int arr_d_len = 0;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (s1[i] == s2[j]) {
				d[arr_d_len] = s1[i];
				arr_d_len += 1;
				break;
			}
		}
	}
	return arr_d_len;
}

int union_array(int d[], const int s1[], int n1, const int s2[], int n2)
{
	int arr_d_len = 0;

	for (int i = 0; i < n1; i++) {
		d[arr_d_len] = s1[i];
		arr_d_len += 1;
	}

	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < n1; j++) {
			if (s2[i] == s1[j])
				break;
			else if (j == n1 - 1) { // s2[i]와 s1[n1-1]까지 비교를 했는데 같은 원소가 없음
				d[arr_d_len] = s2[i];
				arr_d_len += 1;
			}
			else // s2[i] != s1[j]인 경우
				continue;
		}
	}

	return arr_d_len;
}


print_array(int c[], int arr[], int size)
{
	printf("%s[%d] = ", c, size);
	printf("{ ");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(",");
	}
	printf(" }\n");
}

int main(void)
{
	int arr_a[MAX_SIZE] = { 28, 12, 43, 10, 7, 55 };
	int arr_b[MAX_SIZE] = { 12,2,7,10,36 };
	int arr_c[MAX_SIZE], len_c;
	int arr_d[MAX_SIZE], len_d;

	print_array("a", arr_a, 6);
	print_array("b", arr_b, 5);

	len_c = intersection_array(arr_c, arr_a, 6, arr_b, 5);
	print_array("c", arr_c, len_c);

	len_d = union_array(arr_d, arr_a, 6, arr_b, 5);
	print_array("d", arr_d, len_d);

	return 0;
}