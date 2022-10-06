#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
//To check if the entered year gives remainder 0 by 400,100
if (year % 400 == 0) {
printf("%d is a leap year.", year);
}
else if (year % 100 == 0) {
printf("%d is not a leap year.", year);
}
else if (year % 4 == 0) {
printf("%d is a leap year.", year);
}
else {
printf("%d is not a leap year.", year);
}
return 0;
}