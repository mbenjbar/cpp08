#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
bool easyfind(const T&container, int value)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    return (it != container.end());
}