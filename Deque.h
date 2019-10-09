#ifndef DEQUE_H
#define DEQUE_H

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
        s = 0;
	}

	~Deque() {
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
        Node<Type>* inserted = new Node<Type>(o);
        if (size() == 0) {
            firstNode = inserted;
            lastNode = inserted;
            s++;
            return;
        }
        inserted->setNext(firstNode);
        firstNode->setPrev(inserted);
        firstNode = inserted;
        s++;
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

#endif