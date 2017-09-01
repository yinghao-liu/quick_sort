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
#include <iostream>
#include "sort"
using namespace std;
using namespace sort;

int main(int argc,char **argv)
{
	int aa[]={10,9};
	//char aa[]={6,1,2,7,9,4,5,10,8};
	//char aa[]={6,1,5,4,8,3,9,12,51,11,15,14,13,25,69,47,56,74,26,78};
	size_t element_num;
	element_num = sizeof(aa)/sizeof(aa[0]);
	print_element(aa, element_num);
	quick_sort(aa, element_num);
	print_element(aa, element_num);
	return 0;
}
