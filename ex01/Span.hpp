#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

class Span
{
private:
    unsigned int size;
    std::vector<int> v;
    std::vector<int>::iterator i;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    int shortestSpan();
    int longestSpan();

    void addNumber(int number);
	void addNumbers(int number, int rang);
};
