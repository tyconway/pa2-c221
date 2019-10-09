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


    cout << "Success.\n";
}