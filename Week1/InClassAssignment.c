#include <stdio.h>
#include <stdbool.h>

int main(){    

    char userChar = 'L';
    int userAge = 18;
    float userHeight = 6;
    bool student = true;

    
    
    
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
