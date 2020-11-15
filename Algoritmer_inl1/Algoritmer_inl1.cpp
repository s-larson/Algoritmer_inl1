#include <iostream>
#include <vector>
#include "bucketSort.h"
#include "insertionSort.h"

using namespace std;

int main()
{	
	//vector <int> input = { 5, 18, 4, 20, 13, 1, 9, 8, 12, 6, 6 };
	//bucketSort sort = bucketSort(input);
	//insertionSort sort = insertionSort(input, input.size);
	// int list[] = { 5, 18, 4, 20, 13, 1, 9, 8, 12, 6 };

	/*
	int list[] = { 12893 , 12837 ,5, 18, 4, 20, 13, 1, 9, 8, 12, 6, 23, 10, 11, 273, 1827 , 1123, 48 , 2, 3, 4, 123, 312, 45, 23, 18, 074, 2345, 212,
		12893 , 12837 ,5, 18, 4, 20, 13, 1, 9, 8, 12, 6, 23, 10, 11, 273, 1827 , 1123, 48 , 2, 3, 4, 123, 312, 45, 23, 18, 074, 2345, 212 ,
	12893 , 12837 ,5, 18, 4, 20, 13, 1, 9, 8, 12, 6, 23, 10, 11, 273, 1827 , 1123, 48 , 2, 3, 4, 123, 312, 45, 23, 18, 074, 2345, 212 , 2345, 3, 4, 123, 312, 45, 23, 18, 74, 212 };*/
	//int list[] = { 12, 6, 23, 10, 11, 273, 1827 , 1123, 48 , 2, 3, 4, 123, 312, 45, 23, 18, 074, 2345, 212 };
	//int list[] = { 2345, 3, 4, 123, 312, 45, 23, 18, 74, 212 };
	int list[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int counter = 0;



	int i, j, temp;
	
	int n = (sizeof(list) / sizeof(*list));
	
	for (i = 1; i < n ; ++i) {
		counter++;
		// j = i is the element "picked"
		for (j = i; j >= 1 && list[j - 1] > list[j]; --j) {
			// swap with the previous element
			temp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = temp;
		}	
	}
	
	for (i = 0; i < n; i++) {
		cout << list[i] << endl;
	}
	return 0;
}
