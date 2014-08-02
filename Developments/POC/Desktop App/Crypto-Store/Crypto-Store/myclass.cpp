#include "myclass.h"

MyClass::MyClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

MyClass::~MyClass()
{

}

//void MyClass::MyClick99()
//{
//	ui.pushButton_3->setText("sd");
//}