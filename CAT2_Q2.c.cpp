//Author:Amir Geoffrey Jeremiah
//Reg No:CT101/G/23179/24
//Date:11/7/24
#include <stdio.h>

int main() {
    // Define and initialize a 2D array named 'scores' with 2 rows and 3 columns
    int scores[2][3] = {{65, 92, 85}, {72, 59, 67}};

    // Nested for loops to iterate over each element of the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // New line at the end of each row
    }

    return 0;
}