#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

   // connect(player, &QMediaPlayer:: positionChanged, this, &MainWindow::on_positionChanged);
   // connect(player, &QMediaPlayer:: durationChanged, this, &MainWindow::on_durationChanged);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sunflower_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/sunflower.mp3"));
    player ->play();
    qDebug() <<player->errorString();

}

void MainWindow::on_stop_clicked()
{
    player -> stop();

}

void MainWindow::on_pasar2_clicked()
{

    pagina1 *ventana2 = new pagina1(this) ;
    ventana2-> show();
    hide();

}

void MainWindow::on_goosebumps_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/goosebumps.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}

/*
void MainWindow::on_all_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/all.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}


void MainWindow::on_alone_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/alone.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}

void MainWindow::on_positionChanged(qint64 position){


}

void MainWindow::on_durationChanged(qint64 position){


}
*/

void MainWindow::on_volumen_sliderMoved(int position)
{
    player -> setVolume(position);
}



void MainWindow::on_progress_sliderMoved(int position)
{
    player ->setPosition(position);

}
