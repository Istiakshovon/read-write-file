#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char line[255];
    
//    w used to write whole file. It means old text will be deleted.
//    a used to write where I left off
//    r used to read files
//    FILE * fpointer = fopen("employees.txt", "w");
//    FILE * fpointer = fopen("employees.txt", "a");
//    FILE * fpointer = fopen("employees.txt", "r");
    FILE * fpointer = fopen("employees.txt", "war");
    
//    to edit file
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    
//    to read files.
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);
    
    
    
    fclose(fpointer);
    
    return (EXIT_SUCCESS);
}

