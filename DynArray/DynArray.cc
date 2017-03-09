#include "DynArray.hh"


DynArray::DynArray():
  //constructor

	m_capacity(DYN_ARRAY_DEFAULT_SIZE),  //inicialitzem els atributs    	
	m_size(0),
	m_data(new int[m_capacity])
	
												
	{
	}

//DynArray::DynArray(size_t size) {}            // creates the array with a defined size
	
	

DynArray::DynArray(size_t size, const int& value)  : // creates and initializes the elements of the array with a value

	m_capacity(size),
		m_size(size),
		m_data(new int[size])
	{
		fill(begin(), end(), value);
	}	



DynArray::DynArray(int *arr, size_t size):              // initializes each element from an external array

	m_capacity(size),
	m_size(size),
	m_data(new int[size])

{};

DynArray::~DynArray(void) {
			
	delete m_data;
};

void push(const int &val) {

	if (d1.m_size < d1.m_capacity) {

		d1.m_data = val;

	}

};

