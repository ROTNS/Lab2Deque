#include <iostream>
using namespace std;
class deque
{
public:
		int a[2000];
		int head = 1000;
		int tail = 1000;
		void pushf(int x) 
		{
			head--;
			a[head] = x;
		}
		void pushb(int x) {
			a[tail] = x;
			tail++;
		}
		int popf() {
			if (head != tail) {
				head++;
				return a[head - 1];
			}
			else 
			{
				cout << "Deque empty";
			}
		}
		int popb() {
			if (head != tail) {
				tail--;
				return a[tail];
			}
			else {
				cout << "Deque empty";
			}
		}
		void printf()
		{
			cout << "\Size of deque=" << tail-head << "\n";
			if (tail-head == 0)
			{
				cout << "deque empty\n";
			}
			for (int n = head; n < tail; n++)
				cout << a[n] << " ";
			cout << endl;

		}
		void printb()
		{
			cout << "\nSize of deque=" << tail - head << "\n";
			if (tail - head == 0)
			{
				cout << "deque empty\n";
			}
			for (int n = tail-1; n >=head; n--)
				cout << a[n] << " ";
			cout << endl;
		}
};
