#ifndef DP2PMAINWINDOW_H
#define DP2PMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class DP2PMainWindow;
}

class DP2PMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DP2PMainWindow(QWidget *parent = 0);
    ~DP2PMainWindow();

private:
    Ui::DP2PMainWindow *ui;
};

#endif // DP2PMAINWINDOW_H
