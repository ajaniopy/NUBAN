/**
 * @file nuban.c
 * @author
 * @brief Implements nuban.h's interface.
 * @version
 * @date
 *
 * @copyright
 *
 */

#include <stdio.h>
#include <string.h>

#include "nuban.h"

static int char_to_int(const char ch)
{
    return ch - '0';
}

static int calculate_nuban_check_sum(const char *joinedNumber, const int len)
{
    static int multipliers[] = {3, 7, 3, 3, 7, 3, 3, 7, 3, 3, 7, 3};
    int i, value;

    value = 0;

    for (i = 0; i < len; i++)
    {
        value += char_to_int(joinedNumber[i]) * multipliers[i];
    }

    return value;
}

static int calculate_nuban_check_digit(const int check_sum)
{
    int value;
    int check_digit = 0;

    value = 10 - (check_sum % 10);
    check_digit = (value == 10) ? 0 : value;

    return check_digit;
}

bool is_valid_nuban(const char *nuban, const int nuban_len, const int assumedCheckDigit)
{
    const int check_sum = calculate_nuban_check_sum(nuban, nuban_len);
    const int check_digit = calculate_nuban_check_digit(check_sum);
    return (check_digit == assumedCheckDigit) ? true : false;
}

