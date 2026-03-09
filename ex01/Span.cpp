#include "Span.hpp"

Span::Span(){}
Span::~Span(){}

Span::Span(const Span &other)
{
    *this = other;
}

unsigned int Span::get_size(){return size;}


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
    if (v.size() <= 1)
        throw std::runtime_error("No shortest span possible");
    
    std::vector<int> v_tmp = v;
    std::sort(v_tmp.begin(), v_tmp.end());
    int span = v_tmp[1] - v_tmp[0];
    for (size_t i = 1; i < v_tmp.size() - 1; i++)
    {
        int diff = v_tmp[i + 1] - v_tmp[i];
        if (diff < span)
            span = diff;
    }
    return span;
}

int Span::longestSpan()
{
    if (v.size() <= 1)
        throw std::runtime_error("No longest span possible");

    std::vector<int> v_tmp = v;
    std::sort(v_tmp.begin(), v_tmp.end());
    return (v_tmp.back() - v_tmp.front());
}