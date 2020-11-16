#include <stdio.h>

int LinearSearch(int arr[], int size, int data);

int main() {
  int num, item, pos;

  printf("Enter size of array: ");
  scanf("%d", &num);
  int values[num];

  printf("Enter %d integers: ", num);
  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Enter integer to be searched: ");
  scanf("%d", &item);

  int position = LinearSearch(values, num, item);

  if(position == -1){
    printf("Element not found.");
  }
  else{
    printf("Element found at position: %d", position + 1);
  }
}

int LinearSearch(int arr[], int size, int data){
  int index = -1;
  int i;

  for(i = 0; i < size; i++) {
    if(data == arr[i]) {
      index = i;
      break;
    }
   }   
   return index;
}

