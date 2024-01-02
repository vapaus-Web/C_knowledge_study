#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int arr[5];
//	int* p;
//	for (p = &arr[0]; p < &arr[5];) {
//		*p++ = 1;//*p++是先*p再p++;//(*p)++是p指向的对象++
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组下标写法
//int main() {
//	int arr[10];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		arr[i] = i;
//	}
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main() {
//	int arr[10];
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		//*p++ = 1;
//		*(p + i) = 1;
//	}
//
//}

//
//int my_strlen(const char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}return count;
//}
#include<string.h>
//指针减指针方法，找到第一个地址和最后一个地址，相减就是元素个数
//int my_strlen(const char* str) {
//	const char* start = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return (str - start);
//}
//int main() {
//	int len = my_strlen("abcdef");//求字符串元素个数，不包括\0,字符串传参传的是a的地址
//	printf("%d", len);
//}