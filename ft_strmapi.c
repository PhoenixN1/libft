/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:47:14 by momellou          #+#    #+#             */
/*   Updated: 2026/10/16 00:06:15 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int len;
    unsigned int i;

    len = 0;
    i = 0;
    if (!s || !f)
        return 0;
    while (s[len])
    {
        len++;
    }
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;
    while (i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

#include <stdio.h>
#include <ctype.h>

char ft_upper(unsigned int i, char c)
{
    (void)i;
    return (char)toupper((unsigned char)c);
}

char ft_shift(unsigned int i, char c)
{
    return (c + i);
}

char ft_lower(unsigned int i, char c)
{
    (void)i;
    return (char)tolower((unsigned char)c);
}

int main(void)
{
    char *result;

    printf("=== Test 1: Uppercase ===\n");
    result = ft_strmapi("hello 1337", ft_upper);
    printf("Result: %s\n", result);
    free(result);

    printf("\n=== Test 2: Shift by index ===\n");
    result = ft_strmapi("abcd", ft_shift);
    printf("Result: %s\n", result);
    free(result);

    printf("\n=== Test 3: Lowercase ===\n");
    result = ft_strmapi("HELLO WORLD", ft_lower);
    printf("Result: %s\n", result);
    free(result);

    printf("\n=== Test 4: Empty string ===\n");
    result = ft_strmapi("", ft_upper);
    printf("Result: \"%s\"\n", result);
    free(result);

    printf("\n=== Test 5: NULL input ===\n");
    result = ft_strmapi(NULL, ft_upper);
    printf("Result: %p\n", (void *)result);

    return (0);
}
