#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

size_t my_strlen1(const char* str)
{
	assert(str);
	int count = 0;
	while (*(str++))
	{
		count++;
	}
	return count;
}

size_t my_strlen2(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen2(str + 1);
	}
}

size_t my_strlen3(const char* str)
{
	assert(str);
	char* p = (char*)str;
	while (*p)
	{
		p++;
	}
	return p - str;
}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* p = dest;
	while (*(dest++) = *(src++))
	{
		;
	}
	return p;
}

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* p = dest;
	while (*dest)
	{
		dest++;
	}
	while (*(dest++) = *(src++))
	{
		;
	}
	return p;
}

int my_strcmp(const char* str1, const char* str2)
{
	while (*(str1) && *(str2))
	{
		if (*str1 != *str2)
		{
			return (int)(*str1-*str2);
		}
		str1++;
		str2++;
	}
	if (*(str1) == '\0' && *(str2) == '\0')
	{
		return 0;
	}
	else
	{
		return (int)(*str1 - *str2);
	}
}

char* my_strncpy(char* dest, const char* src, int num)
{
	assert(dest && src);
	char* ret = dest;
	while (*src && num)
	{
		*(dest++) = *(src++);
		num--;
	}
	while (num)
	{
		*(dest++) = '\0';
		num--;
	}
	return ret;
}

char* my_strncat(char* dest, const char* src, int num)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && num)
	{
		*(dest++) = *(src++);
		num--;
	}
	
	*dest = '\0';
	return ret;
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1&&str2);
	char* cp = (char*)str1;
	char* s1 = (char*)str1, *s2 = (char*)str2;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = (char*)str2;

		while (*s1 && *s2 && (*s1 - *s2) == '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

//int main()
//{
//	char* s1 = "abcde";
//	char* s2 = "cd";
//	puts(my_strstr(s1, s2));
//
//	return 0;
//}

//int main()
//{
//	char* p = "zhangwei@163.com";
//	char arr[30];
//	strcpy(arr, p);
//	const char* sep = "@.";
//	char* str = NULL;
//
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		puts(str);
//	}
//	return 0;
//}

//int main()
//{
//	FILE* pfile;
//	pfile = fopen("abc.text", "r");
//	if (pfile == NULL)
//	{
//		perror("Error opening file", &errno);
//		printf("Error opening file: %s", strerror(errno));
//	}
//	return 0;
//}

struct person
{
	char name[20];
	int age;
}person1 = {"xiaohong",10};

void* my_memcpy(void* dest, const void* sour, size_t num)
{
	assert(dest&&sour);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)sour;
		dest = (char*)dest + 1;
		sour = (char*)sour + 1;
	}
	return ret;
}

void* my_memmov(void* dest, const void* sour, size_t num)
{
	void* ret = dest;

	if (dest <= sour || ((char*)sour + num) <= (char*)dest)
	{
		while (num--)
		{
			*(char*)dest = *(char*)sour;
			dest = (char*)dest + 1;
			sour = (char*)sour + 1;
		}
	}
	else
	{
		dest = (char*)dest + num - 1;
		sour = (char*)sour + num - 1;
		while (num--)
		{
			*(char*)dest = *(char*)sour;
			dest = (char*)dest - 1;
			sour = (char*)sour - 1;
		}
	}
	return ret;
}

int main()
{
	char arr1[30] = "abcdef";
	char* arr = my_memmov(arr1, arr1 + 2, 3);
	puts(arr);

	return 0;
}