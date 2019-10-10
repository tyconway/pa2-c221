#ifndef DEQUE_H
#define DEQUE_H

#include "Node.h"
#include "Exception.h"
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
        Node<Type>* inserted = new Node<Type>(o);
        if (size() == 0) {
            firstNode = inserted;
            lastNode = inserted;
            s++;
            return;
        }
        lastNode->setNext(inserted);
        inserted->setPrev(lastNode);
        lastNode = inserted;
        s++;
	}
	
	Type removeFirst() {
        if (isEmpty()) { throw EmptyDeque(); }
        Type removedData = firstNode->getData();
        if (size() == 1) {
            delete firstNode;
            firstNode = nullptr;
            lastNode = nullptr;
            s--;
            return removedData;
        }
        Node<Type>* removedNode = firstNode;
        firstNode = firstNode->getNext();
        firstNode->setPrev(nullptr);
        delete removedNode;
        s--;
        return removedData;
	}

	Type removeLast() {
        if (isEmpty()) { throw EmptyDeque(); }
        Type removedData = lastNode->getData();
        if (size() == 1) {
            delete lastNode;
            lastNode = nullptr;
            firstNode = nullptr;
            s--;
            return removedData;
        }
        Node<Type>* removed = lastNode;
        lastNode = lastNode->getPrev();
        delete removed;
        lastNode->setNext(nullptr);
        s--;
        return removedData;
	}
};

#endif