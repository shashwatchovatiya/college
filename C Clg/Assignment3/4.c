#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop for printing all rows 
    for (int i = 0; i < rows; i++) { 
  
        // first inner loop for printing white spaces 
        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
  
        // second inner loop for printing star * 
        for (int k = 0; k < rows - i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
  
    return 0; 
}


// #include <stdio.h>

// int main() {

//   int rows = 5;

//   // Iterate over each row
//   for (int i = 1; i <= rows; i++) {

//     // Print spaces for the current row
//     for (int j = 1; j <= i - 1; j++) {
//       printf(" ");
//     }

//     // Print stars for the current row
//     for (int j = 1; j <= rows - i + 1; j++) {
//       printf("*");
//     }

//     // Move to the next line
//     printf("\n");
//   }

//   return 0;
// }