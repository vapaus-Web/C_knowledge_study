#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//int arr[10];
//	//int(*p)[10] = &arr;//&arr:ȡ��������ĵ�ַ����*p����ָ�룬[10]��������10��Ԫ�أ�int����ֵ������������
//	////����ָ�룬ָ�������ָ�룻
//	//char* arr[5] = { 0 };
//	//char* (*p)[5] = &arr;
//	//char a = 'w';
//	////�ַ�ָ�룺
//	////char* p=&a;
//	////ָ���ַ�ָ���ָ��
//	////char** pp=&p;
//
//}
// 

//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	int (*p)[6] = &arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", *(*p + i));//*p�õ�����ĵ�ַ��Ҳ�����������ĵ�ַ��(*p+i)�õ���i��Ԫ�صĵ�ַ
//	}
//}

//print(int (*p)[5], int row, int col) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", p[i][j]);//��д��*(*(p+i)+j)
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);
//}

//�������� int arr[5] = { 0 };
//����ָ�� int(*p)[5] = &arr;
//ָ������ int* p[5] = { arr1,arr2,arr3 };
//�������ָ������� int(*parr3[10])[5];


////һά���鴫��
//int arr[5] = { 0 };
//print(arr);//��������Ԫ�ص�ַ
//1.void print(int arr[]);//һά������Բ�дԪ�ظ���
//2.void print(int*p)//��ָ���ʾ
//
//int* arr[5] = { 0 };//���飬5��Ԫ�أ�ÿ��Ԫ����int*
//print(arr);//
//void print(int** p);
//void print(int* arr[5]��

//��ά���鴫��
//int arr[3][5] = { 0 };
//print(arr);
//void print(int arr[][5]);//�п���ʡ�ԣ��в�����
//void print(int(*p)[5]);