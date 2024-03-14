#include "sorting.h"
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main() {
	Sort object1(10000);
	object1.RandomArr();


    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
    object1.FastSort(0,9999);
    std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();
    std::cout<<"Time:"<<duration<<std::endl;

    Sort object2(10000);
	object2.RandomArr();
    std::chrono::steady_clock::time_point start_time1 = std::chrono::steady_clock::now();
    object2.SelSort(0,9999);
    std::chrono::steady_clock::time_point end_time1 = std::chrono::steady_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time1 - start_time1).count();
    std::cout<<"Time:"<<duration1<<std::endl;
}
