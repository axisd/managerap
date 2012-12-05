/*  Author: Ramazanov Ruslan <lordrar@mail.ru>
	
	Code based on ideas from:
			Rykhlova Diana <rdis@bk.ru>
	
	This file is part of ManagerAP.

    ManagerAP is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ManagerAP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ManagerAP.  If not, see <http://www.gnu.org/licenses/>. */

#include <QtGui/QApplication>
#include <QTextCodec>

#include "mainwidget.h"

int main(int argc, char *argv[])
{    
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);

    Q_INIT_RESOURCE(imgres);

    QApplication a(argc, argv);
    MainWidget w;
    w.show();

    return a.exec();
}
