#include "sorting.h"
#include <iostream>

Sort::Sort(int size){
	amount=size;
	arr=new int[amount];
	for (int i=0; i<amount; i++){
		arr[i]=0;
	}
}

void Sort::RandomArr(){
	for (int i=0; i<amount; i++){
		arr[i]=(rand()%(100-0+1))+0;
	}
}

void Sort::Print(){
	for (int i=0; i<amount; i++){
		std::cout<<arr[i]<<" ";
	}
}

void Sort::SelSort(int m, int n){
    int i=m,j,minIndex;
    for (i; i<n; i++) {
        minIndex = i;
        for (j=i+1; j<n+1; j++){
            if (arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }
}

void Sort::SelSortRev(int m, int n) {
    int i=m,j,minIndex;
    for (i; i<n; i++) {
        minIndex=i;
        for (j=i+1; j<n+1; j++){
            if (arr[j]>arr[minIndex]){
                minIndex=j;
            }
        }
        std::swap(arr[minIndex], arr[i]);
    }
}

void Sort::FastSort(int low, int high) {
    if (low<high){
        int pivot=Partition(low, high);
        FastSort(low, pivot-1);
        FastSort(pivot+1, high);
    }
}

int Sort::Partition(int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j=low; j<=high-1; j++){
        if (arr[j]<pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

void Sort::FastSortRev(int low, int high) {
    if (low<high){
        int pivot=PartitionRev(low, high);
        FastSortRev(low, pivot-1);
        FastSortRev(pivot+1, high);
    }
}

int Sort::PartitionRev(int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j=low; j<=high-1; j++){
        if (arr[j]>pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

Sort::~Sort(){
	delete[] arr;
}
