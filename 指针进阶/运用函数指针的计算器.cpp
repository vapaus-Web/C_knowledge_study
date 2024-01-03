//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////代码冗余考虑用函数
//
//
//
//#include<stdio.h>
//void meun() {
//	printf("**************\n");
//	printf("****0.exit****\n");
//	printf("****1.Add ****\n");
//	printf("****2.Sub ****\n");
//	printf("****3.Mul ****\n");
//	printf("****4.Div ****\n");
//	printf("**************\n");
//}
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
//void calc(int(pf)(int, int)) {//函数指针
//	printf("请输入两个数：");
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int ret = pf(x, y);
//	printf("答案是：%d\n", ret);
//}
//int main() {
//	int input;
//	meun();
//	do {
//		printf("请输入您的选择：");
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			break;
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}