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
////struct是关键字
////arg是变量名，a是成员名，

//1.从键盘依次输入一位学生的姓名、平时成绩、期中成绩和期末成绩（成绩均为整数），输出总评成绩（保留2位小数）。
// 总评成绩 = 平时 * 15 % +期中 * 25 % +期末 * 60 % 。
// 提示：学生的姓名和成绩是一组相关的数据，在程序中定义如下结构体类型：
//struct SCORE {
//	char Name[20]; //姓名
//	int Normal;   //平时成绩
//	int MidTerm;  //期中成绩
//	int EndTerm;  //期末成绩
//	double Total;    //总评成绩
//};
//【注意】运行效果如下（第1行为输入，第2行为输出），格式错误算结果错误。
//John 90 85 80
//John的总评成绩是82.75

//struct SCORE {
//	char Name[20]; //姓名
//	int Normal;   //平时成绩
//	int MidTerm;  //期中成绩
//	int EndTerm;  //期末成绩
//	double Total;
//};
//int main() {
//	struct SCORE s = {0};
//	scanf("%s%d%d%d", s.Name, &s.Normal, &s.MidTerm, &s.EndTerm);
//	s.Total = s.Normal * 0.15 + s.MidTerm * 0.25 + s.EndTerm * 0.6;
//	printf("%s的总评成绩是%.2f", s.Name, s.Total);
//	return 0;
//}


//2.输入三角形的三条边的长度（均为整型），若能围成三角形，则判断其是“等边三角形”、“等腰三角形”还是“普通三角形”，否则输出“不能围成三角形”。
// 提示：三角形的三条边是一组相关的数据，在程序中定义如下结构体类型：
//struct TR {
//	int Side1;  //边1
//	int Side2;  //边2
//	int Side3;  //边3
//};
//【注意】运行效果如下（第1行为输入，第2行为输出），格式错误算结果错误。
//2 4 1
//不能围成三角形

//struct TR {
//	int Side1;  //边1
//	int Side2;  //边2
//	int Side3;  //边3
//};
//int main() {
//	struct TR s = { 0 };
//	scanf("%d%d%d", &s.Side1, &s.Side2, &s.Side3);
//	if (s.Side1+ s.Side2> s.Side3 && s.Side2 + s.Side3 > s.Side1 && s.Side1 + s.Side3 > s.Side2) {
//		if (s.Side1 == s.Side2 && s.Side1 == s.Side3 && s.Side2 == s.Side3) {
//			printf("等边三角形");
//		}
//		else if (s.Side1 != s.Side2 && s.Side1 != s.Side3 && s.Side2 != s.Side3) {
//			printf("普通三角形");
//		}
//		else {
//			printf("等腰三角形");
//		}
//	}
//	else {
//		printf("不能围成三角形");
//	}
//	return 0;
//}

//3.输入一位选手姓名和10位裁判打分，计算并输出选手的最后得分（去掉一个最高分和一个最低分后再取平均值，结果保留两位小数）。
// 提示：选手姓名、裁判打分和选手得分是一组相关数据，在程序中定义如下结构体类型：
//struct MATCH
//{
//    char Name[20];  //选手姓名 
//    int Judge[10];  //裁判打分
//    double Score;   //选手得分
//};
//【注意】运行效果如下（第1行为输入，第2行为输出），格式错误算结果错误。
//Mary 85 78 80 76 82 84 76 90 70 95
//选手Mary的得分是81.38


//struct MATCH
//{
//    char Name[20];  //选手姓名 
//    int Judge[10];  //裁判打分
//    double Score;   //选手得分
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
//    printf("选手%s的得分是%.2f", s.Name, s.Score);
//    return 0;
//}