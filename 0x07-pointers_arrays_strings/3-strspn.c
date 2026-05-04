#include "main.h"


unsigned int _strspn(char *s, char *accept){
    unsigned int i, count, j, status;
    status = 1;
    count = 0;

        for (i = 0; s[i] != '\0'; i++){
            if (!status) break;
            for (j = 0; accept[j] != '\0'; j++){
                if (s[i] == accept[j]){
                    count++;
                    break;
                }
                if (accept[j + 1] == '\0') status = 0;
            }
        }
    return count;
}