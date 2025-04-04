
/**
 * get_bit- get the bit at the designated index
 * @n: the number we want to check
 * @index: the index to find the bit from
 * Return: The bit we have found or -1 if the index is out of boudns
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
