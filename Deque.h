#pragma once

#include "Node.h"
#include <assert.h>

template <class Type>
class Deque {
private:
    int s;
	Node<Type>* firstNode;
	Node<Type>* lastNode;

public:
	Deque() {
        assert(false);
	}

	~Deque() {
        assert(false);
	}
	
	bool isEmpty() {
        return (s < 1);
	}

	int size() {
        return s;
	}

	Type first() {
        assert(false);
	}

	Type last() {
        assert(false);
	}

	void insertFirst(Type o) {
        assert(false);
	}

	void insertLast(Type o) {
        assert(false);
	}
	
	Type removeFirst() {
        assert(false);
	}

	Type removeLast() {
        assert(false);
	}
};