#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else if(arr[mid] > target){
            high = mid -1;
        }
    }
            return -1;

}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Nhap vao phan tu muon tim kiem: ");
    int target;
    scanf("%d",&target);
    int result;
    int size = sizeof(arr) / sizeof(arr[0]);
    result = binarySearch(arr,size,target);
    if(result != -1){
        printf("tim thay phan tu %d o chi so %d",target,result);
    }else{
        printf("khong tim thay phan tu %d ", target);
    }   
    return 0;
}