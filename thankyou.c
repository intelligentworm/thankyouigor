#include <stdio.h>

#include <stdio.h>

typedef struct {
    char* str;
    int numStudents; 
} thankYou; 

int main(void){
    thankYou message; 
    message.str = "Thank you Igor!"; 
    message.numStudents = 119; 

    for (int i = 0; i < message.numStudents; i++) {
        printf("%s\n", message.str); 
    }

    return 0; 
}
