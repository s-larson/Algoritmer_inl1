#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_
#include <vector>
#include <iostream>

using namespace std;

class insertionSort
{
public:
	insertionSort(vector<int> input, int n);		// Constructor

private:
	vector<int> sortingList;
	int number;
	void sort(vector<int> input, int n);	// Sorting function
};

#endif
