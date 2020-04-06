#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	long credit_card_number = get_long("Number: ");
	int sum = 0;
	int i = 0;
	int digit = 0;
	long first_digit_of_credit_card = credit_card_number;
	int digit_checker = floor(1 + log10(llabs(credit_card_number)));
	if (digit_checker < 13 || digit_checker > 16)
	{
		printf("INVALID:\n");
		exit(0);
	}
	
	do
	{
		i++;
		digit = credit_card_number % 10;
		if (i % 2 == 1)
		{
			sum += digit;
		}else if (digit < 5)
		{
			sum = sum + 2 * digit;
		}else
		{
			sum = sum + 2 * digit - 9;
		}
		credit_card_number = credit_card_number / 10;
	}
	while (credit_card_number > 0);
	
	while (first_digit_of_credit_card >= 10)
	{
		first_digit_of_credit_card = first_digit_of_credit_card / 10;
	}
	
	if (first_digit_of_credit_card == 4 && sum % 10 == 0)
	{
		printf("VISA\n");
	}else if (first_digit_of_credit_card == 3 && sum % 10 == 0)
	{
		printf("American Express\n");
	}else if (first_digit_of_credit_card == 5 && sum % 10 == 0)
	{
		printf("MASTERCARD\n");
	}else
	{
		printf("INVALID\n");
	}
	
	
	return 0;
}
