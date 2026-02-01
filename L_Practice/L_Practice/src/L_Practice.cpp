#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)//接收信息级别的函数
	{
		m_LogLevel = level;
	}

	void Error(const char* message)//打印Error级别信息的函数
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}
	void Warning(const char* message)//打印Warning级别信息的函数
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]:" << message << std::endl;
	}
	void Info(const char* message)//打印Info级别信息的函数
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}
};


int main()
{
	Log log;
	log.SetLevel(log.LogLevelError);
	log.Warning("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}