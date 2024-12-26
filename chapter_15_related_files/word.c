//
// Created by Baran on 12/23/2024.
//

#include <stdio.h>
#include "word.h"

void read_word(char *word, int len) {
    int ch, pos = 0;

    while ((ch = read_char()) == ' '); // ignore beginning space

    while (ch != ' ' && ch != EOF){
        if (pos < len)
            word[pos++] = ch;
        ch = read_char();
    }
    word[pos] = '\0';
}

int read_char(void){
    int ch = getchar();

    return (ch == '\n' || ch == '\t') ? ' ' : ch; // si ch saut de ligne ou tab => ' ', sinon ch
}