//
// Created by Baran on 12/23/2024.
//

#include "word.h"

void read_word(char *word, int len) {}
int read_char(void){
    int ch = getchar();

    if (ch == '\n' || ch == '\t'){
        return ' ';
    }

    return ch;
}