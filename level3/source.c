int i = 0;

void	v()
{
	char buf[536];
	fgets(buf, 512, stdin);
	printf(buf);
	if (i == 0x40)
	{
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int		main()
{
	v();
}
