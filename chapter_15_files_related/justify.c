//
// Created by Baran on 12/23/2024.
//
#include "justify.h"
char *justify(){
    char word[MAX_WORD_LEN+2];
    int word_len;

    clearline();
    for (;;){
        read_word(word,MAX_WORD_LEN+1);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len > MAX_WORD_LEN){
            word[MAX_WORD_LEN] = '*';
        }
        if (word_len+1 > space_remaning()){
            write_line();
            clearline();
        }
        addword(word);
    }

