#include <stdio.h>

void Merge(int arr[], int l, int m, int r);
void MergeSort(int arr[], int l, int r);
void Print(int A[], int size);

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

	printf("Given array is \n");
	Print(values, num);

	MergeSort(values, 0, num - 1);

	printf("\nSorted array is \n");
	Print(values, num);
	return 0;
}


void Merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];


	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}


void MergeSort(int arr[], int l, int r)
{
	if (l < r) {

		int m = l + (r - l) / 2;

		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		Merge(arr, l, m, r);
	}
}


void Print(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


