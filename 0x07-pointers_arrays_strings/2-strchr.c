#include "main.h"

char *_strchr(char *s, char c){
    if (s == NULL){
        return NULL;
    }

    while(1){
        if (*s == c){
            return s;
        }
        if (*s == '\0'){
            break;
        }
        s++;
    }
    return NULL;
}
