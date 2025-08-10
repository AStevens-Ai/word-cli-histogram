#include <stdio.h>

#define MAX_WORD_LENGTH 10

int main(int argc, char ** argv){
    int word_counts[MAX_WORD_LENGTH] = {0};
  
    if (argc > 2) {  
        int i = 1;
        for(;i <= argc - 1; i++) {
            int j = 0;
            int count = 0;
            char* word = argv[i];
            while(word[j] != '\0') {
                count++;
                j++;
            }
            if (count > 0 && count <= MAX_WORD_LENGTH) {
                word_counts[count -1]++;
            }
        }
        for(int number = 0; number <= 9; number++) {
           printf("count %d: ", number + 1);
           for(int count= 0; count < word_counts[number]; count++){
            printf("*");
           }
           printf("\n");
        }
        
    }
}