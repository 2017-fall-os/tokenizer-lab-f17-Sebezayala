#include <stdlib.h>/* For size_t*/

//Function that clears a string.
void clean(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        str[i] = '\0';
        i++;
    }
}

//Function that calculates the length of a string.
int strLength(char *inStr){
  char *pStr;
  size_t len;
  for (pStr = inStr; *pStr; pStr++);
  len = pStr - inStr;
  return len;
}

//Function that returns true if the given word is the word exit and only the word exit.
int timeToExit(char *var){
    int result=1;
    char *word="exit";
    if (strLength(var)!=5){
        result=0;
    }else{
        for(int i=0;i<4;i++){
            if(var[i]!=word[i]){
                result=0;
            }
        }
    }
    return result;
}
