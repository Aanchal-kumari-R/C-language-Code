#include<stdio.h>  
  
  int main(){ 
    int i,count = 0;  
    char str[100]="progra mming";   

    printf("Before = %s",str);
   
   for(i= 0;str[i];i++){   //p //r //o//g//..//m
    if(str[i]!=' '){   //true//true//true//true////true
        str[count] = str[i];  //str[0]=str[p]//str[1]=str[r]//2=o//3=g//6=m....
        count++; //1//2//3//4
    }
   }   
   str[count]='\0';  //5=\'0' 

   printf("\n After=%s",str);
  
    return 0;
}