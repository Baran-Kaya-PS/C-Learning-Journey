//
// Created by Baran on 12/23/2024.
//

#ifndef MEMORY_GESTION_WORD_H
#define MEMORY_GESTION_WORD_H
#endif //MEMORY_GESTION_WORD_H
/*************************************************************************
 * read_word: Reads the next words from the input and stores it in word. *
 * Makes word empty if no word could be read because of EOF.             *
 * Truncate the words if its lenght exceeds len.                         *
 *************************************************************************/
void read_word(char *word, int len);

/*
 * read_char get the input,
 * if we get a '\t' or a '\n' we return ' ' (a space) to justify the input
 */
int read_char(void);