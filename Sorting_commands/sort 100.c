
void merge(**stack_a, int left, int mid, int right)
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
		R[i] = stack_a[right]

}



void merge_sort (t_list **stack_a, int *left, int *right)
{
	int mid;

	mid = 0;
	if (left >= right)
		return (stack_sorted);
	mid = left + (right -left)/2 ;
	// This is to check int overflow
	merge_sort(*stack_a, left, mid);
	merge_sort(*stack_a, mid + 1, right);

	merge(stack_a, left, mid, right)
}

