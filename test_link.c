struct Node 
{
	int val;
	node *next;
	node *prev;	
} node;

node head;

void insert_node(int val)
{
	node = node.new(val);
	node->next = head;
	node->prev = NULL;
	if(head != NULL)
	{
		head->prev = node;
	}

	node = node->head;
	while(node != NULL)
	printf("%d\n",node->val)
}


int main(void)
{
	insert_node(12);
}