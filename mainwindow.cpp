#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/icons/we.ico"));     //设置图标
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()  //数字1
{
    if(fuhao2==1)    //判断前面是否已有其他字符
    {
        ui->textEdit->insertPlainText("1");    //插入数字1
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("1");      //用1覆盖输入框原来的字符""
        fuhao2=1;        //符号置1，表示此时前面已有字符

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button2_clicked()  //数字2
{
    if(fuhao2==1)  //插入数字2
    {
        ui->textEdit->insertPlainText("2");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("2");  //用2覆盖输入框原来的字符""
        fuhao2=1;      //符号置1，表示此时前面已有字符

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button3_clicked()  //数字3
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("3");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("3");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button4_clicked()  //数字4
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("4");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("4");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button5_clicked()  //数字5
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("5");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("5");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button6_clicked()  //数字6
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("6");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("6");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button7_clicked()  //数字7
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("7");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("7");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button8_clicked()  //数字8
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("8");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("8");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button9_clicked()  //数字9
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("9");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("9");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_button0_clicked()  //数字0
{
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("0");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("0");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonc_clicked()  //清除键
{
    sum1=0;            //将所有标志位初始化，输入框原来的内容用""来覆盖
    sum2=0;
    sign=0;
    xiaoshu=0.1;
    point=0;
    jia=0;
    jian=0;
    cheng=0;
    chu=0;
    fuhao=-1;
    fuhao2=0;
    kuohao=0;
    temp=0;
    ui->textEdit->setPlainText("");
}

void MainWindow::on_buttondian_clicked()  //小数点
{
     if(fuhao2==1)        //同上述数字字符实现的方法一样
     {
         ui->textEdit->insertPlainText(".");
     }
     else if(fuhao2==0)
     {
         ui->textEdit->setPlainText("0.");

         QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
         cursor.movePosition(QTextCursor::End);
         ui->textEdit->setTextCursor(cursor);
     }
}

void MainWindow::on_buttoncheng_clicked()  //乘号
{
    QString string2;       //同数字字符实现方式一样
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("*");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("0*");    //当前面无其他字符时，自动补零
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    fuhao=string2.size()-1;
}

void MainWindow::on_buttonjian_clicked()  //减号
{
    QString string2;   //同乘号实现方式一样
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("-");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("0-");   //自动补零
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    fuhao=string2.size()-1;
}

void MainWindow::on_buttonjia_clicked()  //加号
{
    QString string2;     //同乘号实现方式一样
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("+");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("0+");    //自动补零
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    fuhao=string2.size()-1;
}

void MainWindow::on_buttondengyu_clicked()  //等号
{
    //所有的运算均在输入框输出"="之后才开始

    ui->textEdit->insertPlainText("=");
    string1=ui->textEdit->toPlainText();
    int i=-1,tem=0,k=-1;
    double w=0;
    while(string1[++i]!='=')  //依次读取输入框中的字符串，直到"="为止
    {
        if(string1[i]!="+"&&string1[i]!="-"&&string1[i]!="*"&&string1[i]!="/"   //数字和小数点功能的实现
        &&string1[i]!="("&&string1[i]!=")"&&string1[i]!="Π"&&string1[i]!="!")
        {
            if(string1[i]=='.')
            {
                if(point==0)    //判断小数点与前面冲突
                {
                    point=1;    //标志位置1，防止后面小数点与此发生冲突
                    continue;
                }
                else           //小数点与前面发生冲突，结束循环，输出错误
                {
                    tem=1;
                    break;
                }
            }
            st=string1[i];
            if(sign==0)    //判断前面是否已存在运算符号
            {
                if(point==0)  //判断前面有无小数点
                {
                    sum1=sum1*10+st.toDouble();
                }
                else
                {
                    //xiaoshu初始值为0.1
                    sum1=sum1+xiaoshu*st.toDouble();
                    xiaoshu=xiaoshu*0.1;
                }
            }
            else    //前面已存在运算符号
            {
                if(point==0)  //判断前面有无小数点
                {
                    sum2=sum2*10+st.toDouble();
                }
                else
                {
                    //xiaoshu初始值为0.1
                    sum2=sum2+xiaoshu*st.toDouble();
                    xiaoshu=xiaoshu*0.1;
                }
            }
        }

        else if(string1[i]=="!")  //阶乘功能的实现
        {
            if(sum2!=0)    //要求其阶乘的数字是在运算符号前还是后
            {
                if(point==0)  //判断前面是否有小数点
                {
                    w=sum2;
                    sum2=1;
                    for(int q=w;q>0;q--)  //得到sum2的阶乘值
                    {
                        sum2*=q;
                    }
                }
                else     //前面有小数点，结束循环，输出错误
                {
                    tem=3;
                    break;
                }
            }
            else
            {
                if(sum1!=0)   //判断运算符号前面的数是否为0
                {
                    if(point==0)  //判断前面是否有小数点
                    {
                        w=sum1;
                        sum1=1;
                        for(int q=w;q>0;q--)  //得到sum1的阶乘值
                        {
                            sum1*=q;
                        }
                    }
                    else  //前面有小数点，结束循环，输出错误
                    {
                        tem=3;
                        break;
                    }
                }
                else  //0！==1
                {
                    sum1=1;
                }
            }
            if(string1[i+1]!="="&&string1[i+1]!="+"&&string1[i+1]!="-"
              &&string1[i+1]!="*"&&string1[i+1]!="/"&&string1[i+1]!=".")
              //判断阶乘符号后面字符是否为数字字符
            {
                string1.insert(i+1,"*");
            }
            else if(string1[i+1]==".")
            {
                string1.insert(i+1,"0");
                string1.insert(i+1,"*");
            }
        }

        else if(string1[i]=="Π")  //Π（派）功能的实现
        {
            if(sum2!=0)
            {
                sum2*=3.14;
            }
            else
            {
                if(sign==1)   //若sum2==0且前面已有运算符号
                {
                    sum2=3.14;
                }
                else if(sum1!=0)   //判断sum1是否为0
                {
                    sum1*=3.14;
                }
                else
                {
                    sum1=3.14;
                }
            }
            if(string1[i+1]!="="&&string1[i+1]!="+"&&string1[i+1]!="-"
              &&string1[i+1]!="*"&&string1[i+1]!="/"&&string1[i+1]!=".")
              //判断阶乘符号后面字符是否为数字字符
            {
                string1.insert(i+1,"*");
            }
            else if(string1[i+1]==".")
            {
                string1.insert(i+1,"0");
                string1.insert(i+1,"*");
            }
        }

        else if(string1[i]=="(")  //左括号功能的实现
        {
            if(kuohao==0)   //判断前面是否已有左括号，防止冲突
            {
                //将该左括号前面的运算符号标记
                if(jia==1)
                {
                    k=0;
                    jia=0;
                }
                else if(jian==1)
                {
                    k=1;
                    jian=0;
                }
                else if(cheng==1)
                {
                    k=2;
                    cheng=0;
                }
                else if(chu==1)
                {
                    k=3;
                    chu=0;
                }
                if(k>-1)   //k==-1,则左括号前没有运算符号，表明该括号可以省略
                {
                    temp=sum1;   //将当前运算结果记录在临时变量temp中
                    sum1=0;
                    sign=0;
                    kuohao=1;
                }
                else
                {
                    kuohao=1;
                    continue;
                }
            }
            else   //括号发生冲突，循环结束，输出错误
            {
                tem=2;
                break;
            }
        }

        else if(string1[i]==")")  //右括号功能的实现
        {
            if(kuohao==1)     //判断前面是否已有左括号，防止冲突
            {
                //将右括号前面的等式运算执行，并记录结果
                if(jia==1)
                {
                    sum1+=sum2;
                    jia=0;
                }
                else if(jian==1)
                {
                    sum1-=sum2;
                    jian=0;
                }
                else if(cheng==1)
                {
                    sum1*=sum2;
                    cheng=0;
                }
                else if(chu==1)
                {
                    if(sum2==0)
                    {
                        tem=1;
                        break;
                    }
                    else
                    {
                        sum1/=sum2;
                    }
                    chu=0;
                }
                if(k==-1)   //若k==-1，则表明该右括号可省略
                {
                    continue;
                }
                else if(k==0)  //判断之前被标记的运算符号，并与temp进行运算，记录结果
                {
                    sum1+=temp;
                }
                else if(k==1)
                {
                    sum1=temp-sum1;
                }
                else if(k==2)
                {
                    sum1*=temp;
                }
                else if(k==3)
                {
                    if(sum1==0)
                    {
                        tem=1;
                        break;
                    }
                    else
                    {
                        sum1=temp/sum1;
                    }
                }
                //将标志位初始化
                temp=0;
                k=-1;
                sum2=0;
                xiaoshu=0.1;
                point=0;
                kuohao=0;
                sign=0;
            }
            else   //括号发生冲突，循环结束，输出错误
            {
                tem=2;
                break;
            }
        }

        else if(string1[i]=='+')  //加号功能的实现
        {
            //将该运算符号之前的等式运算执行，并记录结果到sum1中
            if(jia==1)
            {
                sum1+=sum2;
                jia=0;
            }
            else if(jian==1)
            {
                sum1-=sum2;
                jian=0;
            }
            else if(cheng==1)
            {
                sum1*=sum2;
                cheng=0;
            }
            else if(chu==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                chu=0;
            }
            //标志位初始化
            xiaoshu=0.1;
            point=0;
            sum2=0;
            sign=1;
            jia=1;
        }

        else if(string1[i]=='-')  //减号功能的实现
        {
            //同加号实现方法一致
            if(jia==1)
            {
                sum1=sum1+sum2;
                jia=0;
            }
            else if(jian==1)
            {
                sum1=sum1-sum2;
                jian=0;
            }
            else if(cheng==1)
            {
                sum1=sum1*sum2;
                cheng=0;
            }
            else if(chu==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                chu=0;
            }
            xiaoshu=0.1;
            point=0;
            sum2=0;
            sign=1;
            jian=1;
        }

        else if(string1[i]=='*')  //乘号功能的实现
        {
            //同加号实现方法一致
            if(jia==1)
            {
                sum1+=sum2;
                jia=0;
            }
            else if(jian==1)
            {
                sum1-=sum2;
                jian=0;
            }
            else if(cheng==1)
            {
                sum1*=sum2;
                cheng=0;
            }
            else if(chu==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                chu=0;
            }
            xiaoshu=0.1;
            point=0;
            sum2=0;
            sign=1;
            cheng=1;
        }

        else   //除号功能的实现
        {
            //同加号实现方法一致
            if(jia==1)
            {
                sum1+=sum2;
                jia=0;
            }
            else if(jian==1)
            {
                sum1-=sum2;
                jian=0;
            }
            else if(cheng==1)
            {
                sum1*=sum2;
                cheng=0;
            }
            else if(chu==1)
            {
                if(sum2==0)
                {
                    tem=1;
                    break;
                }
                else
                {
                    sum1/=sum2;
                }
                chu=0;
            }
            xiaoshu=0.1;
            point=0;
            sum2=0;
            sign=1;
            chu=1;
        }
    }
    //将等号前的等式运算执行，并记录结果到sum1中
    if(jia==1)
    {
        sum1+=sum2;
        jia=0;
    }
    else if(jian==1)
    {
        sum1-=sum2;
        jian=0;
    }
    else if(cheng==1)
    {
        sum1*=sum2;
        cheng=0;
    }
    else if(chu==1)
    {
        if(sum2==0)
        {
            tem=1;
        }
        else
        {
            sum1/=sum2;
        }
        chu=0;
    }
    if(kuohao==1)
    {
        kuohao=0;
        tem=2;
    }

    //判断整个运算中是否出错
    if(tem==1)
    {
        ui->textEdit->setPlainText("ERROR to /0");
    }
    else if(tem==0)
    {
        ui->textEdit->insertPlainText(QString::number(sum1,'f',2));
    }
    else if(tem==3)
    {
        ui->textEdit->setPlainText("ERROR to x!");
    }
    else if(tem==2)
    {
        ui->textEdit->setPlainText("ERROR to ( or )");
    }
    else
    {
        ui->textEdit->setPlainText("ERROR to points");
    }

    //标志位初始化
    sum1=0;
    sum2=0;
    sign=0;
    xiaoshu=0.1;
    point=0;
    jia=0;
    jian=0;
    cheng=0;
    chu=0;
    fuhao=-1;
    fuhao2=0;
    kuohao=0;
}

void MainWindow::on_buttondaoshu_clicked()  //取倒数
{
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(fuhao!=-1||string3.size()>0) //判断当前输入框是否有字符
    {
        if(fuhao!=string3.size())
        {
            tem=string3.mid(fuhao+1).toDouble();  //截取当前离末尾最近的运算符号后面的字符，并转为浮点数
            if(tem==0)  //0无法取导数
            {
                fuhao=-1;
                ui->textEdit->setPlainText("ERROR to /0");
                fuhao2=0;
            }
            else
            {
                //将截取出来的浮点数取导数并替换掉原来字符串中的字符
                string3.replace(fuhao+1, string3.size()-fuhao,QString::number(1/tem,'f',2));
                ui->textEdit->setPlainText(string3);     //此时光标自动回到初始位置

                QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
                cursor.movePosition(QTextCursor::End);
                ui->textEdit->setTextCursor(cursor);
            }
        }
        fuhao2=0;   //标志位初始化
    }
}

void MainWindow::on_buttonpingfang_clicked()  //平方
{
    //与取导数实现方式一致
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(fuhao!=-1||string3.size()>0)
    {
        if(fuhao!=string3.size())
        {
            tem=string3.mid(fuhao+1).toDouble();
            string3.replace(fuhao+1, string3.size()-fuhao,QString::number(tem*tem,'f',2));
            ui->textEdit->setPlainText(string3);     //此时光标自动回到初始位置

            QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
        }
        fuhao2=0;
    }
}

void MainWindow::on_buttonsqrt_clicked()  //开方
{
    //与取导数实现方式一致
    QString string3;
    double tem=0;
    string3=ui->textEdit->toPlainText();
    if(fuhao!=-1||string3.size()>0)
    {
        if(fuhao!=string3.size())
        {
            tem=string3.mid(fuhao+1).toDouble();
            string3.replace(fuhao+1, string3.size()-fuhao,QString::number(sqrt(tem),'f',2));
            ui->textEdit->setPlainText(string3);     //此时光标自动回到初始位置

            QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
            cursor.movePosition(QTextCursor::End);
            ui->textEdit->setTextCursor(cursor);
        }
    }
}

void MainWindow::on_buttonchu_clicked()  //除号
{
    //与加号实现方式一致
    QString string2;
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("/");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("0/");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
    string2=ui->textEdit->toPlainText();
    fuhao=string2.size()-1;
}

void MainWindow::on_pushButton_clicked()   //左括号
{
    //与数字字符实现方式一致
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("(");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("(");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonyoukuohao_clicked()  //右括号
{
    //与数字字符实现方式一致
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText(")");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText(")");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonpi_clicked()  //Π（派）
{
    //与数字字符实现方式一致
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("Π");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("Π");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}

void MainWindow::on_buttonjiecheng_clicked() //阶乘
{
    //与数字字符实现方式一致
    if(fuhao2==1)
    {
        ui->textEdit->insertPlainText("!");
    }
    else if(fuhao2==0)
    {
        ui->textEdit->setPlainText("!");
        fuhao2=1;

        QTextCursor cursor=ui->textEdit->textCursor();   //将光标移动到文本末尾
        cursor.movePosition(QTextCursor::End);
        ui->textEdit->setTextCursor(cursor);
    }
}
