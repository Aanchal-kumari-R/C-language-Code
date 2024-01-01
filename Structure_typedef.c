#include<stdio.h> 
  
  typedef struct Student{ 

    int roll; 
    float cgpa;  
    char name[100];
  } stu;
 

int main(){ 
  
  stu s1; 
  s1.roll = 1;  
  s1.cgpa = 78.76;  
 // s1.name = "Aanchal";      
   strcpy(s1.name,"Aanchal");

  printf("Student roll = %d\n",s1.roll);  
  printf("Student cgpa = %.2f\n",s1.cgpa);  
  printf("Student name = %s\n",s1.name); 


    return 0;
}