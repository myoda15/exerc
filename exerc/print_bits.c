#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}


unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 8;

	while (i-- > 0)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return res;
}




unsigned char swap_bits(unsigned char octect)
{
	return ((octect >> 4) | (octect << 4));
}