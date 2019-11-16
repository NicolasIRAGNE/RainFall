#include <sys/types.h>
#include <unistd.h>

int main(int ac, char** av)
{
	char*	str;
	gid_t	gid;
	uid_t	uid;

	if (atoi(av[1]) == 0x1a7)
	{
		str = strdup("/bin/sh");
		gid = getegid();
		uid = getuid();

		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv(str, NULL);
	}
	else
	{
		fwritei("No !\n", 1, 5, 2);
	}
	return (0);
}
