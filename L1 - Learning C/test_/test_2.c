#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	while (1)
	{
		char lary[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0' };

		char let;
		printf("number")
		scanf("%c", &let);
		char llet = tolower(let);

		for (int i = 0; i < 26; i++)
		{
			if (llet == lary[i])
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
			else
			{
				break;
			}
		}
	}
}