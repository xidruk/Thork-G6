#include "zortq9.h"

void printer(int c)
{
    write(1, &c, 1);
}


void num_to_char(DTrok num)
{
    DTrok res;

    res = 0;
    if (num == 0)
        printer('0');
    
}


int main(void)
{
    num_to_char(0);
    return (0);
}