// factorial by recursion
#include <stdio.h>

int factorial(int n) // recursion이 어떻게 이루어지는지 확인 가능
{
	if (n <= 1) {
		printf("factorial(1) = 1\n");
		return 1;
	}
	else {
		printf("factorial(%d) = %d * factorial(%d)\n", n, n, n - 1);
		int n1 = factorial(n - 1);
		printf("factorial(%d) = %d\n", n, n, n1);
		return n * n1;
	}
}

int factorial2(int n) //위를 간단히 구성
{
	if (n <= 1)
		return n;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n, f;

	printf("Enter integer: ");
	scanf("%d", &n);
	f = factorial(n);
	printf("%d! is %d\n", n, f);

	return 0;
}
