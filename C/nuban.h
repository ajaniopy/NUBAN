/**
 * @file nuban.h
 * @author 
 * @brief Defines a new interface for validating nuban
 * @version 0.1
 * @date 
 * 
 * @copyright 
 * 
 */

#ifndef __NUBAN_INCLUDED__
#define __NUBAN_INCLUDED__

#include <stdbool.h>

#define NUBAN_LEN 12

bool is_valid_nuban(const char *nuban, const int nuban_len, const int assumedCheckDigit);

#endif 
