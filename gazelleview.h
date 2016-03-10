#ifndef GAZELLEVIEW_H
#define GAZELLEVIEW_H

#include <QMainWindow>

namespace Ui {
class GazelleView;
}

class GazelleView : public QMainWindow
{
    Q_OBJECT

public:
    explicit GazelleView(QWidget *parent = 0);
    ~GazelleView();

private:
    Ui::GazelleView *ui;
};

#endif // GAZELLEVIEW_H
