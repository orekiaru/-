// 数据结构.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "sqlxiti.h"
#include "SeqList.h"
int main()
{
	int a[10] = { 1,3,4,2,5,4,2,5,6,2 };
	SeqList<int> *L = new SeqList<int>(a,10);
	int min;
	p19_1(*L,min);
	L->PrintList();
}

