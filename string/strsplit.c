#include <stdio.h>
#include <string.h>

    void splitString(char* str, char columns[][100], char* delimiter) {
    char* token = strtok(str, delimiter);
    int i = 0;

    for(token; token != NULL; token = strtok(NULL, delimiter)) {
        strcpy(columns[i], token);
        i++;
    }
}

