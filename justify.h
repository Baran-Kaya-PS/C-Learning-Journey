//
// Created by Baran on 12/23/2024.
//
/*
 * justify file format a quote to justify it
 * constraints : max word length is 20
 * how it should work ?
 * 1. We get the text
 * 2. If the text exist => the algorithm continues
 * 3. If the text is not justified we continue
 * 4. Apply algorithms to justify the text
 * 5. Return the text
 */
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include "bookrelated.h"
#ifndef MEMORY_GESTION_JUSTIFY_H
#define MEMORY_GESTION_JUSTIFY_H
#endif //MEMORY_GESTION_JUSTIFY_H

char *justify();
/*
 * read_word: Reads the next words from the input and stores it in word.
 * Makes word empty if no word could be read because of EOF.
 * Truncate the words if its lenght exceeds len.
 */
void read_word(char *word, int len);

