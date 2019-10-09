#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <exception>
using namespace std;

struct EmptyDeque : public exception
{
	const char* what() const throw ()
	{
		return "Deque is empty.";
	}
};

#endif