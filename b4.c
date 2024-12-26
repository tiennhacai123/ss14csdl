#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = arr[j];
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void printList(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10] = {1,4,3,2,5,8,7,6,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Mang truoc khi sap xep: ");
    printList(arr, size);

    selectionSort(arr, size);
    printf("Mang sau khi sap xep chon: ");
    printList(arr, size);
}