  #include<stdio.h>  
  
  struct Student{ 

    int roll;  
    char name[100]; 
    float cgpa;
  };  

  void printinfo(struct Student s1);

int main(){   

    struct Student s1= {1,"Aanchal",78.5};  

    printinfo(s1);

    return 0;
}   

void printinfo(struct Student s1){ 
     
     printf("Student Information:\n");     
     printf("Student roll = %d\n",s1.roll);  
     printf("Student name = %s\n",s1.name);  
     printf("Student cgpa = %.2f\n",s1.cgpa);
}