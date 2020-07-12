#include <stdio.h>
#include <string.h>
int main () {
char numHolder [10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char numHolders [10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char enterVals[100],wordHolder[10],*ptr2,*tmp2; 
char enterSVals[10],words[10], *ptr,*tmp; 
int k,j,mul, vals =0,vales =0, length, lengthtwo;
printf ("Please Enter the First Number in Word Format:\n");
fgets(enterVals, 100, stdin);
enterVals [strlen(enterVals)-1] = '\0';
tmp2 = enterVals;
printf ("Please Enter the Second Number in Word Format:\n");
fgets(enterSVals, 100, stdin);
enterSVals [strlen(enterSVals)-1] = '\0';
tmp = enterSVals;

while (1){
ptr2 = strchr(tmp2, ' ');
if (ptr2 != NULL) {
length = ptr2-tmp2;
strncpy (wordHolder, tmp2, length);
wordHolder [length] = '\0';
tmp2 = ptr2 +1;
}

else{
length = strlen(tmp2);
strncpy (wordHolder, tmp2, length);
wordHolder[length]= '\0';
}
for (k=0;k<10;k++) {
if (strcasecmp(wordHolder,numHolder [k])==0) {
vals = (vals *10) +k;
break;
}
}
if (!ptr2)
break;
}

while (1){
ptr = strchr(tmp, ' ');
if (ptr != NULL) {
lengthtwo = ptr-tmp;
strncpy (words, tmp, lengthtwo);
words [lengthtwo] = '\0';
tmp = ptr +1;
}
else{
lengthtwo = strlen(tmp);
strncpy (words, tmp, lengthtwo);
words[lengthtwo]= '\0';
}
for (j=0;j<10;j++) {
if (strcasecmp(words,numHolders [j])==0) {
vales = (vales *10) +j;
break;
}
}
if (!ptr)
break;
}
printf("The numbers entered are %d and %d\n",vals, vales);
mul = vals * vales;
printf("The product is: %d\n", mul);
return 0;
}

