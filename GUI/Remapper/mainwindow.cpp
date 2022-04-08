#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent, Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    float val   = ui->val->text().toFloat();
    float low1  = ui->low1->text().toFloat();
    float high1 = ui->high1->text().toFloat();
    float low2  = ui->low2->text().toFloat();
    float high2 = ui->high2->text().toFloat();
    float output = low2 + (val - low1) * (high2 - low2) / (high1 - low1);
    ui->output->setText(QString::number(output));
}


void MainWindow::on_Refresh_clicked()
{
    ui->val->setText("");
    ui->low1->setText("");
    ui->high1->setText("");
    ui->low2->setText("");
    ui->high2->setText("");
    ui->output->setText("Output");
    ui->val->setPlaceholderText("Value Input");
    ui->low1->setPlaceholderText("Low Value 1");
    ui->high1->setPlaceholderText("High Value 1");
    ui->low2->setPlaceholderText("Low Value 2");
    ui->high2->setPlaceholderText("High Value 2");
    ui->val->setFocus();
}


void MainWindow::on_high2_returnPressed()
{
    on_pushButton_clicked();
    ui->high2->clearFocus();
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button()){
        ui->val->clearFocus();
        ui->low1->clearFocus();
        ui->high1->clearFocus();
        ui->low2->clearFocus();
        ui->high2->clearFocus();
    }
}


