#pragma once
#include<iostream>
using namespace std;

template <class T>
class Deque {
private:
	T* mas;
	int size;
	int start;
	int finish;
	int max_size;
public:
	Deque(int n) {
		size = 0;
		start = n / 2;
		finish = n / 2;
		max_size = n;
		T* mas = new T[n];
	}
	bool IsEmpty()
	{
		return size == 0;
	}
	bool IsFull() {
		return size == max_size;
	}
	void Push_Front(const T& val) {
		if (start > 0) {
			mas[start] = val;
			start--;
			size++;
		}
	}
	void Push_Back(const T& val) {

		if (finish < max_size) {
				++finish;
				mas[finish] = val;
				size++
			}
	}
	void Pop_Front()
	{
		if (!IsEmpty()) {
			start++;
			size--;
		}
	}
	void Pop_Back()
	{
		if (!IsEmpty()) {
			finish--;
			size--;
		}
	}

	T Front()
	{
		if (!IsEmpty())
		{
			return mas[start];
		}
	}
	T Front()
	{
		if (!IsEmpty())
		{
			return mas[finish];
		}
	}
};