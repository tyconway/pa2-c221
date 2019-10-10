#include <stdio.h>
#include <exception>
#include <assert.h>
#include <iostream>
#include <string>
#include "Deque.h"
#include "Exception.h"

using namespace std;

int main() {
    try {
        cout << "\n";

        Deque<int>* deque = new Deque<int>();
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;
        deque->insertFirst(1);
        cout << "insertFirst(1)\n";
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;
        deque->insertFirst(2);
        cout << "insertFirst(2)\n";
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;
        deque->insertFirst(3);
        cout << "insertFirst(3)\n";
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;


        cout << "removeFirst(): " << deque->removeFirst() << endl;
        cout << "Size: " << deque->size() << endl;
        cout << "removeFirst(): " << deque->removeFirst() << endl;
        cout << "Size: " << deque->size() << endl;
        cout << "removeFirst(): " << deque->removeFirst() << endl;
        cout << "Size: " << deque->size() << endl;

        deque->insertLast(7);
        cout << "insertLast(7)\n";
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;
        deque->insertLast(2);
        cout << "insertLast(2)\n";
        cout << "Last: " << deque->last() << endl;
        cout << "Empty: " << boolalpha << deque->isEmpty() << endl;
        cout << "Size: " << deque->size() << endl;

        cout << "removeLast(): " << deque->removeLast() << endl;
        cout << "Size: " << deque->size() << endl;
        cout << "removeLast(): " << deque->removeLast() << endl;
        cout << "Size: " << deque->size() << endl;

        delete deque;
    }
	catch (const exception& e)
	{
		cerr << "\nException: " << e.what() << '\n';
	}  
}