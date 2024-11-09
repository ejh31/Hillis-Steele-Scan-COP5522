#include <stdio.h>
#include <stdlib.h>

void init_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = 0;
}

void print_array_elements(int *arr, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
        printf(" %i ", arr[i]);
    printf("]");
}

void compute_inclusive_scan(int *input, int *output, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += input[i];
        output[i] = sum;
    }
}

int main(int argc, char **argv)
{

    int input[] = {1, 2, 3};
    int size = sizeof(input) / sizeof(int);
    int *output = malloc(sizeof(input) * sizeof(int));

    init_array(output, size);

    compute_inclusive_scan(input, output, size);

    printf("Input Array: \t");
    print_array_elements(input, size);
    printf("\n");
    printf("Output Array: \t");
    print_array_elements(output, size);

    free(output);

    return 0;
}