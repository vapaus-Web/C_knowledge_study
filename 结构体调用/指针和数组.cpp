#define _CRT_SECURE_NO_WARNINGS 1
//ָ�����飺���ָ�������
#include<stdio.h>
int main() {
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 4,5,6 };
	int arr3[3] = { 7,8,9 };
	int* parr[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", parr[i][j]);//parr[i]�ǵ�ַ��parr[0]��arr1[0]�ĵ�ַ����ַ[0]��
		}//arr[i]�ȼ���*(arr+i),parr[i][j]==arr1[j]
	}
}