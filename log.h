#ifndef _LOG_H_
#define _LOG_H_

#ifdef USE_CONSOLEKIT
#include "Ck.h"
#endif
#ifdef USE_PAM
#include "PAM.h"
#endif
#include "const.h"
#include <fstream>
#include <iostream>

using namespace std;

static class LogUnit
{
	ofstream logFile;
	inline ostream & getStream() { return logFile.is_open() ? logFile : cerr; }

public:
	bool openLog(const char * filename);
	void closeLog();

	~LogUnit() { closeLog(); }

	template <typename Type> LogUnit & operator<<(const Type & text)
	{
		getStream() << text;
		getStream().flush();
		return *this;
	}

	LogUnit & operator<<(ostream & (*fp)(ostream &))
	{
		getStream() << fp;
		getStream().flush();
		return *this;
	}

	LogUnit & operator<<(ios_base & (*fp)(ios_base &))
	{
		getStream() << fp;
		getStream().flush();
		return *this;
	}
} logStream;

#endif /* _LOG_H_ */
