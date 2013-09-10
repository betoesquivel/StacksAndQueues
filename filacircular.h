/* This will be a circular
* array.
* Front will be pointing at a reserved
* space which is in front of the next 
* item to go out. 
*
* When back is right behind front, 
* then the array is full.
* When back is the same value as front, then 
* the array is empty.
*
*/
template <class T>
class queue
{
	private:
		T q[255];
		int	frt;
		int	bck; 
		int max;
	public:
		queue();
		void push(T);
		void pop();
		bool empty();
		bool full();
		T front();
		T back();
};

template <class T>
queue<T>::queue()
{
	frt = bck = 0;
	max = 255;
}
template <class T>
void queue<T>::push (T x)
{
	if(!full())
	{
		bck = (bck+1)%max;
		q[bck] = x;
	}
	
}
template <class T>
void queue<T>::pop ()
{
	if(!empty())
	{
		frt = (frt+1)%max;	
	}
}
template <class T>
bool queue<T>::empty ()
{
	//my frt is just behind bck
	//which means they both have the same value.
	return ( (frt+1)%max == bck );	
}
template <class T>
bool queue<T>::full ()
{
	//my bck is just behind frt
	//just behind the reserved spot
	return ( (bck+1)%max == frt );	
}
template <class T>
T queue<T>::front ()
{
	return q[(frt+1)%max];
	//because frt points to 
	//the reserved spot. 
}
template <class T>
T queue<T>::back ()
{
	return q[bck];
	//because frt points to 
	//the reserved spot. 
}
