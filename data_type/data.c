#include <stdio.h>
#include <limits.h>
 
 //ex 1

void data_type ()
{
  printf("Size of Char %d\n", CHAR_BIT);
  printf("Size of Char Max %d\n", CHAR_MAX);
  printf("Size of Char Min %d\n", CHAR_MIN);
  printf("Size of int min %d\n", INT_MIN);
  printf("Size of int max %d\n", INT_MAX);
  printf("Size of long min %ld\n", LONG_MIN);      
  printf("Size of long max %ld\n", LONG_MAX);    
  printf("Size of short min %d\n", SHRT_MIN);
  printf("Size of short max %d\n", SHRT_MAX);
  printf("Size of unsigned char %u\n", UCHAR_MAX);  
  printf("Size of unsigned long %lu\n", ULONG_MAX); 
  printf("Size of unsigned int %u\n", UINT_MAX);    
  printf("Size of unsigned short %u\n", USHRT_MAX);
 
}

//ex 2

int logical_operators(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    printf("%d", logical_operators("efuhegf", 9));
}
