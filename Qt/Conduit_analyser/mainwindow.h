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
	void inputFileSelecter();
	void outputFileSelecter();
    void join_checkbox();
    void savepaths_checkbox();
    void on_radioButton_len_limit_toggled(bool checked);
    void on_radioButton_len_diam_limit_toggled(bool checked);
    void conduit_analyser();

private:
    Ui::MainWindow *ui;

public:
	QString inputFileName;
	QString outputFileName;

};

#endif // MAINWINDOW_H
