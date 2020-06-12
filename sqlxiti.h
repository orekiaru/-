#pragma once
#include "SeqList.h"
// p19 
//1.
bool p19_1(SeqList<int> &list,int &value)
{
	if (list.length == 0) return false;
	value = list.data[0];
	int pos = 0;
	for (int i = 0; i < list.length; i++)
	{
		if (list.data[i] < value)
		{
			value = list.data[i];
			pos = i;
		}
	}
	list.data[pos] = list.data[list.length - 1];
	list.length--;
	return true;
}

bool p19_2(SeqList<int> L)
{
	if (L.length == 0)
	{
		throw "list length == 0";
		return false;
	}

	int middle = L.length / 2 + 1;
	int temp;
	for (int i = 0; i < middle; i++)
	{
		temp = L.data[i];
		L.data[i] = L.data[L.length - i];
		L.data[L.length - 1] = temp;
	}
	return true;
}

//bool p19_3(SeqList<int>& L)
//{
//
//}