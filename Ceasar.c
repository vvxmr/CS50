//Recreate CS50 Ceasar Cipher using pointers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void cipher(char *, int, int);//Void function doesn't return anything
int main(void)
{
	char word[60];//Array of the word or words to be entered
	int shift_value;//Value by which string ascii codes are shifted by
	char *ptr;
	ptr = word;
	scanf("%d\n", &shift_value);
	//scanf("%s", word);//Replaced with fgets for accuracy 
	fgets(word, 60, stdin);
	cipher(ptr, 60, shift_value);
	return 0;
}
void cipher(char *cptr, int size, int k)
{
	int i;
	int word_length = strlen(cptr);
	for (i = 0; i < word_length; i++)
		if (islower(cptr[i]))
		{
			printf("%c ", (((cptr[i] + k) - 97) % 26) + 97);
		}
			
		else if (isupper(cptr[i]))//Checks for variation of capitalized characters
		{
			printf("%c ", (((cptr[i] + k) - 65) % 26) + 65);
		}

			
}
