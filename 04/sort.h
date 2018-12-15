/* vim:set ft=cpp: */ 
/*
 * Copyright (C) 2017 francis_hao <francis_hao@126.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 * NON INFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 */
#ifndef _SORT_
#define _SORT_

#include <iostream>
using namespace std;

namespace sort{

template <typename T>
int quick_sort(T *array, size_t len)
{
	size_t i;
	size_t j;
	size_t index;
	T temp;

	if (NULL == array){
		return -1;
	}
	if (len <= 1){
		return 0;
	}
	i = 0;
	j = len-1;
	index = 0;
	/*i is from left to right, j is from right to left*/
	while (i < j){
		if (array[j] >= array[index]){
			j--;
			continue;
		}
		if (array[i] <= array[index]){
			i++;
			continue;
		}
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	temp = array[i];
	array[i] = array[index];
	array[index] = temp;

	quick_sort(array, i);
	quick_sort(&array[i+1],len-(i+1));

	return 0;
}

template <class T>
void print_element(T *array, size_t len)
{
	size_t i;
	for (i=0; i<len; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

}/*namespace sort*/
#endif /*_SORT_*/
