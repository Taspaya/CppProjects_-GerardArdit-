class myStack
{
	struct node  
	{
		int element;		
		node* next;
	};

	//atributos

	node* first;


	public:


		void pop();
		void push(int elm);
		int front();
		bool isEmpty();
		int size();

		myStack copy(myStack stack);

		myStack copyArray(int *arr);

		myStack();
		~myStack();

		
};

