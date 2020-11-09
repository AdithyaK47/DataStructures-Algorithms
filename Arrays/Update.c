#include <stdio.h>
void update(int arr[], int pos, int val);

int main() {
  int num, index, item;
  
  printf("Enter size of array: ");
  scanf("%d", &num);
  int values[num]; 

  printf("Enter %d integers: ", num);
  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Enter index to be updated: ");
  scanf("%d", &index);
  printf("Enter new value: ");
  scanf("%d", &item); 

  update(values, index, item);
  return 0;
}

void update(int arr[], int pos, int val){
  arr[pos] = val;
}
