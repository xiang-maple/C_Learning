#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	while (1)
	{
		int bo = 0;
		char let;
		char lary[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0' };

		printf("letter: ");
		scanf("%c", &let);
		char llet = tolower(let);
		for (int i = 0; i < 26; i++)
		{
			if (llet == lary[i])
			{
				bo = 1;
			}

		}
		switch (bo)
		{
		case 1:
			switch (llet)
			{
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
				printf("the letter %c is vowel\n", llet);
				break;
			default:
				printf("the letter %c is conponent\n", llet);
				break;
			}

		
		default:
			break;
			break;
		}
		
		/*if (bo == 1)
		{
			if (llet == 'a' || llet == 'e' || llet == 'i' || llet == 'o' || llet == 'u')
			{
				printf("the letter %c is vowel\n", llet);
			}
			else
			{
				printf("the letter %c is conponent\n", llet);
			}
		}
		else if (bo == 0)
		{
			printf("your input is effective, the test over\n");
			break;
		}*/
	}
}
