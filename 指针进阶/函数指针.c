#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 5; 
//	int b = 3;
//	int count=Add(a, b);
//	int (*p)(int, int) = &Add;//����Ҳ�е�ַ
//	int ret=(*p)(5,7);//*����ʡ��
//	printf("%d\n", count);
//	printf("%d", ret);
//
//
//}

//void test(const char* str) {
//	printf("hello world!\n");
//}
//int main() {
//	int (*p)(const char*) = test;
//	p("abc");
//	test("def");
//	return 0;
//
//}

//(*(void (*)())0)();
//    (void(*)())==Add//Add�ĵ�ַ���ߺ���
//      ((*(Add)0)())==Bdd
//    //����һ��ָ�룬ָ���������ָ��ĵ�ַ����һ����������ָ�뺯��
//
//        (void(*)())0//��0ǿ��ת���ɺ���ָ��ĵ�ַ
//        (*(void(*)())0)()//���ú���

//void (*signal(int, void(*)(int)))(int);
//
//void (*signal(int, void(*)(int)))(int);//��������
//typedef void(* pf_t)(int);
//pf_t signal(int, pf_t);


