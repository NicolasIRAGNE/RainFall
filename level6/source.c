void n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void m()
{
	puts("Nope");
}

int	main(int ac, char **av)
{
	char *a = malloc(64);
	void (*b)(void) = malloc(4);

	b = m;
	strcpy(a, av[1]);
	b();
}
