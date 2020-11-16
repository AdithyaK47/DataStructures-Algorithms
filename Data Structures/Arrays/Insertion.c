#include <stdio.h>
int insertion(int arr[], int size, int val, int pos);

int main() {
  int num, ele, index;

  printf("Enter size of array: ");
  scanf("%d", &num);
  int values[num];

  printf("Enter %d integers: ", num);
  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Enter value to be inserted: ");
  scanf("%d", &ele);
  printf("Enter index to be inserted: ");
  scanf("%d", &index);

  num = insertion(values, num, ele, index);
  for(int i = 0; i < num; ++i) {
    printf("%d\n", values[i]);
  }
  return 0;
}

int insertion(int arr[], int size, int val, int pos){
  int j = size;
  size += 1;
  while( j >= pos) {
    arr[j+1] = arr[j];
    j -= 1;
  }
  arr[pos] = val;
  return size;
}

