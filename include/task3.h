#pragma once
#include <iostream>
using namespace std;


template <typename T, size_t N>
T *map(T(&arr)[N], T(*change)(T)){
	for (int i = 0; i < N; i++){
		arr[i] = change(arr[i]);
	}
	return arr;
}