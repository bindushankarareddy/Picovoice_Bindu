// C program for implementation of Bubble sort 
#include <stdio.h> 
  
void swap(int *X, int *Y) 
{ 
    int temp = *X; 
    *X = *Y; 
    *Y = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}



/////////9

Insertion sort runs fast in practice, is stable and is in-place. It's very much related to gnome sort, 
faster in practice but for gnome sort the code is a 
bit smaller and it takes less auxiliary space (not in terms of big O, the difference is in the constant)