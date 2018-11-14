#include<stdio.h>
#include<stdlib.h>

void selectionSort(int arr[], int n){
	
	int minValue, index;
	
	for(int k = 0; k < n; k++){
		
		minValue = arr[k];
		
		for(int i = k; i < n; i++){
		
		if(arr[i]<minValue)
			minValue = arr[i];	
		}
		
		for(int i = 0; i < n; i++){
			
			if(arr[i] == minValue){
				index = i;
				break;
			}
		}
		
		int temp = arr[k];
		arr[k] = arr[index];
		arr[index] = temp; 
		
		for(int i = 0; i < n; i++){
			
			if(i != n-1)
			printf("%d - ", arr[i]);
			else
			printf("%d", arr[i]);
		}
	
	printf("\n");
	}
}

int main(){
	
	int arr[] = {64, 25, 12, 22, 11};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr, size);
	
	system("pause");
	return 0;
}
