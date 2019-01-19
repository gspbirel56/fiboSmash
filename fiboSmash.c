#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    FILE *output = fopen("fibo_trash.txt", "w");
    int* max = (int*) malloc(sizeof(int));
    size_t maxsize = INT_MAX; // must malloc this as well...put it on the TODO
    max[0] = INT_MAX;
    unsigned int* n = (unsigned int *) malloc(max[0] * sizeof(unsigned int));
    n[0] = 1;
    n[1] = 1;
    printf("1\n1\n");
    for (int i = 2; i < maxsize; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
        printf("%i\n", n[i]);
        fprintf(output, "%i\n", n[i]);
    }
    fclose(output);
    free(n); // I guess I have to be nice somewhere in here

    return 0;
}