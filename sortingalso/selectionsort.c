#include <stdio.h>

//  slection sort 


int main() {
    
    int arr[] = {1,5,2,7,4,9};
    // sorted array = 1,2,4,5,7,9
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i <= length-1; i++){
        int lowest, position;
        for (int j = i; j < length -2; j++)
        {
             lowest = arr[j];
             position = j;
            if(arr[j] > arr[j+1]){
                lowest = arr[j+1];
                position = j+1;
            } else {
                lowest = arr[j];
                position = j;
            }
        }
        // swap nos
        int temp = arr[i];
        arr[i] = lowest;
        arr[position] = arr[i];
    
}

    // printf("%d", arr[2]);
    // printf("%d", arr[1]);
    // Output = 4,2

    // printing the array 
    for (int i = 0; i < length; i++)
    {
        printf(" %d , ", arr[i]);
    }
    



    




    return 0;
}