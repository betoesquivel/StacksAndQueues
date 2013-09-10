template <class T> 
class queue
{
	private:
		T q[255];
		int size;//variable siempre contiene el tamanio del arreglo y por ende la primer posicion vacia
	public:
		queue();
		void push(T);
		void pop();
		bool empty();
		T front();
		T back();
};

template <class T>
queue<T>::queue ()
{
	size = 0;
}
template <class T>
void queue<T>::push (T x)
{
	if(size<255)
	{
		//inserta el dato x al final de la queue. 
		q[size] = x;	
		//aumenta el tamanio de la queue.
		size+=1;
	}
	else
	{
		//la queue esta llena.
	}
}
template <class T>
void queue<T>::pop ()
{
	if(size>0)
	{
		//sobre escribo el dato al frente de la queue
		//con el dato que le sigue y corro los demas valores.
		for(int i = 0; i<size-1; i++){
			q[i] = q[i+1];	
		}
		//disminuye el tamanio de la queue.
		size-=1;
	}
	else
	{
		//la queue esta vacia.
	}
}
template <class T>
bool queue<T>::empty ()
{
	return (size>0) ? false:true;
}

template <class T>
T queue<T>::front ()
{
	return q[0];
}
template <class T>
T queue<T>::back ()
{
	return q[size-1];
}
