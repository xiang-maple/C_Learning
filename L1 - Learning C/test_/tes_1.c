#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char spnote[] = "";
	printf("The sleep rules as below\n");
	printf("If you want to sleep please input y or yes, if not please input n or not\n");
	printf("If yoy input another character,you will get back to the sleep loop\n");
	printf("you input is: ");
	scanf("%c", &spnote);
	get_char();
	if (spnote == "y" || spnote == "yes")
	{
		printf("sleep\n");
	}
	else if (spnote == "n" || spnote == "not")
	{
		printf("maybe you want to work for a while\n");
	}	
	else
	{
		printf("you input is not effective.\n");
	}

}

