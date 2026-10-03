#include <stdio.h>

int main()
{
    float price = 49.75f;
    float *ptr = &price;

    printf("Original price: %.2f\n", *ptr);

    *ptr = 59.50f;

    printf("Updated price: %.2f\n", price);

    return 0;
}
