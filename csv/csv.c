#include <stdio.h>
#include <string.h>
#include "../string/strsplit.h"

void splitCsvRows(char* csvFile, char rows[][952], int qtdRows) {
    char s[952]; 
    FILE* file;

    file = fopen(csvFile, "r");

    for(int i = 0; i < qtdRows; i++) {
        fscanf(file, "%[^\n]\n", s);
        strcpy(rows[i], s);
    }
    fclose(file);
}

void csvToMatrix(char* csvFile, char matrix[][20][100], int qtdRows, int qtdColumns, char* delimiter) {
    char rows[qtdRows][952];
    
    splitCsvRows(csvFile, rows, qtdRows);
    for(int i = 0; i < qtdRows; i++) {
        splitString(rows[i], matrix[i], delimiter);
    }
}

