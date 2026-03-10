int	ft_list_size(t_list *begin_list)
{
	int	count = 0;

	while(begin_list)
	{
		count++;
		begin_list = begin_list -> next;
	}
	return (count);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*temp;

	temp = begin_list;
	while (temp)
	{
		(*f)(temp->data);
		temp = temp->next;
	}
}