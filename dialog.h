#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QDebug>
#include <mainwindow.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_play_clicked();

    void on_stop_clicked();

    void on_pasar1_clicked();

private:
    Ui::Dialog *ui;
    QMediaPlayer* player;
};

#endif // DIALOG_H
