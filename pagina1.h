#ifndef PAGINA1_H
#define PAGINA1_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>
#include <mainwindow.h>



namespace Ui {
class pagina1;
}

class pagina1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit pagina1(QWidget *parent = nullptr);
    ~pagina1();

private slots:



    void on_pasar1_clicked();

    void on_niall_clicked();

    void on_lucid_clicked();

    void on_stop_clicked();

    void on_volumen_sliderMoved(int position);

private:
    Ui::pagina1 *ui;
    QMediaPlayer* player;

};

#endif // PAGINA1_H
