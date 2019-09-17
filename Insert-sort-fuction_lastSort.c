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
	int i, key, j; 
	for (i = 1; i < m; i++) { 
		key = arr[i]; 
		j = i - 1; 
		
		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key;
	} 
	printArray(arr, m);
}

// Funcion que define el limite m para la funcion lastSort()
void insertionSort(int arr[], int n) {
	int i; 
	for (i = 2; i <= n; i++) {
		lastSort(arr, i);
	}
} 

/* Driver program to test insertion sort */
int main() { 
	
	int arr[] = { 12, 11, 13, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	printf("Array original:\n");
	printArray(arr, n);
	
	printf("\nComienza Ordenamiento del ultimo elemento del array:\n");
	
	insertionSort(arr, n);
	
	printf("\nArray Ordenado:\n ");
	printArray(arr, n); 
	
	return 0; 
}
