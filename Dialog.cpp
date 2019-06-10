#include "Dialog.h"
#include "ui_form.h"
#include <QPixmap>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QPixmap pix("/home/machinemaker/Downloads/mpt.jpg");
    ui -> label_pic ->setPixmap(pix);
}

Form::~Form()
{
    delete ui;
}
