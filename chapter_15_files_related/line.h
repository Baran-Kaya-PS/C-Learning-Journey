//
// Created by Baran on 12/23/2024.
//

#ifndef MEMORY_GESTION_LINE_H
#define MEMORY_GESTION_LINE_H


/*
 * clearline : Clears the current line
 */
void clearline(void);

/*
 * add_word: Adds word to the end of the current line.
 *           If this is not the first work on the line :
 *              put one space before the word
 */
void addword(const char *word);

/*
 * space_remaining: Returns the number of caracters left in the current line.
 */
int space_remaning(void);

/*
 * write_line : Writes the current line with justification
 */
void write_line(void);

/*
 * flush_line : Writes the current line without justification.
 * If the line is empty, does nothing
 */
void flush_line(void);
#endif //MEMORY_GESTION_LINE_H
