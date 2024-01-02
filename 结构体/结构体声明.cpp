//#define _CRT_SECURE_NO_WARNINGS 1
//////结构体成员可以是指针或结构体
////	//浮点数在内存中不能精确保存
//
//
//#include<stdio.h>
//struct Str {
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[7];
//};
//struct Tea {
//	struct Str s;
//	int num;
//	float f;
//};
//void print(struct Tea* SS) {
//	printf("%s %d %s %s %d %.2f\n", SS->s.name, SS->s.age, SS->s.tele, SS->s.sex,SS->num,SS->f);
//}
//int main() {
//	struct Str s = { "zhangsan",20,"15710674955","男生" };
//	struct Tea t = { {s},100,99.99f };
//	//printf("%s %d %s %s\n", s.name, s.age, s.tele, s.sex);
//	//printf("%s %d %s %s %d %f",t.s.name,t.s.age,t.s.tele,t.s.sex, t.num, t.f);
//	//使用函数传指针打印
//	print(&t);
//	return 0;
//}