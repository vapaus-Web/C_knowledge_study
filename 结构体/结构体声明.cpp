//#define _CRT_SECURE_NO_WARNINGS 1
//////�ṹ���Ա������ָ���ṹ��
////	//���������ڴ��в��ܾ�ȷ����
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
//	struct Str s = { "zhangsan",20,"15710674955","����" };
//	struct Tea t = { {s},100,99.99f };
//	//printf("%s %d %s %s\n", s.name, s.age, s.tele, s.sex);
//	//printf("%s %d %s %s %d %f",t.s.name,t.s.age,t.s.tele,t.s.sex, t.num, t.f);
//	//ʹ�ú�����ָ���ӡ
//	print(&t);
//	return 0;
//}