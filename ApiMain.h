#ifndef APIMAIN_H
#define APIMAIN_H

#include <QWidget>

#include "app.h"
#include "mvlog.h"
#include "mvpublic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ApiMain; }
QT_END_NAMESPACE

class ApiMain : public QWidget
{
    Q_OBJECT

public:
    ApiMain(QWidget *parent = nullptr);
    ~ApiMain();

private:
    Ui::ApiMain *ui;
};
#endif // APIMAIN_H
