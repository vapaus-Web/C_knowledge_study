#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//法一：利用couont计数

//void bubble_sort(int arr[], int size) {
//	//需要几趟size-1
//	for (int i = 0; i < size - 1; i++) {
//		//每趟比较几次
//		int temp=0;
//		int count = 0;
//		for (int j = 0; j < size - 1 - i; j++) {
//			//每两个数比较
//			//如果前面一个大于后面一个，则交换
//			if (arr[j] > arr[j + 1]) {
//				//两数交换
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			//前面一个小于后面一个，不用交换
//			//当count达到当前趟数需要的比较次数时，说明所有的数已经排好了，不用再排了
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


//法二：利用flag判断是否有交换位置，如果没有交换位置，那么已经排好序了
//void bubble_sort(int arr[], int size) {
//	//需要几趟size-1
//	for (int i = 0; i < size - 1; i++) {
//		//每趟比较几次
//		int temp = 0;
//		int flag = 1;
//		for (int j = 0; j < size - 1 - i; j++) {
//			//每两个数比较
//			//如果前面一个大于后面一个，则交换
//			if (arr[j] > arr[j + 1]) {
//				//两数交换
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			//没有交换
//			break;//跳出循环
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


////qsort函数//排序任何类型的数据
//void qsort(void* base,//排序的数据的起始位置
//	size_t num,//元素的个数
//	size_t width,//元素的大小（字节）
//	int(*cmp)(const void* e1, const void* e2));//函数指针-比较函数


//比较整数类型
//int cmp_int(const void* e1,const void* e2) {
//	//return (*((int*)e1) - *((int*)e2));//e1-e2升序
//	return (*((int*)e2) - *((int*)e1));//e2-e1可实现降序排序
//}
//比较结构体类型中的名字字符串大小
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
//创造像qsort一样的函数bubble_sort
void bubble_sort(void* base, size_t num, size_t width,int (*cmp)(const void* e1, const void* e2) ) {
		//需要几趟size-1
	for (int i = 0; i < num - 1; i++) {
		//每趟比较几次
		int flag = 1;
		for (int j = 0; j < num - 1 - i; j++) {
			//比较交换
			if (cmp(((char*)base)+j*width, ((char*)base) + (j+1)*width) > 0) {
				//希望升序排序
				Swap(((char*)base)+ j * width,((char*)base)+ (j+1) * width,width);
				flag = 0;
			}
		}
		if (flag == 1) {
			//没有交换
			break;//跳出循环
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
