#include <stdio.h>




void printArr(int * arr, int length) {
    // printf("%d", arr[0]);
    for(int i = 0; i<length ; i++){
        printf(" %d , ", arr[i]);
    }
    printf("\n");
}








void selectionSort( int * arr , int length){
    //
    for (int i = 0; i < length-1; i++) {
        
        int pos = i;
        for (int j = i+1; j < length -1; j++) {
            
            if(arr[j]>arr[j+1]){
                pos = j+1;
            }
            // swap them

        }
        
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;

    }
    

}



int main() {

    int arr[] = { 34,6,3,52,2};
    // sorted  = 2 , 3, 6, 34, 52
    int length = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, length);
    selectionSort(arr, length);
    printArr(arr, length);






    return 0;
}