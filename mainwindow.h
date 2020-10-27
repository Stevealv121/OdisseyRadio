#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>
//#include <dialog.h>
#include <pagina1.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_sunflower_clicked();

    //void on_positionChanged(qint64 position);

    //void on_durationChanged(qint64 position);

    void on_stop_clicked();

    void on_pasar2_clicked();

    void on_goosebumps_clicked();

   // void on_all_clicked();

   // void on_alone_clicked();


    // void on_positionChanged(qint64 position);

    // void on_durationChanged(qint64 position);

    void on_volumen_sliderMoved(int position);


    void on_progress_sliderMoved(int position);

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
};
#endif // MAINWINDOW_H
