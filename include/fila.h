#ifndef QUEUE_H
#define QUEUE_H

#include <string>
#include <iostream>

template <class T>

class queue
{

public:

	queue(int lcapacity){

		this->m_size = 0;
	
		this->m_capacity = lcapacity;
		
		this->m_elements = new T [this->m_capacity];
	
	}

	bool empty()
	{
		if(this->size == 0){
			return true;
		}

		return false;
	}
	
	int size()
	{
		return this->m_size - 1;
	}

	
	T& front()
	{
		return this->m_elements[0];
	}
	
	T& back(){

		return this->m_elements[m_size - 1];

	}
	
	void push(const T element)
	{


		if(this->m_size == this->m_capacity){
			T *aux;

			aux = new T[this->m_capacity*2];
			
			for (int i = 0; i < m_capacity; ++i)
			{
				aux[i] = this->m_elements[i];
			}
			
			delete[] this->m_elements;
			
			this->m_capacity *= 2;

			this->m_elements = new T[this->m_capacity];

			for (int i = 0; i < m_capacity; ++i)
			{
				this->m_elements[i] = aux[i];
			}

		}
		m_elements[m_size] = element;

		m_size = m_size++;
	}
	
	void pop()
	{
		for (int i = 1; i < m_size; ++i)
		{
			m_elements[i] = m_elements[i-1];
		}
		
		m_elements[m_size] == T();
		m_size--;
		
	}
	

private:

	int m_capacity;
	int m_size;
	T* m_elements;
};

#endif