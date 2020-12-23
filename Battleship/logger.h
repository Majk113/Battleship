#pragma once

#include <QPlainTextEdit>

class Logger
{
private:
    QPlainTextEdit* loggerWindow;

public:
    Logger() = delete;
    Logger(QPlainTextEdit* log);
    void addToLog(QString str);
    void clearLog();
};
