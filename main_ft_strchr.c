
char    *ft_strchr(const char *s, int c);

#include <string.h>
#include <stdio.h>

int main(void)
{
    char *result;
    char s[] = "tripouille";
    result = ft_strchr(s, 't' + 256);
    printf("%s\n", result);
}
