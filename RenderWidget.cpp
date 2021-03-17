//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 24.02.2021
//


#include "RenderWidget.h"
#include<qwidget.h>


#include <QPainter>
#include <math.h>
#include <qt_windows.h>
#include <math.h>
#include <QtCore/qmath.h>



RenderWidget::RenderWidget(QWidget *parent) : QWidget(parent)
{
  // to be implemeted later
}

QSize RenderWidget::minimumSizeHint() const
{
  return QSize(100, 100);
}

QSize RenderWidget::sizeHint() const
{
  return QSize(600, 600);
}

void RenderWidget::paintEvent(QPaintEvent *)
{
	myDrawLine(20, 50, 190, 190);


	ARC(80,80, 150);
	



	circle(100, 100, 100);


	mydrwhorizontal_line(250,450, 440, 450);
	mydrwvertical_line(250, 440, 440, 450);
	mydrwhorizontal_line(250, 440, 440, 450);
	mydrwvertical_line(440, 440, 440, 450);
	circle(350, 430, 5);
	halfcircle(350, 450, 50);


	thred(325,322,80);

	
	mydrwhorizontal_line(230, 373, 298, 400);
	mydrwhorizontal_line(230, 363, 298, 400);

	mydrwvertical_line(230, 363, 298, 372);
	mydrwvertical_line(298, 364, 298, 372);
	ARC(337,305,70);
 
	myDrawLine(190, 50, 20, 190);
 
  
}

void RenderWidget::myDrawLine(float x1,float y1,float x2,float y2){

	QPainter painter(this);
	int dx, dy, p, y, x;
	dx = x2 - x1;
	dy = y2 - y1;
	x = x1;
	y = y1;

	QColor color(255, 0, 0);
	painter.setPen(color);

	p = 2 * dy - dx;
	for (int x = x1+1; x <=x2; ++x)
	{
		if (p < 0) {
			painter.drawPoint(x, y);
			p = p = 2 * dy;
		}
		else
		{
			y = y + 1;
			painter.drawPoint(x, y);
			p = p + 2 * dx;
		}


	}



}


void RenderWidget::circle(float xc, float yc, float r)
{
	QPainter painter(this);

	QColor color(0, 0, 255);
	painter.setPen(color);

	for (int i = 0; i <= 360; i++) {
		float theta = (i * 3.14) / 180;
		float x = (float)(xc + (r * cos(theta)));
		float y = (float)(yc + (r * sin(theta)));

		painter.drawPoint(x, y);



	}
}





void RenderWidget::ARC(float xc, float yc, float r)
{
	QPainter painter(this);


	for (int i = 0; i <= 30; i++) {
		float theta = (i * 3.14) / 360;
		float x = (float)(xc + (r * cos(theta)));
		float y = (float)(yc + (r * sin(theta)));

		painter.drawPoint(x, y);



	}






}

void RenderWidget::mydrwhorizontal_line(float x1, float y1, float x2, float y2)
{
	QPainter painter(this);
	for (int i = x1; i <= x2; ++i)
		painter.drawPoint(i, round(y1));
}

void RenderWidget::mydrwvertical_line(float x1, float y1, float x2, float y2)
{
	QPainter painter(this);
	for (int i = y1; i <= y2; ++i)
		painter.drawPoint(round(x1), i);
}

void RenderWidget::halfcircle(float xc, float yc, float r)
{
	QPainter painter(this);

	QColor color(0, 0, 255);
	painter.setPen(color);

	for (int i = 360; i >= 180; i--) {
		float theta = (i * 3.14) / 180;
		float x = (float)(xc + (r * cos(theta)));
		float y = (float)(yc + (r * sin(theta)));

		painter.drawPoint(x, y);



	}
}

void RenderWidget::thred(float xc, float yc, float r)
{

	QPainter painter(this);


	for (int i = 0; i <= 280; i++) {
		float theta = (i * 3.14) / 360;
		float x = (float)(xc + (r * cos(theta)));
		float y = (float)(yc + (r * sin(theta)));
		

		painter.drawPoint(x, y);



	}

}
















