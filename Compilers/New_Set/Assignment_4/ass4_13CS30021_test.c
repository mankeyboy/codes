void quicksort(int *arr, int size)
{
    if (size <= 1)
        return;

    int lower = 0;
    int upper = size-1;  

    int pivot = arr[upper/2]; 

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
           
            upper--;
          }        
    }

    quicksort(arr, lower);
    quicksort( &arr[lower+1], size-1-lower);
}
void print_array(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
void sum(int i, int j, int k = 4)
{
    return i+j+k;               
}

int main()
{
    int p, q, r;
    p = 1000;
    q = 1;
    r = sum(p,q);
   
    int arr[] = {1, 34, 23, 56, 12, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, n);
    print_array(arr, n);
    
    printf("\n------------------END---------------------------\n") 
    return 0;
}

/* Mayank Roy 
   13CS30021
 Assignment 4
*/
