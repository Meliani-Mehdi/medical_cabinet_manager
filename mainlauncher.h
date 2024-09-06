#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class mainLauncher;
}
QT_END_NAMESPACE

class mainLauncher : public QMainWindow
{
    Q_OBJECT

public:
    mainLauncher(QWidget *parent = nullptr);
    ~mainLauncher();

private:
    Ui::mainLauncher *ui;
};
#endif // MAINLAUNCHER_H
