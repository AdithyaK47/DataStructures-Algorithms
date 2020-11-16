#include <stdio.h> 

void BubbleSort(int arr[], int size);
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

  printf("Array before sorting: \n");
  Print(values, num);
  BubbleSort(values, num); 

	printf("Sorted array: \n"); 
	Print(values, num); 
	return 0; 
} 


void BubbleSort(int arr[], int size){ 
  int i, j, temp; 
  for (i = 0; i < size - 1; i++){
    for (j = 0; j < size - i - 1; j++){
      if (arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }	 
} 


void Print(int arr[], int size) 
{ 
	int i; 
	for(i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 


