#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void)
{
  int i;
  int arraySize=3;
  char r[arraySize][5];
  int rnum=0;
  for (i=0; i<arraySize;i++){
      rnum=rand()%3+1;
      if (rnum==1){
        strcpy(r[i],"Rock");
        
      }
      else if (rnum==2){
        
        strcpy(r[i],"Paper");
        
      }
      else{
       
        strcpy(r[i],"Scissors");
        
      }
    }
    for (i=0;i<arraySize;i++){
      printf("%s\n",r[i]);
    }
    
}