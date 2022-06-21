#pragma once
template <typename T>
struct Node
{
	T value;
	Node* next = nullptr;
};

template <typename T>
class Linked_list
{
private:
	Node<T>* head = nullptr;
	int counter = 0;
public:
	Linked_list() {}
	template <typename T>
	Linked_list(T& object)
	{
		Node <T>* node = new Node<T>{ object };
		head = node;
		counter++;
	}

	int getCounter()
	{
		return counter;
	}

	void addToHead(T& object)
	{
		Node <T>* node = new Node<T>{ object, head };
		head = node;
		counter++;
	}

	void addToTail(T& object)
	{
		Node<T>* buf = head;
		while (buf->next != nullptr)
		{
			buf = buf->next;
		}
		buf->next = new Node<T>{ object };
		counter++;
	}

	void deleteFromHead()
	{
		if (counter != 0)
		{
			Node<T>* buf = head;
			head = head->next;
			delete buf;
			counter--;
		}
		else
		{
			cout << "Error! No elements!";
		}
	}

	void deleteFromTail()
	{
		if (counter != 0)
		{
			Node<T>* buf = head;
			while (buf->next->next != nullptr)
			{
				buf = buf->next;
			}
			delete buf->next;
			buf->next = nullptr;
			counter--;
		}
		else 
		{
			cout << "Error! No elements!";
		}
	}

	void deleteAll()
	{
		if (counter != 0)
		{
			while (counter != 0)
			{
				deleteFromHead();
			}
			head = nullptr;
		}
	}

	void show()
	{
		if (counter != 0)
		{
			Node<T>* buf = head;
			while (buf->next != nullptr)
			{
				cout << buf->value << ", ";
				buf = buf->next;
			}
			cout << buf->value << endl << endl;
		}
	}
};

