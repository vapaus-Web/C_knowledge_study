//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////�������࿼���ú���
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
//void calc(int(pf)(int, int)) {//����ָ��
//	printf("��������������");
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int ret = pf(x, y);
//	printf("���ǣ�%d\n", ret);
//}
//int main() {
//	int input;
//	meun();
//	do {
//		printf("����������ѡ��");
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
//			printf("����������������룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}