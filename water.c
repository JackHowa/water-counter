#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Minutes: ");
    int minutes = get_int();

    /*  multiply by 12 for num of bottles */
    printf("Bottles: %i\n", minutes * 12);
}
