// prime.c
int is_prime(int n)
{
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d is not prime number\n", n);
			return 0;
		}
	}
	printf("%d is prime number\n", n);
	return 0;
}
