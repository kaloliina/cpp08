#include "vector"
#include <iostream>
#include <array>
#include <exception>
#include <algorithm>

class Span
{
	//could be dynamic vector but we have a limit so mby use array???
	private:
	std::vector<int> vector;
	int size;

	public:
	Span(unsigned int N);

	//remember the form...
	void	addNumber(int NumberToAdd);
	int		shortestSpan();
	int		longestSpan();

//find out how to add multiple numbers...

};
