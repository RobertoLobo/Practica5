#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_btnACola_clicked();

    void on_btnAPila_clicked();

    void on_btnListar_clicked();

    void on_btnActualizar_clicked();

    void on_btnBuscar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
