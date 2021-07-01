#include <stdint.h>

void	ft_putchar(char c);

void	rush(int32_t x, int32_t y)
{
	for (int32_t tmp_y = 0; tmp_y < y; tmp_y++)
	{
		for (int32_t tmp_x = 0; tmp_x < x; tmp_x++)
		{
			if (tmp_x == 0 && tmp_y == 0)
			{
				ft_putchar('/');
			}
			else if ((tmp_x == 0 && tmp_y + 1 == y)
					|| (tmp_x + 1 == x && tmp_y == 0))
			{
				ft_putchar('\\');
			}
			else if(tmp_x + 1 == x && tmp_y + 1 == y)
			{
				ft_putchar('/');
			}
			else if ((tmp_x == 0 || tmp_x + 1 == x)
				|| (tmp_y == 0 || tmp_y + 1 == y))
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
	}
}