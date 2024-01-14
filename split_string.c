#include "header.h"
/**
* splitString - Function to split a string into an array of words.
* @str: Input string to be split.
* @numWords: Pointer to store the number of words.
*
* Return: Array of words.
*/
char **split_string(char *str, int *num_words)
{
	char* word, str_copy;
	char** word_list;

	str_copy = strdup(str);

	word = strtok(str_copy, " \n");

	*num_words = 0;

	while (word != NULL)
	{
		word_list[*num_words] = strdup(word);
		(*num_words)++;
		word = strtok(NULL, " \n")
	}
	word_list[num_words] = NULL;
	free(str_copy);
	
	return (word_list);
}
