#include <stdio.h>
#include <string.h>

int first()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for(i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if((c >= '0') && (c <= '9'))
            ++ndigit[c-'0'];
        else if ((c == ' ') || (c == '\n') || (c == '\t'))
            ++nwhite;
        else
            ++nother;
        printf("%s", "Digits: ");
        for (i = 0; i < 10; ++i)
            printf(" %d", ndigit[i]);
        printf(", white spase: %d, other: %d\n",nwhite, nother);
    }
    return(0);
}

void histogram ()
{
    int len;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            printf("\n");
        else if((c != ' ') && (c != '\n'))
            // printf("%d",c);
            printf("#");
    }
    printf("\n");
}

int main()
{
    histogram();
}