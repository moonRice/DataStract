#include <stdio.h>
#include <stdlib.h>

// 线性表存储空间的初始分配量
#define LIST_INIT_SIZE 100
// 分配增量
#define LIST_INCREMENT 10

#define ERROR 0
#define OK 1

typedef int ElemType;
typedef int Status;

// 单链表系列函数
typedef struct LNode {
	ElemType data[3];
	struct LNode* next;
}LNode, * LinkList;

Status SqListInsert(LinkList& L, int i, ElemType e) {
	return OK;
}

// 执行函数
void hello() {
	printf("Hello World!\n");
}

void pro_finish() {
	printf("\033[32m[信息] 程序运行完毕。如需显示菜单，请输入1。\033[0m\r\n");
}

void showRows(int row[], int length) {
	int i = 0;
	for (i; i < length; i++) {
		printf("[%d] ", row[i]);
	}
	printf("\n");
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int row[], int length) {
	int i, j;
	bool flag;
	for (i = length; i > 0; i--) {
		flag = false;

		for (j = 0; j < i - 1; j++) {
			if (row[j] > row[j + 1]) {
				swap(row[j], row[j + 1]);
				flag = true;
			}
		}

		if (flag == false) {
			return;
		}
	}
}

// 至少五个元素构成的等差数列查找
void check0(int row[], int length) {
	int i, j, k;
	int sum = 1;
	int gongcha = 0;
	bool flag = false;
	int temp_length = length - 1;
	int* temp = (int*)malloc(sizeof(int) * temp_length);
	BubbleSort(row, length);
	for (i = 0; i < length - 1; i++) {
		temp[i] = row[i + 1] - row[i];
	}
	showRows(row, length);
	printf("两者间之差是：\n");
	showRows(temp, temp_length);

	for (j = temp_length; j > 0; j--) {
		for (k = 0; k < j; k++) {
			if (temp[j] == temp[k]) {
				sum++;
			}
		}
		if (sum > 3) {
			flag = true;
			gongcha = temp[j];
			break;
		}
		else {
			sum = 0;
			flag = false;
		}
	}
	if (flag == true) {
		printf("里面存在符合的数组且公差为【%d】。\n", gongcha);
	}
	else {
		printf("查找失败。\n");
	}
}

// 三个元素之和为0的查找
void check1(int row[], int length) {
	pro_finish();
}

// 将数字颠倒顺序输出
void diandao(int number) {
	int size = 4;
	int i, j;
	int temp = 1000;
	if (number / temp == 0) {
		temp = temp / 10;
		if (number / temp == 0) {
			temp = temp / 10;
			if (number / temp == 0) {
				temp = temp / 10;
			}
			else {
				size--;
				int* temp_row = (int*)malloc(sizeof(int) * size);
				for (i = 0; i < size; i++) {
					temp_row[i] = number / temp;
					number = number - temp * temp_row[i];
					temp = temp / 10;
				}
				showRows(temp_row, size);
				for (j = size - 1; j >= 0; j--) {
					printf("[%d] ", temp_row[j]);
				}
				printf("\n");
				pro_finish();
			}
		}
		else {
			size--;
			int* temp_row = (int*)malloc(sizeof(int) * size);
			for (i = 0; i < size; i++) {
				temp_row[i] = number / temp;
				number = number - temp * temp_row[i];
				temp = temp / 10;
			}
			showRows(temp_row, size);
			for (j = size - 1; j >= 0; j--) {
				printf("[%d] ", temp_row[j]);
			}
			printf("\n");
			pro_finish();
		}
	}
	else {
		int* temp_row = (int*)malloc(sizeof(int) * size);
		for (i = 0; i < size; i++) {
			temp_row[i] = number / temp;
			number = number - temp * temp_row[i];
			temp = temp / 10;
		}
		showRows(temp_row, size);
		for (j = size - 1; j >= 0; j--) {
			printf("[%d] ", temp_row[j]);
		}
		printf("\n");
		pro_finish();
	}
}

// 找到三个最大的乘积，带符号的数组
void zuidachengji() {
	int size = 0;
	int i;
	printf("请输入数组长度：");
	scanf("%d", &size);
	int* chengji_row = (int*)malloc(sizeof(int) * size);
	printf("请输入数组数据：\n");
	for (i = 0; i < size; i++) {
		printf("[%d]:", i);
		scanf("%d", &chengji_row[i]);
	}

	printf("你输入的数组是：\n");
	showRows(chengji_row, size);

	BubbleSort(chengji_row, size);
	printf("排序后的数组是：\n");
	showRows(chengji_row, size);

	printf("最大乘积是%d x %d x %d = %d。\n", chengji_row[0], chengji_row[1], chengji_row[size - 1], chengji_row[0] * chengji_row[1] * chengji_row[size - 1]);

	pro_finish();
}

void q_1() {
	int a[10] = { 4, 8, 22, 1, 6, 3, 5, 16, 7, 9 };
	int b[10] = { 42, 833, 242, 1, 633, 31, 5222, 136, 7, 9 };
	int c[10] = { 7, 11, 242, 15, 633, 19, 5222, 23, 67, 27 };

	printf("初始数组为：\n");
	showRows(a, 10);
	printf("经过计算后：\n");
	check0(a, 10);

	printf("\n");

	hello();
	printf("初始数组为：\n");
	showRows(b, 10);
	printf("经过计算后：\n");
	check0(b, 10);

	printf("\n");

	hello();
	printf("初始数组为：\n");
	showRows(c, 10);
	printf("经过计算后：\n");
	check0(c, 10);

	pro_finish();
}

// 功能函数
void wait_logo() {
	printf("> ");
}

void system_menu() {
	printf("MicroSystem V1.0\n");
	printf("===============================\n");
	printf("功能选择：\n");
	printf("1  展示菜单\n");
	printf("2  清除页面\n");
	printf("3  退出程序\n");
	printf("\n");
	printf("题目选择：\n");
	printf("4  至少五个元素构成的等差数列查找\n");
	printf("5  三个元素之和为0的查找\n");
	printf("6  将32位数字颠倒顺序输出，如果颠倒后第一位是0，自动省略\n");
	printf("7  颠倒数字顺序，逆序输出\n");

}

void my_choice(int choice) {
	switch (choice) {
	case 1:
		system("cls");
		system_menu();
		break;
	case 2:
		system("cls");
		pro_finish();
		break;
	case 3:
		exit(0);
		break;
	case 4:
		q_1();
		break;
	case 5:
		pro_finish();
		break;
	case 6:
		pro_finish();
		break;
	case 7:
		int num;
		printf("请输入1~9999之间任意一个数：\n");
		scanf("%d", &num);
		diandao(num);
		break;
	case 8:
		system("cls");
		printf("判断带符号的数组中乘积最大的三个数，并返回该最大值。");
		zuidachengji();
		break;
	default:
		printf("\033[31m[错误] 输入错误，请重新输入！\033[0m\r\n");
		break;
	}
}



void main() {
	int choice = 0;

	system_menu();

	while (1) {
		wait_logo();
		scanf("%d", &choice);
		my_choice(choice);
	}


}