class myStack
{
	struct node  
	{
		int element;		
		node* next;
	};

	
	node* first; //attr 
	

	public:


		void pop();
		void push(int elm);
		int front();
		bool isEmpty();
		int size();

		myStack copy(myStack stack);

		myStack copyArray(int *arr, int size);

		myStack();
		~myStack();

		
};

