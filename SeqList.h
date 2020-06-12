#pragma once
#include <stdio.h>
const int DefaultSize = 100;

template <class DataType>
class SeqList
{
public:
    SeqList() { length = 0; }            //无参数构造方法
    SeqList(DataType a[], int n);    //有参数构造方法
    ~SeqList() {}                    //析构函数
    int Length() { return length; }    //线性表长度
    DataType Get(int i);            //按位查找
    int Locate(DataType element)
    {
        for (int i = 0; i < length; i++)
        {
            if (data[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
    void Insert(int i, DataType x)
    {

    }
    DataType Delete(int i);         //删除
    void PrintList()
    {
        for (int i = 0; i < length; i++)
        {
            printf("%d", data[i]);
        }
        printf("\n");
    }

    DataType data[DefaultSize];         //顺序表使用数组实现
    int length;                     //存储顺序表的长度
};

