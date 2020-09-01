// Author: Octavia Szkutnik oas5135@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: Joseph Imperial jri5073@psu.edu
// Collaborator: Mya Romano mlr5819@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void)
{
    char *temperature = readline("Enter temperature in celsius: ");
    double celsius = atof(temperature);
    double fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit.", celsius, fahrenheit);

    return 0;
}