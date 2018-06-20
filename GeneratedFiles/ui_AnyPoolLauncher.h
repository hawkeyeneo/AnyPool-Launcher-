/********************************************************************************
** Form generated from reading UI file 'AnyPoolLauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANYPOOLLAUNCHER_H
#define UI_ANYPOOLLAUNCHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnyPoolLauncherClass
{
public:
    QPushButton *GraftButton;
    QPushButton *SumokoinButton;
    QPushButton *StelliteButton;
    QPushButton *MasariButton;
    QPushButton *HavenButton;
    QPushButton *Quitter;
    QLabel *Logo;
    QPushButton *TBGraft;
    QPushButton *StatGraft;
    QPushButton *TBSumokoin;
    QPushButton *StatSumokoin;
    QPushButton *TBStellite;
    QPushButton *StatStellite;
    QPushButton *TBMasari;
    QPushButton *StatMasari;
    QPushButton *TBHaven;
    QPushButton *StatHaven;
    QPushButton *PGraft;
    QPushButton *PSumokoin;
    QPushButton *PStellite;
    QPushButton *PMasari;
    QPushButton *PHaven;

    void setupUi(QWidget *AnyPoolLauncherClass)
    {
        if (AnyPoolLauncherClass->objectName().isEmpty())
            AnyPoolLauncherClass->setObjectName(QStringLiteral("AnyPoolLauncherClass"));
        AnyPoolLauncherClass->resize(718, 423);
        QIcon icon;
        icon.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/Deathstroke.png"), QSize(), QIcon::Normal, QIcon::Off);
        AnyPoolLauncherClass->setWindowIcon(icon);
        GraftButton = new QPushButton(AnyPoolLauncherClass);
        GraftButton->setObjectName(QStringLiteral("GraftButton"));
        GraftButton->setGeometry(QRect(20, 130, 111, 111));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/GraftLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GraftButton->setIcon(icon1);
        GraftButton->setIconSize(QSize(100, 100));
        SumokoinButton = new QPushButton(AnyPoolLauncherClass);
        SumokoinButton->setObjectName(QStringLiteral("SumokoinButton"));
        SumokoinButton->setGeometry(QRect(160, 130, 111, 111));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/SumokoinLogo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        SumokoinButton->setIcon(icon2);
        SumokoinButton->setIconSize(QSize(100, 100));
        StelliteButton = new QPushButton(AnyPoolLauncherClass);
        StelliteButton->setObjectName(QStringLiteral("StelliteButton"));
        StelliteButton->setGeometry(QRect(300, 130, 111, 111));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/StelliteLogo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        StelliteButton->setIcon(icon3);
        StelliteButton->setIconSize(QSize(100, 100));
        MasariButton = new QPushButton(AnyPoolLauncherClass);
        MasariButton->setObjectName(QStringLiteral("MasariButton"));
        MasariButton->setGeometry(QRect(440, 130, 111, 111));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/MAsariLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MasariButton->setIcon(icon4);
        MasariButton->setIconSize(QSize(100, 100));
        HavenButton = new QPushButton(AnyPoolLauncherClass);
        HavenButton->setObjectName(QStringLiteral("HavenButton"));
        HavenButton->setGeometry(QRect(580, 130, 111, 111));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/AnyPoolLauncher/Resources/Haven Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        HavenButton->setIcon(icon5);
        HavenButton->setIconSize(QSize(100, 100));
        Quitter = new QPushButton(AnyPoolLauncherClass);
        Quitter->setObjectName(QStringLiteral("Quitter"));
        Quitter->setGeometry(QRect(600, 380, 101, 31));
        Logo = new QLabel(AnyPoolLauncherClass);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(180, 20, 371, 81));
        Logo->setFrameShape(QFrame::NoFrame);
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/AnyPoolLauncher/Resources/logoAnypool.png")));
        Logo->setScaledContents(true);
        TBGraft = new QPushButton(AnyPoolLauncherClass);
        TBGraft->setObjectName(QStringLiteral("TBGraft"));
        TBGraft->setGeometry(QRect(20, 260, 111, 31));
        StatGraft = new QPushButton(AnyPoolLauncherClass);
        StatGraft->setObjectName(QStringLiteral("StatGraft"));
        StatGraft->setGeometry(QRect(20, 300, 111, 31));
        TBSumokoin = new QPushButton(AnyPoolLauncherClass);
        TBSumokoin->setObjectName(QStringLiteral("TBSumokoin"));
        TBSumokoin->setGeometry(QRect(160, 260, 111, 31));
        StatSumokoin = new QPushButton(AnyPoolLauncherClass);
        StatSumokoin->setObjectName(QStringLiteral("StatSumokoin"));
        StatSumokoin->setGeometry(QRect(160, 300, 111, 31));
        TBStellite = new QPushButton(AnyPoolLauncherClass);
        TBStellite->setObjectName(QStringLiteral("TBStellite"));
        TBStellite->setGeometry(QRect(300, 260, 111, 31));
        StatStellite = new QPushButton(AnyPoolLauncherClass);
        StatStellite->setObjectName(QStringLiteral("StatStellite"));
        StatStellite->setGeometry(QRect(300, 300, 111, 31));
        TBMasari = new QPushButton(AnyPoolLauncherClass);
        TBMasari->setObjectName(QStringLiteral("TBMasari"));
        TBMasari->setGeometry(QRect(440, 260, 111, 31));
        StatMasari = new QPushButton(AnyPoolLauncherClass);
        StatMasari->setObjectName(QStringLiteral("StatMasari"));
        StatMasari->setGeometry(QRect(440, 300, 111, 31));
        TBHaven = new QPushButton(AnyPoolLauncherClass);
        TBHaven->setObjectName(QStringLiteral("TBHaven"));
        TBHaven->setGeometry(QRect(580, 260, 111, 31));
        StatHaven = new QPushButton(AnyPoolLauncherClass);
        StatHaven->setObjectName(QStringLiteral("StatHaven"));
        StatHaven->setGeometry(QRect(580, 300, 111, 31));
        PGraft = new QPushButton(AnyPoolLauncherClass);
        PGraft->setObjectName(QStringLiteral("PGraft"));
        PGraft->setGeometry(QRect(20, 340, 111, 31));
        PSumokoin = new QPushButton(AnyPoolLauncherClass);
        PSumokoin->setObjectName(QStringLiteral("PSumokoin"));
        PSumokoin->setGeometry(QRect(160, 340, 111, 31));
        PStellite = new QPushButton(AnyPoolLauncherClass);
        PStellite->setObjectName(QStringLiteral("PStellite"));
        PStellite->setGeometry(QRect(300, 340, 111, 31));
        PMasari = new QPushButton(AnyPoolLauncherClass);
        PMasari->setObjectName(QStringLiteral("PMasari"));
        PMasari->setGeometry(QRect(440, 340, 111, 31));
        PHaven = new QPushButton(AnyPoolLauncherClass);
        PHaven->setObjectName(QStringLiteral("PHaven"));
        PHaven->setGeometry(QRect(580, 340, 111, 31));

        retranslateUi(AnyPoolLauncherClass);

        QMetaObject::connectSlotsByName(AnyPoolLauncherClass);
    } // setupUi

    void retranslateUi(QWidget *AnyPoolLauncherClass)
    {
        AnyPoolLauncherClass->setWindowTitle(QApplication::translate("AnyPoolLauncherClass", "AnyPoolLauncher", nullptr));
        GraftButton->setText(QString());
        SumokoinButton->setText(QString());
        StelliteButton->setText(QString());
        MasariButton->setText(QString());
        HavenButton->setText(QString());
        Quitter->setText(QApplication::translate("AnyPoolLauncherClass", "Quitter", nullptr));
        Logo->setText(QString());
        TBGraft->setText(QApplication::translate("AnyPoolLauncherClass", "Tableau De Bord", nullptr));
        StatGraft->setText(QApplication::translate("AnyPoolLauncherClass", "Mes Statistiques", nullptr));
        TBSumokoin->setText(QApplication::translate("AnyPoolLauncherClass", "Tableau De Bord", nullptr));
        StatSumokoin->setText(QApplication::translate("AnyPoolLauncherClass", "Mes Statistiques", nullptr));
        TBStellite->setText(QApplication::translate("AnyPoolLauncherClass", "Tableau De Bord", nullptr));
        StatStellite->setText(QApplication::translate("AnyPoolLauncherClass", "Mes Statistiques", nullptr));
        TBMasari->setText(QApplication::translate("AnyPoolLauncherClass", "Tableau De Bord", nullptr));
        StatMasari->setText(QApplication::translate("AnyPoolLauncherClass", "Mes Statistiques", nullptr));
        TBHaven->setText(QApplication::translate("AnyPoolLauncherClass", "Tableau De Bord", nullptr));
        StatHaven->setText(QApplication::translate("AnyPoolLauncherClass", "Mes Statistique", nullptr));
        PGraft->setText(QApplication::translate("AnyPoolLauncherClass", "Mon Portefeuille", nullptr));
        PSumokoin->setText(QApplication::translate("AnyPoolLauncherClass", "Mon Portefeuille", nullptr));
        PStellite->setText(QApplication::translate("AnyPoolLauncherClass", "Mon Portefeuille", nullptr));
        PMasari->setText(QApplication::translate("AnyPoolLauncherClass", "Mon Portefeuille", nullptr));
        PHaven->setText(QApplication::translate("AnyPoolLauncherClass", "Mon Portefeuille", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnyPoolLauncherClass: public Ui_AnyPoolLauncherClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANYPOOLLAUNCHER_H
