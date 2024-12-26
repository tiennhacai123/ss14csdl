#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int swap = 0;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1; 
            }
        }
        if(swap == 0){
            break; 
        }
    }
}

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i; 
        }
    }
    return -1; 
}

int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            return mid;  
        }else if(arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;  
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = {5, 7, 4, 3, 2, 6, 1, 9, 10, 8};

    int resultLinearSearch, resultBinarySearch;

    printf("Mang chua sap xep la: ");
    printArr(arr, 10);

    int target1 = 8;
    resultLinearSearch =  linearSearch(arr, 10, target1);
    if(resultLinearSearch != -1){
        printf("Phan tu %d duoc tim thay o chi muc %d\n", target1, resultLinearSearch);
    }else{
        printf("Khong tim thay phan tu\n");
    }

    bubbleSort(arr, 10);
    printf("\nMang sau khi sap xep la: ");
    printArr(arr, 10);

    int target2 = 1;
    resultBinarySearch = binarySearch(arr, 10, target2);
    if(resultBinarySearch != -1){
        printf("Phan tu %d duoc tim thay o chi muc %d\n", target2, resultBinarySearch);
    }else{
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
