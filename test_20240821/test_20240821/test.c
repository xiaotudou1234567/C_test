#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//void inverst(char* p1, char* p2)
//{
//    char temp = 0;
//    while (p1 <= p2)
//    {
//        temp = *p1;
//        *p1 = *p2;
//        *p2 = temp;
//        p1++;
//        p2--;
//    }
//}
//
//int main() {
//    char arr[10000] = { 0 };
//    char* p1 = arr;
//    char* p2 = NULL;
//    while (gets(arr) > 0) {
//        inverst(arr, arr + strlen(arr) - 1);
//        while (*p1 != '\0')
//        {
//            p2 = p1;
//            while ((*p2 <= 'Z' && *p2 >= 'A') || (*p2 <= 'z' && *p2 >= 'a')) {
//                p2++;
//            }
//            inverst(p1, p2 - 1);
//            p1 = p2;
//            while (*p1 != '\0') {
//                p1++;
//                if ((*p1 <= 'Z' && *p1 >= 'A') || (*p1 <= 'z' && *p1 >= 'a')) {
//                    break;
//                }
//            }
//        }
//        printf("%s", arr);
//    }
//    return 0;
//}

typedef struct S
{
	char i;
	int* arr;
}S;

int main()
{
	S s = {'a',NULL};
	int* arr = (int*)calloc(5,sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		return 1;
	}
	s.arr = arr;
	free(s.arr);
	s.arr = NULL;
	return 0;
}