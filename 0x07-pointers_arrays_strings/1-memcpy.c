#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n){
    char *start;
    if (dest == NULL || n == 0){
        return NULL;
    }
    start = dest;

    while(n > 0){
        *dest = *src;
        src++;
        dest++;
        n--;
    }
    return start;
}