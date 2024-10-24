#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list{
    void        *content;
    struct s_list    *next;
}    t_list;

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new)
		return;
    	new->next = *lst;
	*lst = new;
}

int    main()
{
    int x = 1;
    int y = 2;
    int d = 3;
    int *con = &x;
    
    t_list *node = NULL;
    t_list *p = malloc(sizeof(t_list));
    if(!p)
        return 1;
    p->content = con;
    p->next = NULL;
    node = p;

    con = &y;
    p = malloc(sizeof(t_list));
    p->content = con;
    p->next = NULL;
    node->next = p;

    con = &d;
    p = malloc(sizeof(t_list));;
    p->content = con;
    p->next = NULL;

    ft_lstadd_front(&node, p);
}
