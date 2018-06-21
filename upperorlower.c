#include <stdio.h>

int main(void)
{
	char input;
	printf("Enter your CHAR: ");
	scanf("%c", &input);
	
	if ((input>='a')&&(input<='z'))
	{
		printf("%c is lower.\n",input);
	}
	else
	{
		printf("%c is upper.\n",input);
	}
	return 0;
}
