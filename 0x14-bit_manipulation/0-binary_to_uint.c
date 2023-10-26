#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary is converted unusigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int fix;
        unsigned int david = 0;

        if (!b)
                return (0);
        for (fix = 0; b[fix]; fix++)
        {
                if (b[fix] < '0' || b[fix] > '1')
                        return (0);
                venee = 2 * venee + (b[fix] - '0');
        }
        return (venee);
}
