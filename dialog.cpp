#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_play_clicked()
{
    player ->setMedia(QUrl("qrc:/songs/goosebumps.mp3"));
    player ->play();
    qDebug() <<player->errorString();
}

void Dialog::on_stop_clicked()
{
    player->stop();
}

void Dialog::on_pasar1_clicked()
{
    Dialog *ventana2 = new Dialog() ;
    ventana2-> show();
    //ventana2->setVisible(true);
}
