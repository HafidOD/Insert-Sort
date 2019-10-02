#include <math.h> 
#include <stdio.h> 
// Funcion para imprimir el array
void printArray(int arr[], int n) { 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n");
}

// Funcion para ordenar el ultimo elemento m
void lastSort(int arr[], int m) {
	
	int key, j; 
	key = arr[m];
	j = m - 1; 
	//printArray(arr, m);
	while (j >= 0 && arr[j] > key) { 
		arr[j + 1] = arr[j]; 
		j = j - 1; 
	} 
	arr[j + 1] = key;	
	printArray(arr, m);
}

// Funcion que define el limite m para la funcion lastSort()
void insertionSort(int arr[], int n) {
	int i; 
	for (i = 1; i < n; i++) {
		lastSort(arr, i);
	}
} 

/* Driver program to test insertion sort */
int main() { 
	
	int arr[] = {4, 3, 2, 10, 12, 22, 5, 6}; 
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Array original:\n");
	printArray(arr, n);
	
	printf("\nComienza Ordenamiento del ultimo elemento del array:\n");
	
	insertionSort(arr, n);
	
	printf("\nArray Ordenado:\n");
	printArray(arr, n); 
	
	getchar();
	
	return 0; 
}
