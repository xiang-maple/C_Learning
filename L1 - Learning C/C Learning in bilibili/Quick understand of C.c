#define _CRT_SECURE_NO_WARNINGS
// This is Standard input and output so (it is a package/library to cite the function)
#include <stdio.h>
// and int main() is a rule made by people . If you have not wrong, you should return 0
// this is main function
//  int main()
//
///*---variables or data type and pirntf usage  */
//
//{
//	// this is input function
//	
//	printf("Hello C\n");
//	printf("you are wrong\nshit");
//	printf(",noshit");
//	return 0;
//	
//	printf("%zu\n", sizeof(char)); // 1 byte = 8 bit ,  1024**5byte=1024**4kb=1024**3mb=1024**gb=1024**tb=1024**pb
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long	long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;

//}

/*---part variables and whole variables---*/

//int b = 0;
//int c = 123;  // whole variables 
//int main()
//{
//	{
//		int a = 19;
//		scanf ("%d", & b);
//		printf("%d\n", a);
//		printf("%d\n", a + b);
//	
//
//	}
//	extern int oth;  // add the variable in other file
//		 
//
//	printf("%d\n", oth);
//	// printf("%d\n", a); // part variables can not be used
//	printf("%d\n", c);	
//	return 0;
//	
//}


// constants
 // constants varibales
//int main()
//{
//	int b = 20;
//	const int a = 10;
//	// a = 30; // err 
//	printf(" a is %d\n", a);
//	// int arry[a] = { 0 }; // err , so the  const a is not the constants
//	int arry[10] = { 0 };
//	return 0;
//}

// define constants
//#define CC 3.14
//int main()
//{
//	float a = CC;
//	printf("a is %f\n", a);
//
//}

// enumerment constant
//enum Color
//{
//	RED,
//	BLUE,
//    GREEN
//};
//
//int main()
//{
//	enum Color c = BLUE;
//	
//	// RED = 20; // err 
//	printf("%d\n", c);
//	
//}
#include <string.h> 

//int main(void)
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = {'a','b','c','d','e','f','\0'};
//	// char arr3[] = {"a","b","c"}; // error file
//	printf("%d\n", strlen(arr2));
//	printf("%s\n", arr1);
//	return 0;
//
//}
//int main(void)
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	printf("c:\test\0648\test.c"); // this print 8ary  
//	printf("c:\test\648\test.c");
//}
//int main(viod)
//{
//	printf("\\");
//	printf("\'");
//	printf("\"");
//	printf("\??)");
//	printf("I \tlove maple \n");
//	printf("I love maple \n");
//	printf("I\nlove maple\n");
//	printf("\a\n");
//	printf("\bads\bff\n"); 
//	printf("\fwaowj\f\n");
//	printf("%s", "c:\test\0648\test.c\n");
// 	printf("%s", "c:\test\1018\test.c\n");
//	printf("%s", "c:\test\1418\test.c\n");
//	printf("%s", "c:\test\0608\test.c\n");
//	printf("%c",'\x61');
//
//}
//int sum(int x, int y)
//{
//	// printf("have a %d good day\n", x + y);  // if I do this
//	return x + y;
//}
//
//
//int main(void)
//{
//	int n1 = 0;
//	int n2 = 0;
//	printf("please input two number\n");
//	scanf("%d %d", &n1, &n2);
//	
//	//sum(n1, n2);
//	printf("%d",sum(n1, n2));  // the sum is so strange!!!!!!!!!!!!!!!   no right
//	//printf("%d", sm);
//}
//int main(void)
//{
//	int a1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//
//		printf("%d\n", a1[i]);
//		i++;
//	}
//	//printf("%d\n", a1[]);
//	//char arr1[] = "abcdefg";
//	//char arr2[] = { 'a','b','c','d','e','f','\0' };
//}

//int main()
//{
//	int a = 5; // initialize
//	a = 20; // assignment
//	return 0;
//}
// + - * & / =  are twice units operators (without integer divide) 
// ! - + & sizeof ~ -- ++ * () are single operator

//int main()
//{
//	int bul = -1;  // 0 is false and other number is true
//	if (!bul)  // the if () in (), the value is bull
//	{
//		printf("the bull value is false");
//	}
//
//	return 0;
//}

// int main()
//{
//	 int a = 0;
//	 //printf("%d\n", sizeof int); // it is error
//	 printf("%d\n", sizeof (int));
//	 printf("%d\n", sizeof a);
//	 printf("%d\n", sizeof (a));
//	 
//	 int arr[10] = {0};
//	 printf("%d\n", sizeof arr);
//
//	return 0;
//}

//int main()
//{
//	// ++ and -- usage
//	//int a = 10;
//	//int b = a++; // = ++, although b =10 , but a change after that
//	//int c = ++a; // ++ =
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	//printf("%d\n", c);
//	/*return 0*/
//	/*int a = 3.14;
//	int b = (int)3.14;
//	printf("%f\n",a);
//	printf("%d\n",b);
//
//	return 0;*/
//}


//int main()
//{
//	
// // && and || usage
// //int a = 10;
//	//int b = 0;
//	//if (a && b)
//	//{
//	//	printf("the are true");
//	//}
//	//if (a || b)
//	//{
//	//	printf("the are true");
//	//}
//	
// 
// // three units operator
//	/*int s = 0;
//	int a = 10;
//	int b = -20;
//	scanf("%d", &s);
//	int v = s > 0 ? 1 : 0;
//	printf("%d", v);*/
//}


// how to use ,
//int main()
//{
//	int a = 10, b = 4, c = 3;
//	printf("%d,%d,%d\n", a, b, c);
//	printf("%d %d %d\n", a, b, c);
//	// c: 14 a:24 b:10
//	int d = (c = a + b, a = a + c, b = a - c); // b =10 is output of d
//	printf("%d\n", d);
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d", arr[3]);  // [] is index finding operator 
//}

// key word
int main()
{
	auto int a = 0;  // auto variables  also is int a =0;
	// key word : auto , break, case. char . const . continue, default, do, double, else, enum, "struct, union", extern, for , "goto", float ,if ,int ,long , refgister, return, short, signed, sizeof , static,unsigned, viod , volatile, while

	return 0;
}