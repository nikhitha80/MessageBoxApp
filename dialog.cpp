#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QDebug>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"Nikhitha D 212218106067","This is INFORMATION Box..");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Nikhitha","Do you like music?");
        if(reply==QMessageBox::Yes)
        {
            QMessageBox::information(this,"music","Yes");
        }
        if(reply==QMessageBox::No)
        {
            QMessageBox::information(this,"music","No");
        }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"nikhitha","This is a CUSTOM message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
        if(reply==QMessageBox::Yes)
        {
            qDebug()<<"Nothing Is Displayed..";
        }
        if(reply==QMessageBox::YesToAll)
        {
            QMessageBox::warning(this,"Nikhitha 6067","Display the message with warning as YesToAll");
        }
        if(reply==QMessageBox::NoToAll)
        {
            QMessageBox::warning(this,"Nikhitha 6067","Dont Display the message with warning as YesToAll");
        }
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Nikhitha 6067","This is a WARNING message!");
}
