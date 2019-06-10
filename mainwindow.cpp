#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
# include <QIntValidator>
#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include "Dialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   // QString idnumber = ui -> lineEdit ->text();
   // QString servername = "originalservename";
   /* QString dbname ="dbname";
    QSqlDatabase db =QSqlDatabase:: addDatabase("QODBC");
   db.setConnectOptions();
   QString dan =QString("DRIVER=(SQL Native Client);SERVER=%1;DATABASE=%2,Trusted_Connection=Yes;").arg(servername) .arg(dbname);
  db.setDatabaseName(dan);
   if(db.open())*/
 //if(idnumber== "123456")
       //{
         //Dialog deilalog;
         //deilalog SetModal(true);
         //deilalog exec();
       //}
       //else
       //{
       //    QMessageBox::warning(this,"PRINT","Try Again or contact security administrator");
     //  }
/* db.close();
   }
   else
   {
       qDebug()<<"Error ="<< db.lastError().text();
} */

}
