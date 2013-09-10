template <class T> 
class stack
{
	private:
		T q[255];
		int size;//variable siempre contiene el tamanio del arreglo y por ende la primer posicion vacia
	public:
		stack();
		void push(T);
		void pop();
		bool empty();
		T top();
};

template <class T>
stack<T>::stack ()
{
	size = 0;
}
template <class T>
void stack<T>::push (T x)
{
	if(size<255)
	{
		//inserta el dato x al final de la stack. 
		q[size] = x;	
		//aumenta el tamanio de la stack.
		size+=1;
	}
	else
	{
		//la stack esta llena.
	}
}
template <class T>
void stack<T>::pop ()
{
	if(size>0)
	{
		//disminuye el tamanio de la stack.
		size-=1;
	}
	else
	{
		//la stack esta vacia.
	}
}
template <class T>
bool stack<T>::empty ()
{
	return (size>0) ? false:true;
}

template <class T>
T stack<T>::top ()
{
	return q[size-1];
}
