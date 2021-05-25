#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QList>
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    function="";
    Left = 0;
    Right = 0;
    isComma = false;
    Opt = Operation::NoOperation;
    Memory = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
      addToLogs("1");
}


void MainWindow::on_pushButton_2_clicked()
{
    addToLogs("2");
}


void MainWindow::on_pushButton_3_clicked()
{
    addToLogs("3");
}


void MainWindow::on_pushButton_4_clicked()
{
    addToLogs("4");
}


void MainWindow::on_pushButton_5_clicked()
{
    addToLogs("5");
}

void MainWindow::on_pushButton_6_clicked()
{
    addToLogs("6");
}
void MainWindow::on_pushButton_7_clicked()
{
    addToLogs("7");
}

void MainWindow::on_pushButton_8_clicked()
{
    addToLogs("8");
}

void MainWindow::on_pushButton_9_clicked()
{
    addToLogs("9");
}

void MainWindow::on_pushButtonZatwierdz_clicked()
{
    function=ui->lineEdit->text();
    ui->lineEdit->clear();
    addToLogs("Funkcja= "+function);
}

void MainWindow::addToLogs(QString message)
{
    QString text = ui->lineEdit->text();
    text.append(message);
     ui->lineEdit->setText(text);
}


void MainWindow::on_pushButton_cofnij_clicked()
{
    Left = 0;
    Right = 0;
    isComma = false;
    Opt = Operation::NoOperation;
    ui->lineEdit->clear();

}


void MainWindow::on_pushButton_plus_clicked()
{
    addToLogs("+");
}


void MainWindow::on_pushButton_dziel_clicked()
{
    addToLogs("/");
}


void MainWindow::on_pushButton_mnoz_clicked()
{
    addToLogs("*");
}


void MainWindow::on_pushButton_minus_clicked()
{
    addToLogs("-");
}


void MainWindow::on_pushButton_kropka_clicked()
{
    addToLogs(",");
}


void MainWindow::on_pushButton_0_clicked()
{
    addToLogs("0");
}


void MainWindow::on_pushButton_sin_clicked()
{
    addToLogs("sin(");
}


void MainWindow::on_pushButton_cos_clicked()
{
    addToLogs("cos(");
}


void MainWindow::on_pushButton_nawia_otwarty_clicked()
{
    addToLogs("(");
}


void MainWindow::on_pushButton_nawias_zamkniety_clicked()
{
    addToLogs(")");
}


void MainWindow::on_pushButton_pi_clicked()
{
    addToLogs("π");
}


void MainWindow::on_pushButton_x_clicked()
{
    addToLogs("x");
}


void MainWindow::on_pushButton_y_clicked()
{
    addToLogs("y");
}


void MainWindow::on_pushButton_11_clicked()
{
    addToLogs("z");
}

void MainWindow::on_pushButton_clicked()
{

}
