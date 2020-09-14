/*
 * time_to_sec.c
 *
 *  Created on: Sept 10, 2020
 *      Author: Alex Scalamandre
 */

#include <stdio.h>

/* Convert a time interval specified in hours, minutes and seconds to
 * seconds.
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Preconditions:
 *     0 <= minutes < 60
 *     0 <= seconds < 60 
 * Return:
 *     number of seconds in the interval
 */
unsigned int time_to_sec(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    unsigned int totalSeconds = (hours * 3600) + (minutes * 60) + (seconds);
    return totalSeconds;
}

/* Print a formatted representation of the calculation
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Postcondition:
 *     Function will write the calculation to standard output.
 */
void format_seconds(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    unsigned int totalSeconds = time_to_sec(hours, minutes, seconds);
    printf("%d hours, %d minutes and %d seconds is equal to %d seconds.\n", hours, minutes, seconds, totalSeconds);
}

int main(void) {
    format_seconds(4, 13, 20);
    format_seconds(8, 0, 0);
    format_seconds(1, 30, 0);
}