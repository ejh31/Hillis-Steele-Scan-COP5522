#include <stdio.h>

int main(int argc, char **argv)
{

    int arr[] = {1, 2, 3};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("element %i: %i\n", i, arr[i]);
    }

    return 0;
}