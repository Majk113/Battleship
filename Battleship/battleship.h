#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Battleship; }
QT_END_NAMESPACE

class Battleship : public QMainWindow
{
    Q_OBJECT

public:
    Battleship(QWidget *parent = nullptr);
    ~Battleship();

private:
    Ui::Battleship *ui;
};
#endif // BATTLESHIP_H
