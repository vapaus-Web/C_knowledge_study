#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	struct date {
//		int a;
//		char s[5];
//	}arg = { 27,"abcd" };
//	arg.a -= 5;
//	strcpy(arg.s,"ABCD");
//	printf("%d %s", arg.a, arg.s);
//}
////struct�ǹؼ���
////arg�Ǳ�������a�ǳ�Ա����

//1.�Ӽ�����������һλѧ����������ƽʱ�ɼ������гɼ�����ĩ�ɼ����ɼ���Ϊ����������������ɼ�������2λС������
// �����ɼ� = ƽʱ * 15 % +���� * 25 % +��ĩ * 60 % ��
// ��ʾ��ѧ���������ͳɼ���һ����ص����ݣ��ڳ����ж������½ṹ�����ͣ�
//struct SCORE {
//	char Name[20]; //����
//	int Normal;   //ƽʱ�ɼ�
//	int MidTerm;  //���гɼ�
//	int EndTerm;  //��ĩ�ɼ�
//	double Total;    //�����ɼ�
//};
//��ע�⡿����Ч�����£���1��Ϊ���룬��2��Ϊ���������ʽ������������
//John 90 85 80
//John�������ɼ���82.75

//struct SCORE {
//	char Name[20]; //����
//	int Normal;   //ƽʱ�ɼ�
//	int MidTerm;  //���гɼ�
//	int EndTerm;  //��ĩ�ɼ�
//	double Total;
//};
//int main() {
//	struct SCORE s = {0};
//	scanf("%s%d%d%d", s.Name, &s.Normal, &s.MidTerm, &s.EndTerm);
//	s.Total = s.Normal * 0.15 + s.MidTerm * 0.25 + s.EndTerm * 0.6;
//	printf("%s�������ɼ���%.2f", s.Name, s.Total);
//	return 0;
//}


//2.���������ε������ߵĳ��ȣ���Ϊ���ͣ�������Χ�������Σ����ж����ǡ��ȱ������Ρ��������������Ρ����ǡ���ͨ�����Ρ����������������Χ�������Ρ���
// ��ʾ�������ε���������һ����ص����ݣ��ڳ����ж������½ṹ�����ͣ�
//struct TR {
//	int Side1;  //��1
//	int Side2;  //��2
//	int Side3;  //��3
//};
//��ע�⡿����Ч�����£���1��Ϊ���룬��2��Ϊ���������ʽ������������
//2 4 1
//����Χ��������

//struct TR {
//	int Side1;  //��1
//	int Side2;  //��2
//	int Side3;  //��3
//};
//int main() {
//	struct TR s = { 0 };
//	scanf("%d%d%d", &s.Side1, &s.Side2, &s.Side3);
//	if (s.Side1+ s.Side2> s.Side3 && s.Side2 + s.Side3 > s.Side1 && s.Side1 + s.Side3 > s.Side2) {
//		if (s.Side1 == s.Side2 && s.Side1 == s.Side3 && s.Side2 == s.Side3) {
//			printf("�ȱ�������");
//		}
//		else if (s.Side1 != s.Side2 && s.Side1 != s.Side3 && s.Side2 != s.Side3) {
//			printf("��ͨ������");
//		}
//		else {
//			printf("����������");
//		}
//	}
//	else {
//		printf("����Χ��������");
//	}
//	return 0;
//}

//3.����һλѡ��������10λ���д�֣����㲢���ѡ�ֵ����÷֣�ȥ��һ����߷ֺ�һ����ͷֺ���ȡƽ��ֵ�����������λС������
// ��ʾ��ѡ�����������д�ֺ�ѡ�ֵ÷���һ��������ݣ��ڳ����ж������½ṹ�����ͣ�
//struct MATCH
//{
//    char Name[20];  //ѡ������ 
//    int Judge[10];  //���д��
//    double Score;   //ѡ�ֵ÷�
//};
//��ע�⡿����Ч�����£���1��Ϊ���룬��2��Ϊ���������ʽ������������
//Mary 85 78 80 76 82 84 76 90 70 95
//ѡ��Mary�ĵ÷���81.38


//struct MATCH
//{
//    char Name[20];  //ѡ������ 
//    int Judge[10];  //���д��
//    double Score;   //ѡ�ֵ÷�
//};
//int main() {
//    struct MATCH s = { 0 };
//    scanf("%s", s.Name);
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &s.Judge[i]);
//    }
//    int max, min,sum=0,i=0; 
//    max = min = s.Judge[0];
//    for (i = 0; i < 10; i++) {
//        if (s.Judge[i] > max) {
//            max = s.Judge[i];
//        }
//        if (s.Judge[i] < max) {
//            min = s.Judge[i];
//        }
//        sum+= s.Judge[i];
//    }
//    s.Score = (sum - max - min) / 8.0;
//    printf("ѡ��%s�ĵ÷���%.2f", s.Name, s.Score);
//    return 0;
//}