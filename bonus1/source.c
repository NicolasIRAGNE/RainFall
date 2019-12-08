int	main(int ac, char **av)
{
	char buffer[40];
	int i;

	i = atoi(av[1]);

	if (i >= 9)
	{
		return (1);
	}

	memcpy(buffer, av[2], i * 4);
	if (i == 0x574f4c46)
	{
		execl("/bin/sh", "sh", 0);
	}

	return (0);

}
