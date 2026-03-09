#include "Span.hpp"

int main()
{
    try
    {
        Span first = Span(16);
        first.addNumber(11);
        first.addNumber(9);
        first.addNumber(-8);
        first.addNumber(0);
        first.addNumber(23);
        std::cout << "shortest Spanis : " << first.shortestSpan() << std::endl;
        std::cout << "longest Span is : " << first.longestSpan() << std::endl;
        first.addNumbers(2, 20);
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
