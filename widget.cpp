#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QStringList qss;
    qss.append("QPushButton{border-style:none;background-color:rgba(0,0,0,0);}");
    qss.append("QPushButton:checked{image:url(:/image/btn_play_normal.png);}");
    qss.append("QPushButton:checked:hover{image:url(:/image/btn_play_press.png);}");
    qss.append("QPushButton:!checked{image:url(:/image/btn_pause_normal.png);}");
    qss.append("QPushButton:!checked:hover{image:url(:/image/btn_pause_press.png);}");
    ui->btnPlay->setStyleSheet(qss.join(""));
    ui->btnPlay->setCheckable(true);
    ui->btnPlay->setChecked(true);
    ui->btnPlay->setMinimumSize(40, 40);
}

Widget::~Widget()
{
    delete ui;
}
