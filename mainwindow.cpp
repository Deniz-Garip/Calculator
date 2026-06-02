#include "mainwindow.h"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include <QGridLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)

{
    setWindowTitle("Calculater");
    setFixedSize(300,200);

    //Central

    QWidget  *central = new QWidget(this);
    QVBoxLayout *mainLyout = new QVBoxLayout(central);
    setCentralWidget(central);


    // Label

    label = new QLabel("", this);
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet("font-size: 48px; font-weight: bold;");



    QHBoxLayout * btnlayolt = new QHBoxLayout();
    QGridLayout * numbad = new QGridLayout();

    btn_plush = new QPushButton("+",this);
    btn_minus = new QPushButton("-",this);
    btn_times = new QPushButton("X",this);
    btn_division = new QPushButton("/",this);
    btn_equal =new QPushButton("=",this);
    btn_reset = new QPushButton("RST",this);
    btn_zero = new QPushButton("0",this);
    btn_one   = new QPushButton("1", this);
    btn_two   = new QPushButton("2", this);
    btn_three = new QPushButton("3", this);
    btn_four  = new QPushButton("4", this);
    btn_five  = new QPushButton("5", this);
    btn_six   = new QPushButton("6", this);
    btn_seven = new QPushButton("7", this);
    btn_eight = new QPushButton("8", this);
    btn_nine  = new QPushButton("9", this);

    // buttons
    btnlayolt->addWidget(btn_plush);
    btnlayolt->addWidget(btn_minus);
    btnlayolt->addWidget(btn_times);
    btnlayolt->addWidget(btn_division);
    btnlayolt->addWidget(btn_equal);
    btnlayolt->addWidget(btn_reset);

    //numbers

    numbad->addWidget(btn_seven,0,0);
    numbad->addWidget(btn_eight,0,1);
    numbad->addWidget(btn_nine,0,2);

    numbad->addWidget(btn_four,1,0);
    numbad->addWidget(btn_five,1,1);
    numbad->addWidget(btn_six,1,2);


    numbad->addWidget(btn_one,2,0);
    numbad->addWidget(btn_two,2,1);
    numbad->addWidget(btn_three,2,2);

    numbad->addWidget(btn_zero,3,1);




    //label

    mainLyout->addWidget(label);
    mainLyout->addLayout(numbad);
    mainLyout->addLayout(btnlayolt);

    connect(btn_plush, &QPushButton::clicked,this, &MainWindow::incriemnat);
    connect(btn_minus,  &QPushButton::clicked, this, &MainWindow::decrement);
    connect(btn_division,&QPushButton::clicked,this,&MainWindow::divide);
    connect(btn_times, &QPushButton::clicked,this,&MainWindow::time);
    connect(btn_equal, &QPushButton::clicked,this,&MainWindow::equal);
    connect(btn_reset, &QPushButton::clicked,this,&MainWindow::Reset);
    connect(btn_zero,&::QPushButton::clicked,this,&MainWindow:: number_zero);
    connect(btn_one,   &QPushButton::clicked, this, &MainWindow::number_one);
    connect(btn_two,   &QPushButton::clicked, this, &MainWindow::number_two);
    connect(btn_three, &QPushButton::clicked, this, &MainWindow::number_three);
    connect(btn_four,  &QPushButton::clicked, this, &MainWindow::number_four);
    connect(btn_five,  &QPushButton::clicked, this, &MainWindow::number_five);
    connect(btn_six,   &QPushButton::clicked, this, &MainWindow::number_six);
    connect(btn_seven, &QPushButton::clicked, this, &MainWindow::number_seven);
    connect(btn_eight, &QPushButton::clicked, this, &MainWindow::number_eight);
    connect(btn_nine,  &QPushButton::clicked, this, &MainWindow::number_nine);
}

void MainWindow::example(int num)

{
    if(clicked)
    {
        secondnumber=num;
        label->setText(QString::number(secondnumber));

    }
    else
    {
        firstnumber=num;
        label->setText(QString::number(firstnumber));

    }
}

void MainWindow::incriemnat()
{
    symbol ="+";
    clicked =true;
    label->setText("+");
}

void MainWindow::decrement()
{
    symbol ="-";
    clicked =true;

    label->setText("-");

}

void MainWindow::time()
{
    symbol ="X";
    clicked =true;
    label->setText("X");
}
void MainWindow::divide()
{
    symbol ="/";
    clicked =true;

    label->setText("/");
}

void MainWindow::Reset()
{
    firstnumber=0;
    label->setText(QString::number(firstnumber));

    secondnumber=0;
    label->setText(QString::number(secondnumber));

}

void MainWindow::equal()
{
    int result;
    if(symbol == "+")
    {
        result=  firstnumber + secondnumber;
    }
    else if(symbol == "-")
    {
        result = firstnumber - secondnumber;
    }

    else if(symbol == "X")
    {
        result = firstnumber * secondnumber;
    }

    else if(symbol == "/")
    {
        result = firstnumber / secondnumber;

    }



    label->setText(QString::number(result));
}

void MainWindow::number_zero()
{
    example(0);

}

void MainWindow::number_one()
{
    example(1);

}

void MainWindow::number_two()
{
    example(2);

}

void MainWindow::number_three()
{
    example(3);

}

void MainWindow::number_four()
{
    example(4);

}

void MainWindow::number_five()
{
    example(5);

}

void MainWindow::number_six()
{
    example(6);
}

void MainWindow::number_seven()
{
    example(7);
}

void MainWindow::number_eight()
{
    example(8);
}

void MainWindow::number_nine()
{
    example(9);
}

MainWindow::~MainWindow()
{
}
