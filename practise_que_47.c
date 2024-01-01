#include<stdio.h> 
 #include<stdio.h>    
   
   void printString(char arr[]);
     int main(){ 
       char firstName[] = "Aanchal ";                      //create a string firstname and secondname to store details 
       char secondName[] = "Singh";          // of user and print all the character using a loop

         printf(firstName);  
         printf(secondName); 

       return 0;
     }   
     void printString(char arr[]){ 
      for(int i = 0; arr[i] !='/0';i++){ 
        printf("%d",arr[i]);
      }
     }
