#include "AnyPoolLauncher.h"
#include <QProcess>
#include <QDesktopServices>
#include <QUrl>


AnyPoolLauncher::AnyPoolLauncher(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.Quitter, SIGNAL(clicked()), qApp, SLOT(quit()));
	QObject::connect(ui.GraftButton, SIGNAL(clicked()), this, SLOT(ouvrirGraft()));
	QObject::connect(ui.SumokoinButton, SIGNAL(clicked()), this, SLOT(ouvrirSumokoin()));
	QObject::connect(ui.StelliteButton, SIGNAL(clicked()), this, SLOT(ouvrirStellite()));
	QObject::connect(ui.MasariButton, SIGNAL(clicked()), this, SLOT(ouvrirMasari()));
	QObject::connect(ui.HavenButton, SIGNAL(clicked()), this, SLOT(ouvrirHaven()));
	QObject::connect(ui.TBGraft, SIGNAL(clicked()), this, SLOT(TableauBGraft()));
	QObject::connect(ui.TBSumokoin, SIGNAL(clicked()), this, SLOT(TableauBSumokoin()));
	QObject::connect(ui.TBStellite, SIGNAL(clicked()), this, SLOT(TableauBStellite()));
	QObject::connect(ui.TBMasari, SIGNAL(clicked()), this, SLOT(TableauBMasari()));
	QObject::connect(ui.TBHaven, SIGNAL(clicked()), this, SLOT(TableauBHaven()));
	QObject::connect(ui.StatGraft, SIGNAL(clicked()), this, SLOT(StatBGraft()));
	QObject::connect(ui.StatSumokoin, SIGNAL(clicked()), this, SLOT(StatBSumokoin()));
	QObject::connect(ui.StatStellite, SIGNAL(clicked()), this, SLOT(StatBStellite()));
	QObject::connect(ui.StatMasari, SIGNAL(clicked()), this, SLOT(StatBMasari()));
	QObject::connect(ui.StatHaven, SIGNAL(clicked()), this, SLOT(StatBHaven()));
	QObject::connect(ui.PGraft, SIGNAL(clicked()), this, SLOT(PBGraft()));
	QObject::connect(ui.PSumokoin, SIGNAL(clicked()), this, SLOT(PBSumokoin()));
	QObject::connect(ui.PStellite, SIGNAL(clicked()), this, SLOT(PBStellite()));
	QObject::connect(ui.PMasari, SIGNAL(clicked()), this, SLOT(PBMasari()));
	QObject::connect(ui.PHaven, SIGNAL(clicked()), this, SLOT(PBHaven()));
}


void AnyPoolLauncher::ouvrirGraft()
{
	//C:/Users/quent/Desktop/AnyPool Launcher/AnyPool Launcher/
	/*QProcess::startDetached("C:\\Users\\quent\\Desktop\\AnyPool Launcher\\AnyPool Launcher\\Graft\\xmr-stak.exe"); */
	QDesktopServices::openUrl(QUrl("file:///C:/Anypool Launcher/Graft/xmr-stak.exe")); // Permet D'ouvir un fichier ou un .exe 
}

void AnyPoolLauncher::ouvrirSumokoin()
{
	//QProcess::startDetached("\\Sumokoin\\xmr-stak.exe");
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/Sumokoin/xmr-stak.exe"));
}

void AnyPoolLauncher::ouvrirStellite()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/Stellite/xmr-stak.exe"));
}

void AnyPoolLauncher::ouvrirMasari()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/Masari/xmr-stak.exe"));
}

void AnyPoolLauncher::ouvrirHaven()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/Haven/xmr-stak.exe"));
}

void AnyPoolLauncher::TableauBGraft()
{
	QDesktopServices::openUrl(QUrl("https://graft.anypool.fr/"));
}

void AnyPoolLauncher::TableauBSumokoin()
{
	QDesktopServices::openUrl(QUrl("https://ryo.anypool.fr/"));
}

void AnyPoolLauncher::TableauBStellite()
{
	QDesktopServices::openUrl(QUrl("https://stellite.anypool.fr/"));
}

void AnyPoolLauncher::TableauBMasari()
{
	QDesktopServices::openUrl(QUrl("https://masari.anypool.fr/"));
}

void AnyPoolLauncher::TableauBHaven()
{
	QDesktopServices::openUrl(QUrl("https://haven.anypool.fr/"));
}

void AnyPoolLauncher::StatBGraft()
{
	QDesktopServices::openUrl(QUrl("https://graft.anypool.fr/#worker_stats"));
}

void AnyPoolLauncher::StatBSumokoin()
{
	QDesktopServices::openUrl(QUrl("https://ryo.anypool.fr/#worker_stats"));
}

void AnyPoolLauncher::StatBStellite()
{
	QDesktopServices::openUrl(QUrl("https://stellite.anypool.fr/#worker_stats"));
}

void AnyPoolLauncher::StatBMasari()
{
	QDesktopServices::openUrl(QUrl("https://masari.anypool.fr/#worker_stats"));
}

void AnyPoolLauncher::StatBHaven()
{
	QDesktopServices::openUrl(QUrl("https://haven.anypool.fr/#worker_stats"));
}

void AnyPoolLauncher::PBGraft()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/GarftPorteFeuille/GraftWallet/GraftWallet.exe"));
}

void AnyPoolLauncher::PBSumokoin()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/SumokoinPortefeuille/RyoGUIWallet.exe"));
}

void AnyPoolLauncher::PBStellite()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/StellitePortefeuille/stellite-wallet-gui.exe"));
}

void AnyPoolLauncher::PBMasari()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/MasariPortefeuille/masari-wallet-gui.exe"));
}

void AnyPoolLauncher::PBHaven()
{
	QDesktopServices::openUrl(QUrl("file:///C:/AnyPool Launcher/HavenPortefeuille/haven-wallet-gui.exe"));
}