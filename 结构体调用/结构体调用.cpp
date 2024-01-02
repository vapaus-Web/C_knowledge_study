//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//struct str {
//	char name[20];
//	int age;
//	double score;
//};
//void set_s(struct str* ps) {
//	ps->age = 20;//指针用->，也可以写成（*ps）.age
//	ps->score = 99.99;
//	strcpy(ps->name, "zhangsan");
//}
//void print_s(struct str* ps) {
//	printf("%s %d %.2f", ps->name, ps->age, ps->score);
//}
//int main() {
//	struct str s = { 0 };
//	//设置s的值，形参是实参的一份临时拷贝，传指针直接改
//	set_s(&s);
//	//打印s
//	print_s(&s);
//	return 0;
//}