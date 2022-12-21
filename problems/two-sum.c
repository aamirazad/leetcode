#include </home/aamir/cs50.c>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many numbers? ");
    int input[n];
    for (int i = 0; i < n ; i++)
    {
        input[i] = get_int("Input %i: ", i);
    }
}
