#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class cbuiltindlg;
}
QT_END_NAMESPACE

class cbuiltindlg : public QDialog
{
    Q_OBJECT

public:
    cbuiltindlg(QWidget *parent = nullptr);
    ~cbuiltindlg();

private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
    QPushButton* colorPushBtna;
private slots:
    void doPushbtn();
    void doTextcolor();
};
#endif // CBUILTINDLG_H
