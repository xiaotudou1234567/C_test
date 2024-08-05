#include <stdio.h>

//int main()
//{
//	int arr[] = {0X11223344,0X22334455,0X33445566};
//	int* pi = &arr;
//	char* pc = &arr;
//	*(pi + 1) = 22;
//	*(pc + 1) = 11;
//	printf("%d\n",*(pi+1));
//	printf("%d\n",*(pc+1));
//}

int my_strlen(char* p)
{
	char* s = p;
	while (*s != '\0')
	{
		s++;
	}
	return s - p;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d", my_strlen(arr));
}