#include "insertionSort.h"

insertionSort::insertionSort(vector<int> input, int n) :
	sortingList(input),
	number(n)
{
	sort(sortingList, number);
}


void insertionSort::sort(vector<int> list, int n)
{
	int i, j, temp, min;
	for (i = 1; 1 < n - 1; ++i) {
		// j = i is the element "picked"
		for (j = i; j >= 1 && list[j - 1] > list[j]; --j) {
			// swap with the previous element
			temp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = temp;
		}
	}
}