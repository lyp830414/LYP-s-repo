#include "QtGuiApplication1.h"
#include "pagenavigator.h"
QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	PageNavigator *qNevigator = new PageNavigator(100, this);
	
	qNevigator->setGeometry(62, 40, 800, 100);

	qNevigator->show();
}
