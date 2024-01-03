#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 5; 
//	int b = 3;
//	int count=Add(a, b);
//	int (*p)(int, int) = &Add;//函数也有地址
//	int ret=(*p)(5,7);//*可以省略
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
//    (void(*)())==Add//Add的地址或者函数
//      ((*(Add)0)())==Bdd
//    //定义一个指针，指向函数；这个指针的地址是另一个函数，再指针函数
//
//        (void(*)())0//把0强制转换成函数指针的地址
//        (*(void(*)())0)()//调用函数

//void (*signal(int, void(*)(int)))(int);
//
//void (*signal(int, void(*)(int)))(int);//函数声明
//typedef void(* pf_t)(int);
//pf_t signal(int, pf_t);


