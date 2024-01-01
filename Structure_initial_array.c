#include<stdio.h>  

  
  struct Student{ 
    int roll;  
    float cgpa;  
    char name[100];
  };

int main(){   
    struct Student s1={1,70.56,"Aanchal"};    

    printf("Studnet roll = %d\n",s1.roll);  
    printf("Student cgpa = %.2f\n",s1.cgpa);  
    printf("Student name = %s\n",s1.name);


    return 0;
}