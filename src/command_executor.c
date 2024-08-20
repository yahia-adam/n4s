#include "../includes/get_next_line.h"
#include "../includes/n4s.h"

int	exec_cmd(char *str)
{
  my_putstr(str, 1);
  str = get_next_line(0);
  if (detect_end(str) == 1)
    return (1);
  return (0);
}
