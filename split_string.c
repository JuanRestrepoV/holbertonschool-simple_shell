#include "header.h"
/**
* split_string - Function to split a string into an array of words.  
* @str: Input string to be split.
* @num_words: Pointer to store the number of words.
*
* Return: Array of words.
*/
char **split_string(const char *str, int *num_words)
{
	char *word, *str_copy;
	char **word_list;

	str_copy = strdup(str);
	word_list = malloc(MAX_WORDS * sizeof(char*));
	if (word_list == NULL)
	{
		free(str_copy);
		perror("Malloc failed");
		return (NULL);
	}

	word = strtok(str_copy, " \n");

	*num_words = 0;

	while (word != NULL)
	{
		word_list[*num_words] = strdup(word);
		(*num_words)++;
		word = strtok(NULL, " \n");
	}
	word_list[*num_words] = NULL;
	free(str_copy);
	
	return (word_list);
}
