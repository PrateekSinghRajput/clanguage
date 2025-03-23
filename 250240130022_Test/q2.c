//q2.write the c program to find if the is any subarray with sum equal to 0

#include <stdio.h>

int subarray(int arr[], int n);//declear the int function

int main(){  //main function

    int arr[] = {-5, 5, 1, 1, 2}; //array declear 
    int n = sizeof(arr) / sizeof(arr[0]);//sote the data in variable n

    if(subarray(arr, n)){ //in if conduction call the subarray function is is present the if conduction is true
        printf("yes subarray is present \n");

    }
    else{ //is conduction is not true the come to else and display not present
        printf("No, such subarray does not present.\n");

    }

    return 0;
}

int subarray(int arr[], int n) { //function declear subarray 
    for (int i = 0; i < n;i++){ //for loop run on 0 to n 
        int sum = 0;
        for (int j = i; j < n;j++){ 
            sum += arr[j];
            if (sum==0){
                return 1;
            }
        }
    }
    return 0;
}