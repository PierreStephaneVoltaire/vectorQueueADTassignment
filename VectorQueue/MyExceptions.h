#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H
#include<string>
using namespace std;
// implement exceptions

class RuntimeException {
private:
	string errorMsg;
public:
	RuntimeException(const string& err) {
		errorMsg = err;
	}
	string getMessage() const { return errorMsg; }
};

class QueueException : public RuntimeException {
public:
	QueueException(const string& err) : RuntimeException(err) {}
};
#endif

