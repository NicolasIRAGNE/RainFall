int main()
{
	char *auth = NULL;
	char *service;
	while (true)
	{
		char buffer[128];

		printf ("%p, %p\n", *auth, service);
		char* ptr = fgets(buffer, 128, stdin);
		if (!ptr)
			return 1;

		if (strncmp(buffer, "auth ", 5))
		{
			auth = malloc(4);
			
			if (strlen(buffer+5) < 31)
				strcpy(auth, buffer+5);
		}

		if (strncmp(buffer, "reset", 5))
		{
			if (auth)
				free(auth);
		}

		if (strncmp(buffer, "service", 6))
		{
			service = strdup(buffer + 7);
		}

		if (strncmp(buffer, "login", 5))
		{
			if (*(auth+32) != 0)
				system("/bin/sh");
			else
				fwrite("Password:\n", 10, 1, stdout);
		}
		return (0);
	}
}

