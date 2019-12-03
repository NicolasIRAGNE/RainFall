/*
 * J'ai pas vraiment reussi a tester, mais ca m'a l'air de ressembler a ca.
 * Je vois pas trop comment faire ce genre de manips en C si ca se trouve j'ai fait de la grosse
 * demer mais bon j'ai essaye...
 */

void	p()
{
	char buf[104];
	fflush(NULL);
	gets(buf);

	void *addr = (*(&buf + (void*)92));
	if (addr & 0xb0000000 == 0xb0000000)
	{
		printf("(%p\n)", addr);
		exit(1);
	}
	puts(buf);
	strdup(buf);
}

int main()
{
	p();
}
