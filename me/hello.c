#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string answer = get_string("what's you name?");
    printf("hello, %s\n", answer);
}
