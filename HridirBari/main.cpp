#include<windows.h>
#include <GL/glut.h>
#include <iostream>
#include <cmath>

using namespace std;

float cloud1X = 800.0;
float cloud2X = 600.0;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	gluOrtho2D(0.0, 800.0, 0.0, 500.0);
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void greenField(void)
{
    glColor3f(0, 128, 0);
	glBegin(GL_QUADS);
        glVertex2i(0, 0);
        glVertex2i(0, 100);
        glVertex2i(800, 100);
        glVertex2i(800, 0);
    glEnd();
}

void sky(void)
{
    glColor3f(10/255.0, 251/255.0, 255/255.0);
	glBegin(GL_QUADS);
        glVertex2i(0, 100);
        glVertex2i(0, 500);
        glVertex2i(800, 500);
        glVertex2i(800, 100);
    glEnd();
}

void sun(void)
{
    glColor3f(251/255.0, 255/255.0, 0);
    circle(50, 50, 275, 375);
}

void clouds(void)
{
    glPushMatrix();
    glColor3f(1, 1, 1);
    circle(25, 35, cloud1X, 380);
    circle(25, 35, cloud1X + 35, 360);
    circle(25, 35, cloud1X + 60, 350);
    circle(25, 35, cloud1X + 90, 350);
    circle(25, 35, cloud1X + 120, 370);
    circle(20, 30, cloud1X + 10, 400);
    circle(30, 35, cloud1X + 25, 420);
    circle(25, 35, cloud1X + 60, 430);
    circle(30, 35, cloud1X + 90, 420);
    circle(25, 35, cloud1X + 120, 420);
    circle(25, 30, cloud1X + 140, 400);
    circle(35, 30, cloud1X + 30, 400);
    circle(35, 30, cloud1X + 60, 400);

    cloud1X -= 0.08;

    glPopMatrix();

    if(cloud1X > 1)
        glutPostRedisplay();
    else
        cloud1X = 800.0;
        glutPostRedisplay();

       glColor3f(1, 1, 1);
    circle(25, 35, cloud2X, 380);
    circle(25, 35, cloud2X + 35, 360);
    circle(25, 35, cloud2X + 60, 350);
    circle(25, 35, cloud2X + 90, 350);
    circle(25, 35, cloud2X + 120, 370);
    circle(20, 30, cloud2X + 10, 400);
    circle(30, 35, cloud2X + 25, 420);
    circle(25, 35, cloud2X + 60, 430);
    circle(30, 35, cloud2X + 90, 420);
    circle(25, 35, cloud2X + 120, 420);
    circle(25, 30, cloud2X + 140, 400);
    circle(35, 30, cloud2X + 30, 400);
    circle(35, 30, cloud2X + 60, 400);



}

void gach(void)
{


    //gacher body
    glColor3f(100 / 255.0, 102 / 255.0, 35 / 255.0);
	glBegin(GL_QUADS);
        glVertex2i(50, 160);
        glVertex2i(120, 170);
        glVertex2i(120, 70);
        glVertex2i(50, 70);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
    circle(25, 35, 0, 220);
    circle(25, 35, 0 + 35, 200);
    circle(25, 35, 0 + 60,190);
    circle(25, 35, 0 + 90, 190);
    circle(25, 35, 0 + 120, 210);
    circle(20, 30, 0 + 10, 240);
    circle(30, 35, 0 + 25, 260);
    circle(25, 35, 0 + 60, 270);
    circle(30, 35, 0 + 90, 260);
    circle(25, 35, 0 + 120, 260);
    circle(25, 30, 0 + 140, 240);
    circle(35, 30, 0 + 30, 240);
    circle(35, 30, 0 + 60, 240);
    circle(25, 35, 40, 220);
    circle(25, 35, 40 + 35, 290+30);
    circle(25, 35, 40 + 60, 190+60);
    circle(25, 35, 40 + 90, 190+ 90);
    circle(25, 35, 40 + 90, 210+ 120);
    circle(20, 30, 40 + 10, 240 + 10);
    circle(30, 35, 40 + 25, 220+ 25);
    circle(25, 35, 40 + 60, 200+ 60);
    circle(30, 35, 40 + 90, 220+ 90);
    circle(25, 35, 40 + 120, 220+ 120);
    circle(25, 30, 40 + 120, 190+ 120);
    circle(35, 30, 40 + 30, 240+ 30);
    circle(35, 30, 40 + 60, 240+ 60);
    circle(25, 35, 90, 220);
    circle(25, 35, 90 + 35, 200);
    circle(25, 35, 90 + 60, 190);
    circle(25, 35, 90 + 90, 190);
    circle(25, 35, 90 + 120, 210);
    circle(20, 30, 90 + 10, 240);
    circle(30, 35, 90 + 25, 270);
    circle(25, 35, 90 + 60, 270);
    circle(30, 35, 90 + 90, 260);
    circle(25, 35, 90 + 120, 260);
    circle(25, 30, 90 + 140, 240);
    circle(35, 30, 90 + 30, 240);
    circle(35, 30, 90 + 60, 240);


}

void bari(void)
{


    // kitchern
    glColor3f(204/255.0, 235/255.0, 70/255.0);
	glBegin(GL_QUADS);
        glVertex2i(280, 100);
        glVertex2i(280, 180);
        glVertex2i(400, 180);
        glVertex2i(400,100);
    glEnd();

    //kitchen Janala
    glColor3f(10/255.0, 251/255.0, 255/255.0);
	glBegin(GL_QUADS);
        glVertex2i(320, 150);
        glVertex2i(360, 150);
        glVertex2i(360,130);
        glVertex2i(320, 130);
    glEnd();

    //mainroom
    glColor3f(204/255.0, 235/255.0, 70/255.0);
	glBegin(GL_QUADS);
        glVertex2i(401, 180);
        glVertex2i(610, 180);
        glVertex2i(610, 100);
        glVertex2i(401,100);
    glEnd();

    //mainroom janalaOne
    glColor3f(10/255.0, 251/255.0, 255/255.0);
	glBegin(GL_QUADS);
        glVertex2i(410, 150);
        glVertex2i(410, 130);
        glVertex2i(450,130);
        glVertex2i(450, 150);
    glEnd();

    // dorja
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
        glVertex2i(480, 150);
        glVertex2i(530, 150);
        glVertex2i(530,100);
        glVertex2i(480, 100);

    glEnd();

    //mainroom janalaTwo
    glColor3f(10/255.0, 251/255.0, 255/255.0);
	glBegin(GL_QUADS);
        glVertex2i(560, 150);
        glVertex2i(600, 150);
        glVertex2i(600, 130);
        glVertex2i(560, 130);
    glEnd();




    // chad main
    glColor3f(21/255.0, 134/255.0, 209/255.0);
	glBegin(GL_QUADS);
        glVertex2i(351, 250);
        glVertex2i(570, 250);
        glVertex2i(660, 180);
        glVertex2i(240, 180);
    glEnd();


  /*//chad kitchen
    glColor3f(20/255.0, 134/255.0, 209/255.0);
	glBegin(GL_QUADS);
        glVertex2i(350, 250);
        glVertex2i(440, 180);
        glVertex2i(240, 180);
    glEnd();*/

}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	greenField();
	sky();
	sun();
	clouds();
    gach();
	bari();


glFlush();

}

int main(int argc, char* argv[])
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(0, 0);
	glutInitWindowSize(800, 500);
	glutCreateWindow("Hridis Home");

	init();
	glutDisplayFunc(drawShapes);
	glutMainLoop();

	return 0;
}
