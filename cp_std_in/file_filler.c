#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int n;
	int size;
	int fd;

	if (ac != 3)
		return (3);
	if ((fd = open(av[1], (O_CREAT | O_RDWR | O_TRUNC), 0664)) == -1)
		return (4);
	n = 0;
	size = atoi(av[2]);
	while(++n <= size)
		if (write(fd, "0", 1) != 1)
			return (1);
	if (n < 0)
		return (2);
	return (0);
}
