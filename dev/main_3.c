#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	char *str = "When %s invoke GCC, it %s and linking. The %coverall options%c allow you to stop this process at an intermediate stage. %s the -c option says not to run the linker. %s preprocessor and %cthers the compiler itself%d\n";
	char *tmp = "Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the";
	char *tmp2 = "options control the assembler and linker; most of these are not documented here, since you rarely";

	len = _printf(str, "you", "normally does preprocessing, compilation, assembly", '"', '"', "For example,", tmp, 'o', tmp2, 8);
	printf("\n\nYOURS ^ REAL v\n\n");
	len2 = printf(str, "you", "normally does preprocessing, compilation, assembly", '"', '"', "For example,", tmp, 'o', tmp2, 8);
	if (len != len2)
	{
		printf("Lengths differ., yours: %d, real: %d\n", len, len2);
		return (1);
	}
	return (0);
}
