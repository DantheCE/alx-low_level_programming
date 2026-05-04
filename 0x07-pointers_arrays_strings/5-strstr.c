#include "main.h"

char *_strstr(char *haystack, char *needle){
    int i = 0, j = 0;
    for (i = 0; haystack[i] != '\0'; i++){
        for (j = 0; needle[j] != '\0'; j++){
            if (needle[j] == haystack[i]){
                return (needle + j);
            }
            break;
        }
    }
    return NULL;
}