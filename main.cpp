#include <stdio.h>
#include <exception>
#include <assert.h>
#include <iostream>
#include <string>
#include "Deque.h"

using namespace std;

int main() {
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
    

}