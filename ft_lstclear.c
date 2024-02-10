#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_free;

	while (to_free->next)
	{
		del(to_free->content);
		free(to_free);
		to_free = to_free->next;
	}
	del(to_free->content);
	free(to_free);
	lst = NULL;
}
