#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int arr[5];
//	int* p;
//	for (p = &arr[0]; p < &arr[5];) {
//		*p++ = 1;//*p++����*p��p++;//(*p)++��pָ��Ķ���++
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�����±�д��
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
//ָ���ָ�뷽�����ҵ���һ����ַ�����һ����ַ���������Ԫ�ظ���
//int my_strlen(const char* str) {
//	const char* start = str;
//	while (*str != '\0') {
//		str++;
//	}
//	return (str - start);
//}
//int main() {
//	int len = my_strlen("abcdef");//���ַ���Ԫ�ظ�����������\0,�ַ������δ�����a�ĵ�ַ
//	printf("%d", len);
//}