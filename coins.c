#include <stdio.h>

int count_coins(int *amount, int coins_value)
{
	int count = 0;

	while(*amount >= coins_value)
	{
		*amount -= coins_value;
		count += 1;
	}

	return count;
}

int main()
{
	int amount;
	printf("Please enter the amount of money.\n");
	scanf("%d", &amount);

	int num_of_coins = 0;

	num_of_coins += count_coins(&amount, 5);
	num_of_coins += count_coins(&amount, 2);
	num_of_coins += count_coins(&amount, 1);

	printf("The minimum number of coins with values 1, 2 and 5 needed to pay the given amount is %d\n", num_of_coins);

	return 0;
}