#include<iostream>
using namespace std;

template <class T>
class Queue {
private:
	T* mas;
	int size;
	int start;
	int finish;
	int max_size;
public:
	Queue(int n) {
		T* mas = new T[n];
		start = -1;
		finish = -1;
		size = 0;
		max_size = n;
	}
	bool IsEmpty()
	{
		return size == 0;
	}
	bool IsFull() {
		return size==max_size;
	}
	void Push(const T& val){
		if (!IsFull()) {
			finish = (finish + 1) % max_size;
			mas[finish] = val;
			size++;
			if (start == -1)
			{
				start = finish;
			}
		}
	}
	void Pop(const T& val) {
		if (!IsEmpty()) {
			start = (start + 1) % max_size;
			--size;
		}
	}
	T Top()
	{
		if (!IsEmpty())
		{
			return mas[start];
		}
	}
};