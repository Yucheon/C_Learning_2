#include <iostream>
#include <string>

using namespace std;

class IErrorLog		//인터페이스이므로 맨 앞에 I를 붙여줌
{
public:
	virtual bool reportError(const char* errorMessage) = 0;	//에러 메세지를 받으면 report

	virtual ~IErrorLog(){}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage)override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage)override
	{
		cout << "Priting error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}