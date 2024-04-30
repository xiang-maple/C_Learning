#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("This tool can help you justifity the letter you input is vowel or consonant.\n");
	printf("you can input lower or upper letter.\nif you input the other character the test is over\n");
	printf("Now");
	while (1)
	{
		
		// creat the letter list
		int bo = 0;
		char let = "a";
		char lary[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0' };

		// input the letter
		printf(" please input your letter: ");
		scanf("%c",&let);
		getchar();
		char llet = tolower(let);
		
		// find the letter
		for (int i = 0; i < 26; i++)
		{
			if (llet == lary[i])
			{
				bo = 1;
				break;
			}

		}

		////*Switch way*/
		//// justify the input whether is letter or not
		//switch (bo)
		//{
		//case 1:
		//	switch (llet)
		//	{
		//	case'a':
		//	case'e':
		//	case'i':
		//	case'o':
		//	case'u':
		//		printf("the letter %c is vowel\n", llet);
		//		continue;
		//	default:
		//		printf("the letter %c is conponent\n", llet);
		//		continue;
		//	}
		//	

		//
		//default:
		//	break;
		//}
		//printf("your input is ineffective,the test over");
		//break;
		

		// if way
		if (bo == 1)
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
			printf("your input is effective, the test over\n");
			break;
		}
	}
}
