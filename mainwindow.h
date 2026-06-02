#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() ;

private slots:

    void incriemnat();
    void decrement();
    void divide();
    void time();
    void equal();
    void number_zero();
    void number_one();
    void number_two();
    void number_three();
    void number_four();
    void number_five();
    void number_six();
    void number_seven();
    void number_eight();
    void number_nine();
    void Reset();
    void example(int num);


private:

    QPushButton * btn_plush;
    QPushButton * btn_minus;
    QPushButton * btn_division;
    QPushButton * btn_times;
    QPushButton * btn_equal;
    QPushButton * btn_zero;
    QPushButton *btn_one;
    QPushButton *btn_two;
    QPushButton *btn_three;
    QPushButton *btn_four;
    QPushButton *btn_five;
    QPushButton *btn_six;
    QPushButton *btn_seven;
    QPushButton *btn_eight;
    QPushButton *btn_nine;
    QPushButton *btn_reset;

    QLabel *label;
    int number =0;
    string symbol;
    int firstnumber =0;
    int secondnumber =0;
    bool clicked= false;

};
#endif // MAINWINDOW_H
