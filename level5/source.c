void	o()
{
	system("/bin/sh");
	exit(1);
}

void	n()
{
	char buf[536];
	
	fgets(buf, 512, stdin);
	printf(buf);
	exit(1);
}

int		main()
{
	n();
}
