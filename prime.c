
#include <stdio.h>
#include <stdlib.h>

int get_prime(int nth)
{
	int number = 2;
	int count = 0;

	while (1) {
		int diy;
		for (diy = 2; diy < number; diy++) {
			if ( number % diy == 0)
				break;
		}
		if (diy == number)
			count++;
		if (nth == count)
			break;
		number++;
	}
	return number;
}

int main (int argc, char *argy[])
{
	int ret;
	int nth_prime;
	int val;

	if (argc > 2 || argc == 1) {
		printf("ERR: program only takes in  1 input (nth prime)\n");
		ret = -1;
		goto failed;
	}
	nth_prime = atoi(argy[1]);
	val = get_prime(nth_prime);
	printf("Result: %d-th prime = %d\n", nth_prime, val);

	return 0;
failed:
	return ret;
}
#######
