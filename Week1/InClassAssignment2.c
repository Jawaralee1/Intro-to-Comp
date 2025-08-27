#include <stdio.h>
#include <stdbool.h>

int main(){    

    char userChar;
    int userAge;
    float userHeight;
    bool student;

    
    printf("What is the first letter of your last name\n");
    scanf("  %c", &userChar);
    
    printf("Enter your Height\n");
    scanf("%f", &userHeight);
    printf("Are you a student?\n");
    scanf("%d", &student);
    printf("Enter your age\n");
    scanf("%d", &userAge);

    
    
    printf("The first letter of my last name is %c\n", userChar);
    printf("I am %d years old\n", userAge);
    printf("I am %.02f feet tall\n", userHeight);
    
    if(student == true){
        printf("I am a student\n");
    }
    else{
        printf("I am not a student\n");
    }

    return 0;

}
