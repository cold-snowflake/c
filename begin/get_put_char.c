#include <stdio.h>
#include <unistd.h>

// C program to count spaces in a file
void count_space() 
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if(c == ' ')
            ++nl;
    if (nl == 0)
        printf("This file has zero spases\n");
    else if (nl == 1)
        printf("This file contans only %d spase\n", nl);
    else if (nl > 1)
        printf("This file contans %d spases\n", nl);
}

// C program to count tab in a file
void count_tab() 
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if(c == '\t')
            ++nl;
    if (nl == 0)
        printf("This file has zero tabs\n");
    else if (nl == 1)
        printf("This file contans only %d tab\n", nl);
    else if (nl > 1)
        printf("This file contans %d tabs\n", nl);
}

// C program to count end of str in a file
void count_end_str() 
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
    if (nl == 0)
        printf("This file has zero ends of str\n");
    else if (nl == 1)
        printf("This file contans only %d end of str\n", nl);
    else if (nl > 1)
        printf("This file contans %d ends of str\n", nl);
}


void control_space()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        else
        {
            putchar(c);
            while ((c = getchar()) == ' ');
                ;
            ungetc(c, stdin);
        }
    }
}
int main()
{
    control_space();
}
