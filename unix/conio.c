#include <stdio.h>
#include <unistd.h>
#include <curses.h>

int fputchar(int c)
{
  if (c < 0)
    return 0;
  return fputc(c, stdout);
}

