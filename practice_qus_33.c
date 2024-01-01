#include<stdio.h>  
  
  int Calcpercentage(int science, int math, int sanskrit);
int main(){ 
   int science = 70; 
   int math = 50;  
   int sanskrit = 50;  

   printf("The percentage of all sublject is :%d", Calcpercentage(science,math,sanskrit));

    return 0;
}    
  int Calcpercentage(int science, int math, int sanskrit){ 
     
     return((science+math+sanskrit)/3);
  }

