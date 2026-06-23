#pragma once
#include <algorithm>
#include <vector>
#include <iostream>


class Span
{
private:
    unsigned int size;
    std::vector<int> v;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    unsigned int get_size();

    int shortestSpan();
    int longestSpan();

    void addNumber(int number);
	void addNumbers(int number, int rang);
    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end)
    {
        while (begin != end)
        {
            if (v.size() >= size)
			    throw std::runtime_error("Limit of vector reached");
            addNumber(*begin);
            ++begin;
        }
    }
};
