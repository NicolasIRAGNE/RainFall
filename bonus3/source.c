int main(int ac, char **av)
{
	FILE*	f;
	int	buf[16];
	int	x;
	char	buf2[66];

	f = fopen("/home/user/end/.pass", "r");
	bzero(buf, 0x21 * 4);
	if (f == NULL || ac != 2)
		return (-1);
	fread(buf, 1, 0x42, f);
	x = atoi(av[1]);
	buf[x] = 0;
	fread(buf2, 1, 0x41, f);
	fclose(f);
	if (strcmp((char*)buf, av[1]) == 0)
		execl("/bin/sh", "sh", 0);
	else
		puts(buf2);
	return (0);
}
