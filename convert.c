#include <stdio.h>

char convert(char c){
    if (c > 64 && c < 91){
        c = c + 32;
    }
    return c;
}

int main(void){
    char text[] = "HelLO, wORLd!\n";

    for (int i = 0; i < 15; i++){
        text[i] = convert( text[i] );
    }

    printf("%s", text);
}