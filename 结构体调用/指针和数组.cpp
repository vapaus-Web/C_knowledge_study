#define _CRT_SECURE_NO_WARNINGS 1
//指针数组：存放指针的数组
#include<stdio.h>
int main() {
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 4,5,6 };
	int arr3[3] = { 7,8,9 };
	int* parr[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", parr[i][j]);//parr[i]是地址，parr[0]是arr1[0]的地址，地址[0]是
		}//arr[i]等价于*(arr+i),parr[i][j]==arr1[j]
	}
}