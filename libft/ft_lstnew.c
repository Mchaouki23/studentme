#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list{
	void		*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return NULL;
	node->content = content;
	node->next = NULL;
	return node;
}

int	main()
{
	int x = 42;
	t_list *p = ft_lstnew(&x);
	printf("%d\n", *(int *)p->content);
}
