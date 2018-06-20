#include "AnyPoolLauncher.h"
#include <QtWidgets/QApplication>
#include <QProcess>
#include <QDesktopServices>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AnyPoolLauncher w;
	w.show();
	return a.exec();
}
