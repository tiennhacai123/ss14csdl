#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int swapped  = 0;
        for(int j=0;j< n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =  temp;
                swapped = 1;
            }
        }
        if(swapped==0){
        break;
    }
    }
}

void printfList(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[10] = {1,4,2,5,3,8,6,7,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);    
    printf("Mang truoc khi sap xep la: ");
    printfList(arr, size);

    bubbleSort(arr, 10);
    printf("Mang sau khi sap xep la: ");
    printfList(arr, size);
    return 0;
}