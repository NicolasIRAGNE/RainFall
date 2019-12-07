char flag[80];

void m()
{
	printf("%s - %d\n", pass, time);
}

int main(int ac, char **av)
{
	char*	s1;
	char*	s2;
	char*	s3;
	char*	s4;
	FILE*	f;

	s1 = malloc(8);
	s2 = malloc(8);
	s3 = malloc(8);
	s4 = malloc(8);
	
	s1[0] = 1;
	s2[0] = 2;

	strcpy(s3, av[1]);
	strcpy(s4, av[2]);

	f = fopen("/home/user/level8/.pass", "r");
	fgets(flag, 68, f);
	puts("~~");
	return (0);
}
