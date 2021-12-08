#include "main.h"
/**
  * INThandler - checks if user types Ctrl + C
  * @sig: catches the input as a signal
  * Return: void
  */
void INThandler(int sig)
{
	char c;
	char str[] = "\nYou hit Ctrl+C.\nDo you really want to quit? [y/n] ";

	signal(sig, SIG_IGN);
	write(1, str, sizeof(str));
	c = getchar();
	if (c == 'y' || c == 'Y')
		exit(0);
	else
		signal(SIGINT, INThandler);
	getchar();
}
