#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��һ������couont����

//void bubble_sort(int arr[], int size) {
//	//��Ҫ����size-1
//	for (int i = 0; i < size - 1; i++) {
//		//ÿ�˱Ƚϼ���
//		int temp=0;
//		int count = 0;
//		for (int j = 0; j < size - 1 - i; j++) {
//			//ÿ�������Ƚ�
//			//���ǰ��һ�����ں���һ�����򽻻�
//			if (arr[j] > arr[j + 1]) {
//				//��������
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			//ǰ��һ��С�ں���һ�������ý���
//			//��count�ﵽ��ǰ������Ҫ�ıȽϴ���ʱ��˵�����е����Ѿ��ź��ˣ�����������
//			else {
//				count++;
//			}
//		}
//		if (count == size - 1 - i) {
//			return 0;
//		}
//	}
//}
//int main() {
//	int arr[9] = { 4,5,2,6,8,4,5,9,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, size);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//}


//����������flag�ж��Ƿ��н���λ�ã����û�н���λ�ã���ô�Ѿ��ź�����
//void bubble_sort(int arr[], int size) {
//	//��Ҫ����size-1
//	for (int i = 0; i < size - 1; i++) {
//		//ÿ�˱Ƚϼ���
//		int temp = 0;
//		int flag = 1;
//		for (int j = 0; j < size - 1 - i; j++) {
//			//ÿ�������Ƚ�
//			//���ǰ��һ�����ں���һ�����򽻻�
//			if (arr[j] > arr[j + 1]) {
//				//��������
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			//û�н���
//			break;//����ѭ��
//		}
//	}
//}
//int main() {
//	int arr[9] = { 4,5,2,6,8,4,5,9,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, size);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//}


////qsort����//�����κ����͵�����
//void qsort(void* base,//��������ݵ���ʼλ��
//	size_t num,//Ԫ�صĸ���
//	size_t width,//Ԫ�صĴ�С���ֽڣ�
//	int(*cmp)(const void* e1, const void* e2));//����ָ��-�ȽϺ���


//�Ƚ���������
//int cmp_int(const void* e1,const void* e2) {
//	//return (*((int*)e1) - *((int*)e2));//e1-e2����
//	return (*((int*)e2) - *((int*)e1));//e2-e1��ʵ�ֽ�������
//}
//�ȽϽṹ�������е������ַ�����С
struct Stu {
	char name[20];
	int age;
};
int cmp_s_name(const void* e1, const void* e2) {
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//int cmp_s_age(const void* e1, const void* e2) {
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//void test1() {
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int size= sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void test2() {
//	struct Stu s[3] = { {"zhangsan",5},{"huangjieyu",18},{"huangjieni",19} };
//	int size = sizeof(s) / sizeof(s[0]);
//	qsort(s, size, sizeof(s[0]), cmp_s_name);
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	qsort(s, size, sizeof(s[0]), cmp_s_age);
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//
//}


void Swap(char*e1,char*e2,size_t width) {
	for (int i = 0; i < width; i++) {
		char temp = 0;
		temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
	
}
//������qsortһ���ĺ���bubble_sort
void bubble_sort(void* base, size_t num, size_t width,int (*cmp)(const void* e1, const void* e2) ) {
		//��Ҫ����size-1
	for (int i = 0; i < num - 1; i++) {
		//ÿ�˱Ƚϼ���
		int flag = 1;
		for (int j = 0; j < num - 1 - i; j++) {
			//�ȽϽ���
			if (cmp(((char*)base)+j*width, ((char*)base) + (j+1)*width) > 0) {
				//ϣ����������
				Swap(((char*)base)+ j * width,((char*)base)+ (j+1) * width,width);
				flag = 0;
			}
		}
		if (flag == 1) {
			//û�н���
			break;//����ѭ��
		}
	}
}

void test3() {
	struct Stu s[3] = { {"zhangsan",5},{"huangjieni",18},{"huangjieyu",19} };
	int size = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,size, sizeof(s[0]), cmp_s_name);
	for (int i = 0; i < 3; i++) {
		printf("%s %d\n", s[i].name, s[i].age);
	}
}

int main() {
	//test1();
	//test2();
	test3();
	return 0;
}
