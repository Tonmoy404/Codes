#include<stdio.h>

int main(){

    printf("Input the file name to be opened: ");
    char inputFileName[100];
    scanf("%s", inputFileName);

    FILE *readFile;
    readFile =fopen(inputFileName,"r");

    int lineCounter = 0x0;
    char texts[1000];
    if (!readFile) return 1;

    printf("The content of the file %s are : \n", inputFileName);
    while (fgets(texts,1000, readFile)!=NULL){
        printf("%s\n",texts);
        lineCounter++;
    }
    printf("The lines in the file are: %d\n", lineCounter);
    fclose(readFile);

    return 0;
}
