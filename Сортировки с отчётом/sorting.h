#pragma once
#include <iostream>

class Sort
{
private:
	int* arr;
	int amount;
public:
	Sort(int size);
	~Sort();
	void RandomArr();
	void Print();
    void FastSort(int low, int high);
    int Partition(int low, int high);
    void FastSortRev(int low, int high);
    int PartitionRev(int low, int high);
    void SelSort(int m, int n);
    void SelSortRev(int m, int n);
};
