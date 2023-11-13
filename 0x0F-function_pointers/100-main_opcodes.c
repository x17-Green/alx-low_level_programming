#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int val = 0;

	if (argc != 2 || (val = atoi(argv[1])) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ud_init(&ud_obj);
	ud_set_input_buffer(&ud_obj, argv[1], val);
	ud_set_mode(&ud_obj, 64);
	ud_set_syntax(&ud_obj, UD_SYN_INTEL);

	while (ud_disassemble(&ud_obj))
	{
		printf("\t%s\n", ud_insn_hex(&ud_obj));
	}

	return (0);
}
