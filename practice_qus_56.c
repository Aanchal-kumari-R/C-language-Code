#include<stdio.h>   
    
    struct Address{ 
        int house_no;  
        int block_no;    
       char city[100];  
       char state[100];
    };  
     
   
   void printAddress(struct Address add);
   int main(){ 
    
    struct Address add[5];  

    printf("Enter Address of 1 person:"); 
    scanf("%d",&add[0].house_no); 
    scanf("%d",&add[0].block_no);  
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);
  
      printf("Enter Address of 1 person:"); 
    scanf("%d",&add[1].house_no); 
    scanf("%d",&add[1].block_no);  
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);  

    printf("Enter Address of 1 person:"); 
    scanf("%d",&add[2].house_no); 
    scanf("%d",&add[2].block_no);  
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);  

    printf("Enter Address of 1 person:"); 
    scanf("%d",&add[3].house_no); 
    scanf("%d",&add[3].block_no);  
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);  

    printf("Enter Address of 1 person:"); 
    scanf("%d",&add[4].house_no); 
    scanf("%d",&add[4].block_no);  
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);
      
      printAddress(add[0]);
      printAddress(add[1]);
      printAddress(add[2]);
      printAddress(add[3]);
      printAddress(add[4]);


    return 0;
   }
   void printAddress(struct Address add){ 
    printf("The address is: %d %d %s %s",add.house_no,add.block_no,add.city,add.state);
   }