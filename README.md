# DataStruct
“ 数据结构C语言版”，一个自娱自乐的小程序。

# 一、简述

## 1.1 计划

​		该程序目前计划是：

​				1、利用一个人性化菜单综合所有的数据结构方面的功能；

​				2、仅供学习使用；

# 二、功能目录

## 2.1 相关功能

### 2.1.1 功能列表

​		该程序囊括了一下功能（对应程序中的代号）：

​				1、展示菜单；

​				2、清除页面；

​				3、退出程序；

​				4、至少五个元素构成的等差数列查找；

​				5、三个元素之和为0的查找；

​				6、将32位数字颠倒顺序输出，如果颠倒后第一位是0，自动省略；

​				7、颠倒数字顺序，逆序输出；

### 2.1.2 算法分析

#### 2.1.2.1 展示菜单

函数名称：system_menu( )；

功能实现：单纯地打印预设的菜单；

返  回  值：无；

代码实现：

```c
void system_menu(){
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
```



#### 2.1.2.2 清除页面

函数名称：无；

功能实现：利用cmd命令清除命令行字符；

返  回  值：无；

代码实现：

```c
system("cls");
```



#### 2.1.2.3 退出程序

函数名称：无；

功能实现：终止程序；

返  回  值：无；

代码实现：

```c
exit(0);
```

#### 

#### 2.1.2.4 至少五个元素构成的等差数列查找

函数名称：check0( )；

功能实现：在不少于五个字符的数组中找到一组等差数列并打印出来；

返  回  值：无；

代码实现：

```c
// 功能函数
void check0(int row[], int length){
	int i, j, k;
	int sum = 1;
	int gongcha = 0;
	bool flag = false;
	int temp_length = length - 1;
	int *temp = (int *)malloc(sizeof(int) *temp_length);
	BubbleSort(row, length);
	for(i = 0; i < length-1; i++){
		temp[i] = row[i+1] - row[i];
	}
	showRows(row, length);
	printf("两者间之差是：\n");
	showRows(temp, temp_length);

	for(j = temp_length; j > 0; j--){
		for(k = 0; k < j; k++){
			if(temp[j] == temp[k]){
				sum++;
			}
		}
		if(sum > 3){
			flag = true;
			gongcha = temp[j];
			break;
		}
		else{
			sum = 0;
			flag = false;
		}
	}
	if(flag == true){
		printf("里面存在符合的数组且公差为【%d】。\n", gongcha);
	}
	else{
		printf("查找失败。\n");
	}
}

// 实现函数
void q_1(){
	int a[10] = {4, 8, 22, 1, 6, 3, 5, 16, 7, 9};
	int b[10] = {42, 833, 242, 1, 633, 31, 5222, 136, 7, 9};
	int c[10] = {7, 11, 242, 15, 633, 19, 5222, 23, 67, 27};

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
```

#### 

#### 2.1.2.5 三个元素之和为0的查找

函数名称：null( )；

功能实现：无；

返  回  值：无；

代码实现：

```c
NULL
```

#### 

#### 2.1.2.6 将32位数字颠倒顺序输出，如果颠倒后第一位是0，自动省略

函数名称：null( )；

功能实现：无；

返  回  值：无；

代码实现：

```c
NULL
```

#### 

#### 2.1.2.7 颠倒数字顺序，逆序输出

函数名称：diandao( )；

功能实现： 将输入的1~4位数颠倒输出；

返  回  值：无；

代码实现：

```c
void diandao(int number){
	int size = 4;
	int i,j;
	int temp = 1000;
	if(number/temp == 0){
		temp = temp / 10;
		if(number/temp == 0){
			temp = temp / 10;
			if(number/temp == 0){
				temp = temp / 10;
			}
			else{
				size--;
				int *temp_row = (int *)malloc(sizeof(int) *size);
				for(i = 0; i < size; i++){
					temp_row[i] = number / temp;
					number = number - temp * temp_row[i];
					temp = temp / 10;
				}
				showRows(temp_row, size);
				for(j = size - 1; j >= 0; j--){
					printf("[%d] ", temp_row[j]);
				}
				printf("\n");
				pro_finish();
			}
		}
		else{
			size--;
			int *temp_row = (int *)malloc(sizeof(int) *size);
			for(i = 0; i < size; i++){
				temp_row[i] = number / temp;
				number = number - temp * temp_row[i];
				temp = temp / 10;
			}
			showRows(temp_row, size);
			for(j = size - 1; j >= 0; j--){
				printf("[%d] ", temp_row[j]);
			}
			printf("\n");
			pro_finish();
		}
	}
	else{
		int *temp_row = (int *)malloc(sizeof(int) *size);
		for(i = 0; i < size; i++){
			temp_row[i] = number / temp;
			number = number - temp * temp_row[i];
			temp = temp / 10;
		}
		showRows(temp_row, size);
		for(j = size - 1; j >= 0; j--){
			printf("[%d] ", temp_row[j]);
		}
		printf("\n");
		pro_finish();
	}
}
```

#### 

# 三、未来计划

## 3.1 功能规划

​				1、规划更多的函数；

## 3.2 程序优化

​				1、优化函数命名；