#include "main.h"
/**
  * INThandler - checks if user types Ctrl + C
  * @sig: catches the input as a signal
  * Return: void
  */
void INThandler(int sig)
{
	char  c;

	signal(sig, SIG_IGN);
	printf("\nYou hit Ctrl+C.\nDo you really want to quit? [y/n] ");
	c = getchar();
	if (c == 'y' || c == 'Y')
		exit(0);
	else
		signal(SIGINT, INThandler);
	getchar();
}
