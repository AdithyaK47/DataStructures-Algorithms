#include<stdio.h>

int BinarySearch(int arr[], int size, int item);

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
 
  int location = BinarySearch(values, num, item);

  if(location != -1)
    printf("\nElement found at location: %d" ,(location+1));
  else
    printf("\nElement not found.");

  return 0;
}

int BinarySearch(int arr[], int size, int item) {
   int lowerBound = 0;
   int upperBound = size -1;
   int midPoint = -1;  
   int index = -1;
	
   while(lowerBound <= upperBound) {
      midPoint = lowerBound + (upperBound - lowerBound) / 2;	

      if(arr[midPoint] == item) {
         index = midPoint;
         break;
      } else {
         if(arr[midPoint] < item) {
            lowerBound = midPoint + 1;
         }
         else {
            upperBound = midPoint -1;
         }
      }               
   }
   return index;
}

