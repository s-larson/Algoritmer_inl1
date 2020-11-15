#include "bucketSort.h"

bucketSort::bucketSort(vector<int> input) :
	sortingVector(input)
{
	sort(sortingVector);
}


void bucketSort::sort(vector<int> input)
{
	// Find greatest value in input vector
	int greatest = 0;
	int currentvalue;
	for (vector<int>::iterator it = input.begin(); it != input.end(); it++) {
		currentvalue = *it;
		if (currentvalue > greatest)
		{
			greatest = currentvalue;
		}
	}

	// Initiate values of a new vector. Size = greatest value + 1 to account for index position 0
	vector<int> Sortedlist(greatest+1);
	for (vector<int>::iterator it = Sortedlist.begin(); it != Sortedlist.end(); it++) {
		*it = 0;
	}

	// Move values from input to new vector. E.g. value 5 will be assigned to index 5
	for (vector<int>::iterator it = input.begin(); it != input.end(); it++) {
		Sortedlist[*it] = *it;
	}
	
	// Print out sorted list
	for (int output : Sortedlist) {
		if (output > 0)
		{
			cout << output << endl;
		}
	}
}