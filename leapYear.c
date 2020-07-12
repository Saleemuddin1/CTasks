#include <stdio.h>
int main (){
int yearHolder;
printf ("Please Enter a Year: ");
scanf ("%d", &yearHolder);

if (yearHolder % 400 == 0) {
printf("%d is a leap year!\n", yearHolder);
}
else if (yearHolder % 100 == 0) {
printf("%d is not a leap year!\n", yearHolder);
}
else if (yearHolder %4 == 0) {
printf("%d is a leap year!\n", yearHolder);
}
else {
printf("%d is not a leap year!\n", yearHolder);
}
return 0;
} 
