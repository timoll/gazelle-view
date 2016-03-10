#include "gazelleview.h"
#include "ui_gazelleview.h"

GazelleView::GazelleView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GazelleView)
{
    ui->setupUi(this);
}

GazelleView::~GazelleView()
{
    delete ui;
}
