#include <iostream> /* cout */
#include <list> /* list */
 
#define BASE 10 // # of buckets to use
#define ARRAY_SIZE 50 // max # of elements in array
 
using namespace std;
 
// function prototypes
void radix(int* nums, int length, int max);
 
int main() {
	int nums[ARRAY_SIZE];
	int i;
	int max=0;
		
 
		// determine max element upon addition to array
		max = (nums[i] > max)? nums[i]: max;
		cout << "\t" << nums[i] << "\r\n";
	}
	cout << endl << endl;
 
	// sort using radix algorithm, passing max element
	radix(nums,ARRAY_SIZE,max);
 
	// print sorted array
	cout << "After:\r\n";
	for (int i=0; i<ARRAY_SIZE; i++)
		cout << "\t" << nums[i] << "\r\n";
 
	return 0;
}
 
void radix(int* nums, int length, int max) {
	list<int> bucket[BASE];
	int i;
 
	// iterate through each radix until n>max
	for (int n=1; max >= n; n *= BASE) {
		// sort list of numbers into buckets
		for (i=0; i<length; i++)
			bucket[(nums[i]/n)%BASE].push_back(nums[i]);
 
		// merge buckets back to list
		for (int k=i=0; i<BASE; bucket[i++].clear())
			for (list<int>::iterator j = bucket[i].begin(); j != bucket[i].end(); nums[k++] = *(j++));
	}
}