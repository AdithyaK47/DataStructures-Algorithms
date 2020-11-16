#include <stdio.h>

void SelectionSort(int arr[], int size);
void Print(int arr[], int size);

int main() {
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

  SelectionSort(values, num);

  printf("Output Array: ");
  Print(values, num);

  return 0;
}


void Print(int arr[], int size) 
{ 
	int i; 
	for(i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

void SelectionSort(int arr[], int size){
  int indexMin,i,j;
	
  for(i = 0; i < size - 1; i++) { 
	
    indexMin = i;

    for(j = i + 1; j < size; j++) {
      if(arr[j] < arr[indexMin]) {
        indexMin = j;
      }
    }

    if(indexMin != i) {
      int temp = arr[indexMin];
      arr[indexMin] = arr[i];
      arr[i] = temp;
    }          
  }
}  

