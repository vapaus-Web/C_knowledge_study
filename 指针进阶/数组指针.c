#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//int arr[10];
//	//int(*p)[10] = &arr;//&arr:取整个数组的地址，（*p）：指针，[10]：数组有10个元素，int：数值的类型是整形
//	////数组指针，指向数组的指针；
//	//char* arr[5] = { 0 };
//	//char* (*p)[5] = &arr;
//	//char a = 'w';
//	////字符指针：
//	////char* p=&a;
//	////指向字符指针的指针
//	////char** pp=&p;
//
//}
// 

//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	int (*p)[6] = &arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", *(*p + i));//*p得到数组的地址。也就是数组名的地址；(*p+i)得到第i个元素的地址
//	}
//}

//print(int (*p)[5], int row, int col) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", p[i][j]);//可写成*(*(p+i)+j)
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);
//}

//整形数组 int arr[5] = { 0 };
//数组指针 int(*p)[5] = &arr;
//指针数组 int* p[5] = { arr1,arr2,arr3 };
//存放数组指针的数组 int(*parr3[10])[5];


////一维数组传参
//int arr[5] = { 0 };
//print(arr);//传的是首元素地址
//1.void print(int arr[]);//一维数组可以不写元素个数
//2.void print(int*p)//用指针表示
//
//int* arr[5] = { 0 };//数组，5个元素，每个元素是int*
//print(arr);//
//void print(int** p);
//void print(int* arr[5]）

//二维数组传参
//int arr[3][5] = { 0 };
//print(arr);
//void print(int arr[][5]);//行可以省略，列不可以
//void print(int(*p)[5]);