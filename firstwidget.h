#ifndef FIRSTWIDGET_H
#define FIRSTWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class firstWidget;
}
QT_END_NAMESPACE

class firstWidget : public QMainWindow
{
    Q_OBJECT

public:
    firstWidget(QWidget *parent = nullptr);
    ~firstWidget();

private:
    Ui::firstWidget *ui;
};
#endif // FIRSTWIDGET_H
