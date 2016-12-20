#include <stdio.h>
 
int convert(int);
 
int main()
{
    int dec, bin;
 
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
 
    return 0;
}
 
int convert(int dec)
{
    return (dec == 0) ? 0 : (dec % 2 + 10 * convert(dec / 2));
}
