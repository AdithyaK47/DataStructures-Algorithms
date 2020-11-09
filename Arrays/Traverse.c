#include <stdio.h>
void traversal(int *arr, int n);
int main() {
  int num;
  
  printf("Enter size of array: ");
  scanf("%d", &num);
  int values[num];

  printf("Enter %d integers: ", num);
  for(int i = 0; i < num; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers\n");
  traversal(values,num);
  return 0;
}

void traversal(int *arr, int n){
    for(int i = 0; i < n; ++i) {
     printf("%d\n", arr[i]);
  }
}
