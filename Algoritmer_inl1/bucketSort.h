#ifndef BUCKETSORT_H_
#define BUCKETSORT_H_
#include <vector>
#include <iostream>

using namespace std;

class bucketSort
{
public:
	bucketSort(vector<int> input);		// Constructor

private: 
	vector<int> sortingVector;
	void sort(vector<int> input);	// Sorting function
};

#endif
