#include <stdio.h>
int main() {
    FILE *fp;
    char data[100];
    
    // Writing to file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "Hello, File handling in C!\n");
    fclose(fp);
    
    // Reading from file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    while (fgets(data, sizeof(data), fp) != NULL)
        printf("%s", data);
    fclose(fp);
    return 0;
}
