#include <stdio.h>
#define MAXLINE 10

int f_getline(char s[]);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = f_getline(line)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
        if (max > 0)
            printf("%s", longest);
        
    return 0;
} 

int f_getline(char s[])
{
    int c, i, j, n;
    j = 0;
    while ((n=getchar()) != EOF && n != '\n')
    {
        ++j;
    }
    
    for (i = 0; i < j-1 && (c=getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    
}
