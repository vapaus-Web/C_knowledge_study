#define _CRT_SECURE_NO_WARNINGS 1


//��������ͬ������ֵ��ͬ�ĺ�������һ�������У���Ҫʹ�õ�ʱ��ֱ�ӵ���

int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}
void meun() {
	printf("**************\n");
	printf("****0.exit****\n");
	printf("****1.Add ****\n");
	printf("****2.Sub ****\n");
	printf("****3.Mul ****\n");
	printf("****4.Div ****\n");
	printf("**************\n");
}
#include<stdio.h>

int main() {
	int(*arr[])(int, int) = {0, Add,Sub,Mul,Div };
	int input = 0;
	do{
		meun();
		printf("����������ѡ��");
		scanf("%d", &input);

		if (input == 0) {
			printf("���˳���Ϸ��\n");
		}
		else if (input >= 1 && input <= 4) {


			printf("�������������֣�\n");
			int x = 0;
			int y = 0;
			scanf("%d%d", &x, &y);
			printf("����ǣ�%d\n", (arr[input])(x, y));
		}
	} while (input);
	return 0;

}