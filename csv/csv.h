#ifndef CSV_H
#define CSV_H

void splitCsvRows(char* csvFile, char rows[][952], int qtdRows);
void csvToMatrix(char* csvFile, char matrix[][20][100], int qtdRows, int qtdColumns, char* delimiter);

#endif

