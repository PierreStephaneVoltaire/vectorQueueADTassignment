#ifndef QUEUE_H
#define QUEUE_H
#include"vector"
#include"MyExceptions.h"
using namespace std;

typedef string Elem;
class VectorQueue {
public:
	VectorQueue();
	int size() const;
	bool empty() const;
	const Elem& head() const throw(QueueException);
	const Elem& tail() const throw(QueueException);
	void enqueue(const Elem& e);
	void dequeue() throw(QueueException);
	void print();
private:
	vector<Elem> C;
	int n;
};

VectorQueue::VectorQueue()
	: n(0) { }

int VectorQueue::size() const
{
	return n;
}

bool VectorQueue::empty() const
{
	return n == 0;
}

const Elem& VectorQueue::head() const throw(QueueException) {
	if (empty())
		throw QueueException("front of empty queue");
	return C[0];
}
const Elem& VectorQueue::tail() const throw(QueueException) {
	if (empty())
		throw QueueException("front of empty queue");
	return C.back();
}

void VectorQueue::enqueue(const Elem& e) {
	C.push_back(e);
	n++;
}

void VectorQueue::dequeue() throw(QueueException) {
	if (empty())
		throw QueueException("dequeue of empty queue");
	C.erase(C.begin());
	n--;
}
void VectorQueue::print() {
	for (int i = 0; i < size(); i++) {
		cout << i << ") " << C[i] << endl;
	}
}


#endif
