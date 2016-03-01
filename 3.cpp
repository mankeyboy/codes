#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//Compiling all sorts, ADTs and searches learnt this sem
void swap( int *t1, int *t2)
{
	int t=*t1;
	*t1=*t2;
	*t2=t;
}

int selsort(int A[], n, int *min_add)
{
	int max=0, min=0;
	for(int x=0; x<n; x++)
	{
		for(int y=x+1; y<n; y++)
		{
			if(A[max]>A[y])
			{
				if(A[min]>A[j])
					{swap(&A[min],&A[j]);min=j;}
				else break;
			}
			else {swap(&A[max],&A[j]);max=j;}
		}		
	}
	*min_add=min;
	return max;
}

void merge(int*, int*, int, int, int);

void mergesort(int *a, int*b, int start, int end) 
{
  int half;
  if (start < end) 
  {
    half = (start + end) / 2;
    mergesort(a, b, start, half);
    mergesort(a, b, half + 1, end);
    merge(a, b, start, half, end);
  }
}

void merge(int *a, int *b, int start, int halfpoint, int end) 
{
  int h, i, j, k;
  h = start;
  i = start;
  j = halfpoint + 1;
  while ((h <= halfpoint) && (j <= end)) 
  {
    if (a[h] <= a[j]) 
    {
      b[i] = a[h];
      h++;
    } 
    else 
    {
      b[i] = a[j];
      j++;
    }
    i++;
  }
  if (h > halfpoint) 
  {
    for (k = j; k <= end; k++)
    {
      b[i] = a[k];
      i++;
    }
  } 
  else 
  {
    for (k = h; k <= halfpoint; k++) 
    {
      b[i] = a[k];
      i++;
    }
  }
  // Write the final sorted array to our original one
  for (k = start; k <= end; k++) 
  {
    a[k] = b[k];
  }
} 

void quicksort(int *arr, int size)
{
    if (size <= 1)
        return;

    // These two variables will take care of position of comparison.
    int lower = 0;
    int upper = size-1;  

    int pivot = arr[upper/2]; // assigns pivot

    while (lower <= upper)
    {
        while (arr[lower] < pivot)
            ++lower;
        while (arr[upper] > pivot)
            --upper;

        if (upper > lower)
           swap(&arr[upper],&arr[lower]);
        if(arr[upper] == arr[lower])
          {
            // Can either increment or decrement in case of duplicate entry
            upper--; // lower++;
          }        
    }

    quicksort(arr, lower);
    quicksort( &arr[lower+1], size-1-lower);
}

int bubblesort(int )
/*int main() 
{
  int num;
  cout << "How many numbers do you want to sort: ";
  cin >> num;
  int a[num];
  int b[num];
  for (int i = 0; i < num; i++) 
  {
    cout << (i + 1) << ": ";
    cin >> a[i];
  }

  // Start merge sort
  mergesort(a, b, 0, num - 1);

  // Print the sorted array
  cout << endl;
  for (int i = 0; i < num; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
*/