#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string answer = get_string("What´s your name: ");
  printf("Hello, %s\n", answer);
}


#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string first = get_string("What´s your first name: ");
  string last = get_string("What´s your last name: ");
  printf("Hello, %s %s\n", first, last);
}
