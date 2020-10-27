#include "pagina1.h"
#include "ui_pagina1.h"

pagina1::pagina1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pagina1)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
}

pagina1::~pagina1()
{
    delete ui;
}





void pagina1::on_pasar1_clicked()
{
    MainWindow *ventana1 = new MainWindow(this) ;
    ventana1-> show();
    hide();
}

void pagina1::on_niall_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/niall.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}

void pagina1::on_lucid_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/lucidDreams.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}

void pagina1::on_stop_clicked()
{
    player->stop();
}

void pagina1::on_volumen_sliderMoved(int position)
{
    player->setVolume(position);
}
