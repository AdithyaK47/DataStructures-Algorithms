#include <stdio.h>
int search(int arr[], int size, int val);

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

  pos = search(values, num, item);
  printf("Integer found at position %d", pos);
  return 0;
}


int search(int arr[], int size, int val){
  int j = 0;
  while( j < size){
    if( arr[j] == val ) {
      break;
    }
    j = j + 1;
   }
  return j + 1;
}
