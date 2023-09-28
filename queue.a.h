template <typename T>
class Node
{
	public:
	T data;
	Node *next;
	Node(T a)
	{
		data = a;
		next = NULL;
	}
	
};
template <typename T>
class queue{
	private:
	Node<T> *node = NULL;	
	Node<T> *oxiri = node;
	int size = 0;
	public:
	void push(T a)
	{
		if(node == NULL)
		{
			node = new Node<T>(a);
			oxiri = node;
			size++;
			return;
		}
		Node<T> *yangi = new Node<T>(a);
		oxiri->next = yangi;
		oxiri = oxiri->next;
		size++;
	}
	T front()
	{
		return node->data;
	}
	void pop()
	{
		size--;
		node = node->next;
	}
	public:
	int olcham()
	{
		return size;
	}
	bool empty()
	{
		if(this->size == 0)
		return true;
		return false;
	}
};