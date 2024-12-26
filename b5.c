#include<stdio.h>
#include<stdlib.h>
void insertSort(int arr[], int n){
    for(int i=1; i<n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j >=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10]={1,5,4,3,2,8,7,6,9,10};

    printf("Mang truoc khi sap xep la: ");
    printArr(arr,10);

    insertSort(arr,10);
    printf("Mang sau khi sap xep la: ");
    printArr(arr,10);
}