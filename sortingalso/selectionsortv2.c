#include <stdio.h>




void printArr(int * arr) {
    // int length = sizeof(arr)/sizeof(arr[0]);

    // for(int i = 0; i>length ; i++){
    //     printf(" %d , ", arr[i]);
    // }
}








void selectionSort( int * arr ){
    printArr(arr);
}



int main() {

    int arr[] = { 34,6,3,52,2};
    // sorted  = 2 , 3, 6, 34, 52

    printArr(arr);
    selectionSort(arr);
    printArr(arr);






    return 0;
}