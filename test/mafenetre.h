#ifndef MAFENETRE
#define MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
#include <QGridLayout>

class MaFenetre : public QWidget
{
    Q_OBJECT

public:
    MaFenetre();

public slots:
    void resetProg();

private:
    QPushButton *m_bouton;
    QPushButton *m_bouton1;
    QLCDNumber *m_lcd;
    QProgressBar *m_progress;
    QSlider *m_slider;
    //bon, bon, et allez, et encore !
};




#endif // MAFENETRE

