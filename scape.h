#ifndef SCAPE_H
#define SCAPE_H

#include <QWidget>

namespace Ui {
class scape;
}

class scape : public QWidget
{
    Q_OBJECT

public:
    explicit scape(QWidget *parent = 0);
    ~scape();

private:
    Ui::scape *ui;
};

#endif // SCAPE_H
