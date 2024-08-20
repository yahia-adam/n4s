#include "../includes/n4s.h"

char	**my_show_wordtab2(char *str, char lim)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  if ((tab = malloc(sizeof(char **) * my_strlen(str))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i] != 0)
    {
      k = 0;
      if ((tab[j] = malloc(sizeof(char *) * my_strlen(str))) == NULL)
	return (NULL);
      while (str[i] == lim && str[i++] != 0);
      while (str[i] != lim && str[i] != 0)
	tab[j][k++] = str[i++];
      tab[j++][k] = 0;
      while (str[i] == lim && str[i++] != 0);
    }
  tab[j] = NULL;
  return (tab);
}
