#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once

#include <QMainWindow>
#include <QTimer>
#include <QImage>
#include <opencv2/opencv.hpp>

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
    ~MainWindow();
private slots:
    void readFrame();
    void readframe2();
private:
    Ui::MainWindow *ui;
    cv::VideoCapture cap;
    cv::VideoCapture cap1;
    QTimer timer;
    QTimer timer2;

    cv::CascadeClassifier carCascade;
    int carCount = 0;
    int carCount1 = 0;
};
#endif // MAINWINDOW_H
