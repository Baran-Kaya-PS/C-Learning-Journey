//
// Created by Baran on 12/23/2024.
//

#ifndef MEMORY_GESTION_WORD_H
#define MEMORY_GESTION_WORD_H
#include "stdio.h"
#endif //MEMORY_GESTION_WORD_H
/*************************************************************************
 * read_word: Reads the next words from the input and stores it in word. *
 * Makes word empty if no word could be read because of EOF.             *
 * Truncate the words if its lenght exceeds len.                         *
 *************************************************************************/
void read_word(char *word, int len);

/*
 * read_char
 */
char read_char(void);