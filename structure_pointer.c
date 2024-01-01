#include<stdio.h>  
  
  struct Student{ 
    int roll;  
    float cgpa; 
    char name[100];
  };

int main(){   

    struct Student s1 = {1,79.6,"Aanchal"};  
    struct Student *ptr = &s1;   

    printf("Student roll = %d\n",(*ptr).roll);    /*passing with pointer*/
    printf("Student cgpa = %.2f\n",(*ptr).cgpa);   
    printf("Studnet name = %s\n",(*ptr).name);
       
    /* passing with arrow*/   

    printf("Studnet roll = %d\n",ptr->roll);  
    printf("Student  cgpa = %.2f\n",ptr->cgpa);  
    printf("Studnet name = %s\n",ptr->name);

    return 0;
}