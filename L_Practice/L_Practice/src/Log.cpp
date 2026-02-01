#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)//接收信息级别的函数
	{
		m_LogLevel = level;
	}

	void Error(const char* message)//打印Error级别信息的函数
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}
	void Warning(const char* message)//打印Warning级别信息的函数
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]:" << message << std::endl;
	}
	void Info(const char* message)//打印Info级别信息的函数
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}
};
int main()
{
	Log log;
	log.SetLevel(log.LevelError);
	log.Warning("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}