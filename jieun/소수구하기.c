#include <stdio.h>

int isprime(int x) {
	for (int i = 2; i < x; i++)
	{
		if (x %i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int x, i;
	while (1) {
		printf("Enter number: ");
		scanf("%d", &x);
		if (x == 0) {
			printf("Bye!");
			break;
		}
		if (isprime(x) == 1)
			printf("%d is prime number\n", x);
		else
			printf("%d is not prime number\n", x);
	}
	

}