#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_buttonc_clicked();

    void on_buttondian_clicked();

    void on_buttoncheng_clicked();

    void on_buttonjian_clicked();

    void on_buttonjia_clicked();

    void on_buttondengyu_clicked();

    void on_buttondaoshu_clicked();

    void on_buttonpingfang_clicked();

    void on_buttonsqrt_clicked();

    void on_buttonchu_clicked();

    void on_pushButton_clicked();

    void on_buttonyoukuohao_clicked();

    void on_buttonpi_clicked();

    void on_buttonjiecheng_clicked();

private:
    Ui::MainWindow *ui;
    double sum1=0;    //记录运算结果
    double sum2=0;     //与sum1一同参与运算
    double xiaoshu=0.1;   //作为存在小数点时的乘积
    QString string1,st;   //截取当前输入框字符串
    int sign=0;          //在字符串中，判断前面是否存在运算符号
    int jia=0,jian=0,cheng=0,chu=0;   //运算符号的标志位
    int point=0;         //小数点的标志位
    int fuhao=-1,fuhao2=0;    //fuhao:记录运算符号在字符串中的位置，
                              //fuhao2:运算符号添加时，判断前面是否有数字字符
    int kuohao=0;        //括号标志位
    double temp=0;      //记录当前运算结果
};

#endif // MAINWINDOW_H
