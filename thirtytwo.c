// Write a C program to find the maximum and minimum in an array.
#include<stdio.h>
int main(){
    int n, i;
    int arr[] = {34,676,8,676,878};

    int max = arr[0];
    int min = arr[0];

    n = sizeof(arr)/ sizeof(arr[0]);

    for (i = 0; i<n; i++){
        if ((arr[i]) > max){
            max = arr[i];
        }
        if ((arr[i]) < min){
            min = arr[i];
        };
    }
    printf("Max number is: %d\n", max);
    printf("Min number is: %d", min);
    return 0;

}