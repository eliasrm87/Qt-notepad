#ifndef NOTEPADWINDOW_H
#define NOTEPADWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFileDialog>
#include <QFile>


class NotepadWindow : public QMainWindow
{
    Q_OBJECT

public:
    NotepadWindow(QWidget *parent = 0);
    ~NotepadWindow();

private slots:
    void alAbrir();
    void alGuardar();

private:
    QMenuBar*       mainMenu_;
    QMenu*          mnuArchivo_;
    QPlainTextEdit* txtEditor_;
    QAction*        actArchivoAbrir_;
    QAction*        actArchivoGuardar_;

};

#endif // NOTEPADWINDOW_H
