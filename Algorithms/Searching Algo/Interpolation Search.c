#include<stdio.h>

int InterpolationSearch(int arr[], int,int);

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

  int location = InterpolationSearch(values, num, item);

  if(location != -1)
    printf("\nElement found at location: %d" ,(location+1));
  else
    printf("Element not found.");
   
  return 0;
}

int InterpolationSearch(int arr [], int size, int data) {
   int lowerbound = 0;
   int higherbound = size - 1;
   int midpoint = -1;     
   int index = -1;

   while(lowerbound <= higherbound) {
     midpoint = lowerbound + (((double)(higherbound - lowerbound) / (arr[higherbound] - arr[lowerbound])) * (data - arr[lowerbound]));

     if(arr[midpoint] == data) {
      index = midpoint;
      break;
     }
     else {
       if(arr[midpoint] < data) {
         lowerbound = midpoint + 1;
        } 
       else{
         higherbound = midpoint - 1;
        }
     }               
   }
   return index;
}

