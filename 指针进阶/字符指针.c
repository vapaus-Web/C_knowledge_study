#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	const char* p = "abcdef";//p存起始地址//const限制不能改字符串
//	*p = 'w';//把a改为w
//	printf("%s", p);//告诉你一个地址，可以咔咔咔后面的字符串给出来
//}

//int main() {
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	int arr1[] = { "abcdef" } ;
//	int arr2[] = { "abcdef" };
//	if (p1 == p2) {
//		printf("p1==p2\n");
//	}
//	else {
//		printf("p1!=p2\n");
//	}
//	if (arr1 == arr2) {
//		printf("arr1==arr2\n");
//	}
//	else {
//		printf("arr1!=arr2\n");
//	}
//	return 0;
//
//}