#include "main.h"
/**
* shell_reset - a function that frees and set to NULL variables
*@input: variable
*@token_list: variable
*/
void shell_reset(char **input, char ***token_list)
{
	free(*input);
	free(*token_list);
	*input = NULL;
	*token_list = NULL;
}
