#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan " << sp.longestSpan() << std::endl;

		srand(time(NULL));
		int i = -1;
		int j;
		while(++i < 3)
		{
			Span test = Span(10000);
			std::cout <<" _________________________" << std::endl;
			j = -1;
			while(++j < test.GetSize())
				test.addNumber(rand()%1000);
			std::cout << "shortestSpan: " <<test.shortestSpan() << std::endl;
			std::cout << "longestSpan " <<test.longestSpan() << std::endl;
		}

	}
	catch(const std::exception& ex)
	{
		std::cout << std::endl << ex.what() << std::endl;
	}
	return 0;
}