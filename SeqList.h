#pragma once
#include <stdio.h>
const int DefaultSize = 100;

template <class DataType>
class SeqList
{
public:
    SeqList() { length = 0; }            //�޲������췽��
    SeqList(DataType a[], int n);    //�в������췽��
    ~SeqList() {}                    //��������
    int Length() { return length; }    //���Ա���
    DataType Get(int i);            //��λ����
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
    DataType Delete(int i);         //ɾ��
    void PrintList()
    {
        for (int i = 0; i < length; i++)
        {
            printf("%d", data[i]);
        }
        printf("\n");
    }

    DataType data[DefaultSize];         //˳���ʹ������ʵ��
    int length;                     //�洢˳���ĳ���
};

