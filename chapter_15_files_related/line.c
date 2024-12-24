//
// Created by Baran on 12/23/2024.
//
#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60
int line_len = 0;
int num_words = 0;
char line[MAX_LINE_LEN+1];

void clearline(){
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}
void addword(const char *word){
    if (num_words > 0){
        line[line_len] = ' ';
        line[line_len+1] = '\0';
        line_len++;
    }
}