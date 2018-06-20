#pragma once

#include <QtWidgets/QWidget>
#include "ui_AnyPoolLauncher.h"
#include <QProcess>
#include <QDesktopServices>

class AnyPoolLauncher : public QWidget
{
	Q_OBJECT

public:
	AnyPoolLauncher(QWidget *parent = Q_NULLPTR);

public slots:
	void ouvrirGraft();
	void ouvrirSumokoin();
	void ouvrirStellite();
	void ouvrirMasari();
	void ouvrirHaven();
	void TableauBGraft();
	void TableauBSumokoin();
	void TableauBStellite();
	void TableauBMasari();
	void TableauBHaven();
	void StatBGraft();
	void StatBSumokoin();
	void StatBStellite();
	void StatBMasari();
	void StatBHaven();
	void PBGraft();
	void PBSumokoin();
	void PBStellite();
	void PBMasari();
	void PBHaven();


private:
	Ui::AnyPoolLauncherClass ui;
};
