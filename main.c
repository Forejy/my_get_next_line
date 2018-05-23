#include <sys/fcntl.h>
#include "get_next_line.h"

int  main(void)
{
  char  *line = NULL;
  int   fd = open("./gnl10.txt", O_RDONLY);
  get_next_line(fd, &line);
  close(fd);
  sleep(15);
  return (0);
}