#include <iostream>
#include "Deque.h"
using namespace std;
int main()
{	
	deque Mydeque;
	Mydeque.printf();
	Mydeque.pushf(1);
	Mydeque.pushb(2);
	Mydeque.pushf(3);
	Mydeque.pushb(4);
	Mydeque.pushf(5);
	Mydeque.printf();
	Mydeque.printb();
	cout << endl;
	Mydeque.popf();
	Mydeque.printf();
	Mydeque.popb();
	Mydeque.printf();
	return 0;
}