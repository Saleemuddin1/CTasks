#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convert(char *number) {
int length = strlen(number);

if (length == 0) {
   fprintf(stderr, "This is an empty string\n");
   return;
   }
   if ((length)>3) {
   fprintf(stderr, "Number is too large\n");
      return;
   }
   char *singleDigits[] = { "zero", "one", "two", "three", "four","five", "six","seven", "eight", "nine"};
   char *tenPlace[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
   char *tenMore[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
   char *tenExPower[] = {"hundred", "thousand"};
   
   if (length == 1) {
      printf("%s\n", singleDigits[*number - '0']);
      return;
   }
   while (*number != '\0') {
   if (length >= 3) {
   	if (*number -'0' != 0) {
            printf("%s\n ", singleDigits[*number - '0']);
            printf("%s\n ", tenExPower[length-3]); 
   }
    --length;
   }
   else {
   	if (*number == '1') {
            int summation = *number - '0' + *(number + 1)- '0';
            printf("%s\n", tenPlace[summation]);
            return;
         }
   else if (*number == '2' && *(number + 1) == '0') {
            printf("Twenty\n");
            return;
         }
   else {
            int j = *number - '0';
            printf("%s ", j? tenMore[j]: "");
            ++number;
            if (*number != '0')
               printf("%s\n ", singleDigits[*number - '0']);
         }
      }
      ++number;
   }
}
int main(void) {
char holder[10];
printf("Please enter the number :\n");  
scanf("%s",holder);
printf("The number in word form is :\n");
convert(holder);
return 0;
}
