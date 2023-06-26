#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: a string.
 * Return:If there are no numbers in the string, the function must return 0.
 * else return the int.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int digit;
    int max_div_10 = 214748364;

    while (*s) {
        if (*s == '-') {
            sign = -1;
        } else if (*s == '+') {
            sign = 1;
        } else if (*s >= '0' && *s <= '9') {
            digit = *s - '0';
            if (result > max_div_10 || (result == max_div_10 && digit > 7)) {
                return sign == -1 ? -2147483648 : 2147483647;
            }
            result = result * 10 + digit;
        } else {
            break;
        }
        s++;
    }

    return result * sign;
}
