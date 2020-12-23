#include "logger.h"


Logger::Logger(QPlainTextEdit* log)
{
    loggerWindow = log;
}

void Logger::addToLog(QString str)
{
    loggerWindow->appendPlainText(str);
}

void Logger::clearLog()
{
    loggerWindow->clear();
}
