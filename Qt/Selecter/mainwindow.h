#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
	void inFileSelecter();
	void outFileSelecter();
    void selecter();
    void on_radioButton_diameter_changed();

private:
    Ui::MainWindow *ui;

public:
	QString infileName;
	QString outfileName;


};

#endif // MAINWINDOW_H
