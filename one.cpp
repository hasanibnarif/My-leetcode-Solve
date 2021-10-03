
#include<stdio.h>

// count the number of 1 in an array

int count1(int *a, int n){
    int count = 0; 
    for(int i = 0; i < n; i++){
        count += a[i] & 1;
    }
    return count;
}




int main() {

    





    return 0;
}