void	p(char *buf, char *s)
{
	char big_buffer[4104];
	char *ptr;

	puts(s);
	read(0, big_buffer, 4096);
	ptr = strchr(big_buffer, '\n');
	*ptr = 0;
	strncpy(buf, big_buffer, 20);
}

void	pp(char *buff)
{
	char s1[20];
	char s2[20];

	p(s1, " - ");
	p(s2, " - ");

	strcpy(buff, s1);
	buff[strlen(s1)] = ' ';
	strcat(buff, s2);
}

int main()
{
	char buff[54];

	pp(buff);
	puts(buff);
	return (0);
}
