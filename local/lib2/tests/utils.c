#include "teastes.h"

void	print_correct(size_t i)
{
	printf("%s%lu.OK%s ", GREEN, i + 1, RESET);
}

void	print_incorrect(size_t i)
{
	printf("%s%lu.KO%s ", RED, i + 1, RESET);
}
