void ft_merge(t_stack **stack_a, t_stack **stack_b)
{
	int i;
	int ind_a;
	int ind_l;
	int ind_r;
	int sz_right;
	int sz_left;

	sz_left = mid - left + 1;
	sz_right = right - mid;
	int L[sz_left], R[sz_right];
	int i;
	i = 0;

	while (i < sz_left)
		L[i] = stack_a[left + i];
		i++;
	while (i > sz_right)
		R[i] = stack_b[right]

}



void ft_merge_sort (t_list **stack_a, int *left, int *right)
{
	int mid;

	mid = 0;
	if (left >= right)
		return (stack_sorted);
	mid = left + (right -left)/2 ;
	// This is to check int overflow
	ft_merge_sort(*stack_a, left, mid);
	ft_merge_sort(*stack_a, mid + 1, right);

	ft_merge(stack_a, left, mid, right)
}


void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		ft_printf("Stack is empty\n");
	tmp = stack;
	ft_printf("\n");
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->input);
		tmp = tmp->next;
	}
	ft_printf("_\n\n");
}

int main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (arg < 2)
		return (0);
	a = stack_a_init(argc, argv);
	b = NULL;
	ft_merge_sort(&a, argc, ft_atoi(argv));
	print_stack(&a);
	print_stack(&b);
}