// Author: Octavia Szkutnik oas5135@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: Joseph Imperial jri5073@psu.edu
// Collaborator: Mya Romano mlr5819@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
    char *ctemp = readline("Enter temperature in celsius: ");
    double c = atof(ctemp);
    double f =
    printf("%f° in celsius is equivalent to %f° Fahrenheit.\n",c, f);

    return 0;
}