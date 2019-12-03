int i = 0;

void	p(char *s)
{
	printf(s);
}

void	n()
{
	char buf[536];

	fgets(buf, 512, stdin);
	p(buf);
	if (i == 0x1025544)
		system("/bin/cat /home/user/level5/.pass");
}

int		main()
{
	n();
}
