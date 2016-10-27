#include "mafenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    //setFixedSize(250,150);

    //Boutons----------------------------------------------------

    //construction du bouton
    m_bouton = new QPushButton("Clique Moi");
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setToolTip("A tes risques et périls");
    m_bouton->move(100,100);

    //construction du bouton reset
    m_bouton1 = new QPushButton("0");
    m_bouton1->setFont(QFont("Comic Sans MS", 14));
    m_bouton1->setCursor(Qt::PointingHandCursor);
    m_bouton1->setToolTip("le zéro");
    m_bouton1->move(5,100);

    //Slider et progression---------------------------------------


//    m_lcd = new QLCDNumber(this);
//    m_lcd->setSegmentStyle(QLCDNumber::Flat);
//    m_lcd->move(50,20);

    m_slider = new QSlider(Qt::Horizontal);
    m_slider->setGeometry(10, 60, 150, 20);

    m_progress  = new QProgressBar();
    m_progress->move(50, 20);


    //SLOT-----------------------------------------------------

    //Quitter
    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Slider Move
    QObject::connect(m_slider, SIGNAL(valueChanged(int)),m_progress, SLOT(setValue(int)));

    //Reset
    QObject::connect(m_bouton1, SIGNAL(clicked()),this, SLOT(resetProg()));

    //LAYOUT----------------------------------------------------
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(m_progress,0,0,1,2);
    layout->addWidget(m_slider,1,0,1,2);
    layout->addWidget(m_bouton,2,1);
    layout->addWidget(m_bouton1,2,0);
    this->setLayout(layout);
    //test parceque je le vaut bien et oui



}
//Méthodes-------------------------------------------------

void MaFenetre::resetProg()
{
    m_slider->setValue(0);
    m_progress->reset();
}
