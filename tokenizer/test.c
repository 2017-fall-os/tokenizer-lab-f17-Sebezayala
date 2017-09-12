#include <unistd.h>/*For read and write*/
#include <stdio.h>/*For printf and fgets*/
#include <stdlib.h>/*For free*/
#include "mytoc.h"
#include "utils.h"

#define BUFLEN 1024

int main(){
    char buf[BUFLEN];
    char **tokenVec;
    
    for(;;){
        write(1,"$ ",2);
        fgets(buf,BUFLEN,stdin);
        if(timeToExit(buf)){//exit the program if the users enters the word exit.
            return 0;
        }
        tokenVec= mytoc(buf,' ');
        int i=0;
        if(tokenVec[0]){
            while(tokenVec[i]){//Print the tokens one by one.
                printf("Token %d: %s\n",i+1 ,tokenVec[i]);
                i++;
            }
        }else{
            printf("No tokens found\n");
        }
        clean(buf);//Clean buf so that there are no residual chars.
        free(tokenVec);
    }
}
