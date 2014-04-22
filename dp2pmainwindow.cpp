#include "dp2pmainwindow.h"
#include "ui_dp2pmainwindow.h"

DP2PMainWindow::DP2PMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DP2PMainWindow)
{
    ui->setupUi(this);
}

DP2PMainWindow::~DP2PMainWindow()
{
    delete ui;
}
