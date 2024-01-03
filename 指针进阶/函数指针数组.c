//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int main() {
//	//函数指针数组
//	int ret = 0;
//	int(*arr[4])(int,int) = {Add,Sub,Mul,Div};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		ret = arr[i](3, 4);
//		printf("%d\n", ret);
//	}
//	
//	return 0;
//
//}