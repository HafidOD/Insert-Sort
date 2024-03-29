#include <math.h> 
#include <stdio.h> 

// Función que imprime I, J 
void printIJPositions(int i, int j, int n);
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);


/* Driver program to test insertion sort */
int main() 
{ 
	int arr[] = {4, 3, 2, 10, 12, 1, 5, 6 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	printf("Array original:\n");
	printArray(arr, n); 
	
	printf("Comienza el ordenamiento:\n");
	insertionSort(arr, n); 
	
	printf("Array ordenado:\n");
	printArray(arr, n); 
	
	return 0; 
} 


void printIJPositions(int i, int j, int n){
	if (j<0){
		j=0;
	}
	if (i>=n){
		i=n-1;
	}
	for(int k=0; k < n; k++){
		if(k==i || k==j){
			if (k==i) {
				printf("i\t");
			} else {
				printf("j\t");
			}
		} else {
			printf("\t");
		}
	}
	printf("\n");
}


/* Funcion de ordenamiento */
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		printf("Valor del key: %d\n", key);
		j = i - 1; 
		printIJPositions(i,j,n);
		printArray(arr,n);
		
		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
			
			printIJPositions(i,j,n);
			printArray(arr,n);
		} 
		arr[j + 1] = key;
		
		printIJPositions(i,j,n);
		printArray(arr,n);
	} 
	printIJPositions(i,j,n);
	printArray(arr,n);
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d\t", arr[i]); 
	printf("\n\n"); 
}
