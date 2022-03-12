#include <stdio.h>
#include "ft_printf.h"


int main(void)
{
    int i, d;
    unsigned int basex, baseX, baseu;
	char *s = NULL;
    void *p = (int *)0;

    i = 0; d = -0;
    baseu = 4294967295;
    basex = 0;
    baseX = 479;

           printf("Original :%%: :%c: [%+d] [%i] :%p:\n", 'a', d, i, p);
        ft_printf("Mine     :%%: :%c: [%+d] [%i] :%p:\n", 'a', d, i, p);
            write(1, "\n\n", 2);
           printf("Original :u%u: :x%x: [X%X] [s%s]\n", baseu, basex, baseX, s);
        ft_printf("Original :u%u: :x%x: [X%X] [s%s]\n", baseu, basex, baseX, s);       
}
