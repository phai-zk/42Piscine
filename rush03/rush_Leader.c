#include <unistd.h>

void ft_putchr(char c)
{
    write(1, &c, 1);
}
void    write_x(int x, char start, char mid, char end)
{
    int index_x;
    
    index_x = 1;
    while (index_x <= x)
    {
        if (index_x == 1)
        {
            write(1, &start, 1);
        }
        else if (index_x == x)
        {
            write(1, &end, 1);
        }
        else
            write(1, &mid, 1);
        index_x++;
    }
}
void rush(int x, int y)
{
    int index_y;
    
    index_y = 1;
    while (index_y <= y)
    {
        if (index_y == 1 || index_y == y)
            write_x(x,'A','B','C');
        else
            write_x(x,'B',' ','B');
        index_y++;
        write(1, "\n", 1);
    }
}

int main(void)
{
	rush(1,1);
	rush(2,2);
	return 0;
}
