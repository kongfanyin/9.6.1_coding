#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_NUM 40
//程序包含一个让用户输入的循环，并使用输入的数据来填充一个由golf结构组成的数组，数组被填满，或者用户将高尔夫选手的姓名
//设置为空字符时，退出循环。
//main()函数只使用头文件中原型化的函数来访问golf结构
#include"golf.h"

#include<string>
#include<fstream>
#include<iostream>

int main(char argc, char** argv)
{
	using std::cout;
	using std::cin;
	using std::endl;
	golf Data[MAX_NUM];
	golf ann;
	SetGolf(ann, "Ann Birdfree", 24);


	return 0;
}