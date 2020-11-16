#include<stdio.h> 

void QuickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int* a, int* b);
void Print(int arr[], int size);

int main() 
{ 
  int num;

  printf("Enter size of array: ");
  scanf("%d", &num);

  int values[num];
  printf("Enter %d integers: ", num);

  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

	printf("Array before sorting \n"); 
	Print(values, num);  

	QuickSort(values, 0, num - 1); 

	printf("Sorted array: \n"); 
	Print(values, num); 

	return 0; 
} 


void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++) 
	{ 
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void QuickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 

		QuickSort(arr, low, pi - 1); 
		QuickSort(arr, pi + 1, high); 
	} 
} 

void Print(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

