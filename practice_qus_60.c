#include<stdio.h>  

   typedef struct bankAccount{ 
    int accountNo; 
    char  name[100];
   } acc;

int main(){ 
        acc account1 = {123,"Aanchal"};  
        acc account2 = {345,"Aman"};  
        acc account3 = {567,"Anshu"};      

        printf("Account no 1 = %d\n",account1.accountNo);  
        printf("Account name 1 = %d\n",account1.name);   

        printf("Account no 2 = %d\n",account2.accountNo);  
        printf("Account name 2 = %d\n",account2.name);   

        printf("Account no 3 = %d\n",account3.accountNo);  
        printf("Account name 3 = %d\n",account3.name);



      return 0;
}