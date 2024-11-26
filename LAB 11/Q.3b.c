
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *file = fopen(filename, "r");
    FILE *tempFile = fopen("temp.txt", "w");
    
    if (file == NULL || tempFile == NULL) {
        printf("Error: Cannot open file\n");
        return;
    }
    
    char line[10000];
    while (fgets(line, sizeof(line), file) != NULL) {
        char *pos;
        char temp[10000];
        strcpy(temp, line);
        
        while ((pos = strstr(temp, oldWord)) != NULL) {
            memmove(pos + strlen(newWord), pos + strlen(oldWord), 
                    strlen(pos + strlen(oldWord)) + 1);
            
            memcpy(pos, newWord, strlen(newWord));
        }
        
      
        fputs(temp, tempFile);
    }
    
  
    fclose(file);
    fclose(tempFile);
    
    
    remove(filename);
    rename("temp.txt", filename);
}

/*int main() {
    char filename[100];
    char oldWord[100];
    char newWord[100];
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    printf("Enter the Old word to replace: ");
    scanf("%s", oldWord);
    
    printf("Enter the New word: ");
    scanf("%s", newWord);
    
    replaceWordInFile(filename, oldWord, newWord);
    
    printf("Word replacement completed.\n");
    return 0;
}*/
int main() {
    const char *filename = "example.txt";
    const char *oldWord[20];
    printf("Enter the Old word to remove: ");
    scanf("%s",oldWord);
    
    const char *newWord[20];
    printf("Enter the New word to add: ");
    scanf("%s",newWord);
    

    replaceWordInFile(filename, oldWord, newWord);

    return 0;
}
