#include "main.h"

char *_strpbrk(char *s, char *accept){
    int i = 0, j = 0;
    char *tmp = NULL;
    for (i = 0; s[i] != '\0'; i++){
        for (j = 0; accept[j] != '\0'; j++){
            if (s[i] == accept[j]){
                tmp = (s + i);
                return tmp;
            }
        }
    }
    return NULL;
}