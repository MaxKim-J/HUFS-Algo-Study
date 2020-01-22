// main.c

#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

int main()
{
	int num;
	while (1) {
		printf("Enter number: ");
		scanf("%d", &num);
		if (num == 0) {
			printf("Bye!\n");
			break;
		}
		else
			is_prime(num);
	}

	return 0;
}