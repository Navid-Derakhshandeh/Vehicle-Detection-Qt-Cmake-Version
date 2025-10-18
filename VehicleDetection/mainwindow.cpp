#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    carCascade.load("cars.xml");
    cap.open(""); //http://IP-Address/mjpg/video.mjpg
    connect(&timer, &QTimer::timeout, this, &MainWindow::readFrame);
    timer.start(30);
}

MainWindow::~MainWindow()
{
    delete ui;
    cap.release();
}
void MainWindow::readFrame() {
    cv::Mat frame;
    if (!cap.read(frame)) return;

    std::vector<cv::Rect> cars;
    carCascade.detectMultiScale(frame, cars, 1.2, 1);

    for (const auto& rect : cars) {
        cv::rectangle(frame, rect, cv::Scalar(0, 0, 255), 2);
    }

    carCount += cars.size();
    ui->labelCount->setText(QString::number(carCount));

    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);
    QImage img((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
    ui->labelVideo->setPixmap(QPixmap::fromImage(img));
}
