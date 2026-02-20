#include <iostream>
#include <stack>
/*Stack container follows LIFO (last in first out) order of insertion and deletion.
It means that most recently inserted element is removed first and the first inserted element will
be removed last. This is done by inserting and deleting elements at only one end of the stack
which is generally called the top of the stack.
stack<T> stdL (T being data type of elements in the stack)
Push for inserting elements, pop for deleting, empty, size*/


//can we not inherit from std::stack??

/*this stack can contain any data types so thats why templates...*/
//if stack doesnt have T there, main doesnt recognize the stack's functions
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
//	iterator it;
	iterator begin()
	{
		stack<int> tempt(st);
		while (!temp.empty())
		{
			std::cout << temp.top() << " ":
			temp.pop();
		}
		return  temp;
	}

};
