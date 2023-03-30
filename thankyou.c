#include <stdio.h>

typedef struct {
    char* thank; 
    char* you; 
    char* igor; 
    int numStudents; 
} thankYou; 


int main(void){
    thankYou message; 
    message.thank = "Thank "; 
    message.you = "you "; 
    message.igor = "Igor!\n"; 
    message.numStudents = 119; 

    for (int i = 0; i < message.numStudents; i++) {
        printf("%s%s%s", message.thank, message.you, message.igor); 
    }

    return 0; 
}