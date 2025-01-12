#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define FILENAME (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

void Problem1();
void Problem2();
void Problem3();

int main() {
    Problem1();
    Problem2();
    Problem3();
}


void Problem1(){
    FILE *fp;
    fp = fopen("file.c", "w");  // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char str[100];  // Allocate memory for the string
    printf("Hello user, you are now in %s file\n",__FILE__);
    printf("What do you want to print in file.c? ");
    fgets(str, sizeof(str), stdin);  // Use fgets to read input safely

    // Remove newline character from fgets if it exists
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Write a simple C program to the file
    fprintf(fp, "#include <stdio.h>\n\nint main() {\n\tprintf(\"%s\\n\");\n\treturn 0;\n}\n", str);

    fclose(fp);  // Close the file
    printf("Program written to file.c successfully.\n");

    return 0;
}

void Problem2(){
    //printf("Hello user, you are now in %s file\n", FILENAME);

    // __FILE__ gives the full path of the current file
    const char *full_path = __FILE__;

    // Find the last occurrence of '/' or '\\' to get the file name
    const char *file_name = strrchr(full_path, '/');
    if (file_name == NULL) {
        file_name = strrchr(full_path, '\\');  // For Windows paths
    }

    // If a slash is found, move to the next character (the file name)
    if (file_name != NULL) {
        file_name++;
    } else {
        file_name = full_path;  // If no slash is found, use the full path
    }

    // Print the file name
    printf("Hello user, you are now in %s file\n", file_name);

    return 0;
}

void Problem3(){
    FILE *fp = fopen("example.txt", "r");

    if (fp == NULL) {
        puts("Error opening file!");
        return 1;
    }

    // Attempt to write after the file is closed (error will occur)
    fprintf(fp, "This will fail!");

    if (ferror(fp)) {
        puts("Error detected. Resetting error flag...");
        clearerr(fp);  // Reset the error flag

        // You can now try to reopen the file and write again
        fp = fopen("example.txt", "w");
        if (fp != NULL) {
            fprintf(fp, "Write operation successful after error reset.\n");
            fclose(fp);
        }
    }

    puts("Done");
}