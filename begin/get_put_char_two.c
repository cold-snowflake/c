#include <stdio.h>

#define IN 1
#define OUT 0

void count_s_n_t()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == '\n')
            nl++;
        if((c == ' ') || (c == '\n') || (c == '\t'))
            state = OUT;
        if (state == OUT)
        {
            state = IN;
            nw++;
        }
           
    }
    printf("%d %d %d\n", nl, nw, nc);
}

void print_words()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        state = IN;
        if((c == ' '))
            state = OUT;
        if (state == OUT)
        {
            state = IN;
            while ((c = getchar()) == ' ');
                ;
            ungetc(c, stdin);
            putchar('\n');
        }
        putchar(c);
 
    }
    
}

int main()
{
    print_words();
}