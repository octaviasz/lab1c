// Author: Octavia Szkutnik oas5135@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: Joseph Imperial jri5073@psu.edu
// Collaborator: Mya Romano mlr5819@psu.edu
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.6f° Celsius is equivalent to %.6f° Fahrenheit.", celsius, fahrenheit);

    return 0;
}