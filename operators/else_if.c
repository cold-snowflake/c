#include <stdio.h>

int binsearch (int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else 
            return mid;
    }
    return -1;
}

int main()
{
    int x = 3;
    int v[5] = {1, 2, 3, 4};
    int n = 4;

    printf("%d,\n", binsearch(x, v, n));
}