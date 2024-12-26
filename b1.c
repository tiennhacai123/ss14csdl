#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int n, int target){
    for(int i =0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
        return -1;
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Nhap vao gia tri can tim: ");
    int target;
    scanf("%d",&target);
    int result;
    result = linearSearch(arr,10,target);
    if(result != -1){
        printf("Phan tu %d duoc tim thay o chi muc %d", target, result);
    }else if(result == -1){
        printf("Phan tu %d khong duoc tim thay trong mang");
    }
    return 0;
}
// do phuc tap la O(n)