#include <stdio.h>
int deletion(int arr[], int size, int pos);

int main() {
  int num,index;

  printf("Enter size of array: ");
  scanf("%d", &num);
  int values[num]; 

  printf("Enter %d integers: ", num);
  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Enter position to be deleted: ");
  scanf("%d", &index);

  num = deletion(values, num, index);
  for(int i = 0; i < num; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}

int deletion(int arr[], int size, int pos){
  int j = pos;
  while(j < size -1){
    arr[j - 1] = arr[j];
    j += 1;
  }
  size -= 1;
  return size;
}


