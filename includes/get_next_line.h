#ifndef		GET_NEXT_LINE_H_
# define	GET_NEXT_LINE_H_

#include <stdlib.h>
#include <stdio.h>
#include "n4s.h"

#define		READ_SIZE (1)
#define		SIZE_MALLOC (4096)

typedef struct	s_vars
{
  int		idx;
  int		idx_line;
  int		k;
  int		value_read;
  char		buf[READ_SIZE];
  char		*line;
}		t_vars;

char		*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
