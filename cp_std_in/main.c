#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFSIZE 1

int main(void)
{
	int n;
	char buf[BUFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFSIZE)) > 0)
		if (write(STDOUT_FILENO, buf, n) != n)
			return (1);
	if (n < 0)
		return (2);
	return (0);
}
