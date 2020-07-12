#include <stdio.h>
#include <string.h>

int main () {
char numHolder [10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char enterVals[100], wordHolder[10], *ptr, *tmp;
int k, vals =0, length;

printf ("Please Enter the Number in Word Format:\n");
fgets(enterVals, 100, stdin);
enterVals [strlen(enterVals)-1] = '\0';
tmp = enterVals;
while (1){
ptr = strchr(tmp, ' ');
if (ptr != NULL) {
length = ptr-tmp;
strncpy (wordHolder, tmp, length);
wordHolder [length] = '\0';
tmp = ptr +1;
}
else{
length = strlen(tmp);
strncpy (wordHolder, tmp, length);
wordHolder[length]= '\0';
}
for (k=0;k<10;k++) {
if (strcasecmp(wordHolder,numHolder [k])==0) {
vals = (vals *10) +k;
break;
}
}
if (!ptr)
break;
}
printf("Value in Number Form: %d\n", vals);
return 0;
}
