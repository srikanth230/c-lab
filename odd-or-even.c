#include <stdio.h>
int main() { 
 int number; 
 printf("Enter an integer: "); 
 //Check remainder = 0 if num div by 2
 scanf("%d", &number); 
 if (number%2 == 0) { 
 printf("%d is an even integer.",number); 
 } 
 else { 
 printf("%d is an odd integer.",number); 
 } 
 return 0; 
}