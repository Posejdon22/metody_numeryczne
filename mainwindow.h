#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_cofnij_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_dziel_clicked();

    void on_pushButton_mnoz_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_kropka_clicked();

    void on_pushButtonZatwierdz_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_nawia_otwarty_clicked();

    void on_pushButton_nawias_zamkniety_clicked();

    void on_pushButton_pi_clicked();

    void on_pushButton_x_clicked();

    void on_pushButton_y_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
    void addToLogs(QString message);

    QString function;

    double Left;
    double Right;
    int Opt;
    double Memory;
    bool isComma;
    enum Operation
    {
            Plus,
            Minus,
            Multiply,
            Divide,
            NoOperation
     };
};

#endif // MAINWINDOW_H
