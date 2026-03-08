#include "Span.hpp"

Span::Span(){}
Span::~Span(){}

Span::Span(const Span &other)
{
    *this = other;
}
Span &Span::operator=(const Span &other)
{
    size = other.size;
	return *this;
}

Span::Span(unsigned int N) {size = N;}

void Span::addNumber(int number)
{
	if (v.size() == size)
		throw std::runtime_error("Limit of vector reached");
	v.push_back(number);
}

void Span::addNumbers(int number, int rang)
{
    int j = number;
    while (j < (number + rang))
    {
        if (v.size() == size)
			throw std::runtime_error("Limit of vector reached");
        v.push_back(j);
        j++;
    }
}

int Span::shortestSpan()
{

}

int Span::longestSpan()
{

}