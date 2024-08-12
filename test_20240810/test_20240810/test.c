#include <stdio.h>
#include <assert.h>

//int main()
//{
//	//通过字符指针修改单字符变量
//	char c = 'a';
//	char* pc = &c;
//	*pc = 'b';
//
//	//字符串
//	const char* ps = "abcde";
//	char arr[] = "abcde";
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//	printf("%c\n", ps[1]);
//	printf("%c\n", "abcde"[1]);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 5,6,7,8 };
//	int arr3[4] = { 9,10,11,12 };
//
//	int* arr[3] = {arr1,arr2,arr3};
//	int** p = arr;
//
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}

//void test(int arr[3])
//{
//	;
//}
//
//void test(int arr[])
//{
//	;
//}
//
//void test(int *arr)
//{
//	;
//}
//
//void test1(int* arr[3])
//{
//	;
//}
//
//void test1(int* arr[])
//{
//	;
//}
//
//void test1(int* *arr)
//{
//	;
//}

//void test(int arr[3][2]){
//	;}
//void test(int arr[][2]){
//	;}
//void test(int (*arr)[2]){
//	;}
//void test1(int* arr[3][2]) {
//	;}
//void test1(int* arr[][2]) {
//	;}
//void test1(int* (*arr)[2]) {
//	;}
//
//
//int main()
//{
//	int arr1[3][2] = {0};
//	int* arr2[3][2] = { 0 };
//	test(arr1);
//	test1(arr2);
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

size_t my_strlen(const char* p)
{
	assert(p);
	char* pp = p;
	while (*(pp++) != '\0')
	{
		;
	}
	return pp - p - 1;
}

char* my_strcpy(char* dest,const char* sour)
{
	assert(dest && sour);
	char* desp = dest;
	while (*(dest++) = *(sour++))
	{
		;
	}
	return desp;
}

int main()
{
	char arr[5] = { 1 };
	printf("%zd\n", my_strlen("abcde"));
	puts(my_strcpy(arr, "abcd"));
}