#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20] = {"anish", "ankit", "anand", "abhishek", "rajpal"};
    int i;
    printf("strings are -->\n");
    for (i = 0; i < 5; i++)
        printf("string [%d] = %s\n", i + 1, str[i]);
}
