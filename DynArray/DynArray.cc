#include "DynArray.hh"


DynArray::DynArray(){  //constructor

	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];  //inicialitzem els atributs    	
	m_capacity = 5;
	m_size =  5;
												
};

DynArray::DynArray(size_t size)            // creates the array with a defined size
{	
	m_data = new int[size];
};

DynArray::DynArray(size_t size, const int &value)   // creates and initializes the elements of the array with a value
{
};

DynArray::DynArray(int *arr, size_t size)               // initializes each element from an external array
{
	//DynArray *arr;

	arr = new int[size];


};


