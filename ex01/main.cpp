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
        std::cout << "shortest Span for first is : " << first.shortestSpan() << std::endl;
        std::cout << "longest Span for first is : " << first.longestSpan() << std::endl;
        
        Span second = Span(15000);
        std::vector<int> v;
        for (int i = 0; i < 10000; i++)
            v.push_back(i * 2);
        second.addNumbers(v.begin(), v.end());
        std::cout << "shortest Span for second is : " << second.shortestSpan() << std::endl;
        std::cout << "longest Span for second is : " << second.longestSpan() << std::endl;
        second.addNumbers(v.begin(), v.end());
    }

    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
