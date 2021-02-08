#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
// clear background of current window
glClear(GL_COLOR_BUFFER_BIT);
// draw a filled polygon
glBegin(GL_POLYGON);
glVertex2i(75,85);
glVertex2i(20,40);
glVertex2i(130,40);
glEnd();
}
glFlush ();
void init(void)
{
//Clear background color to white
glClearColor (1.0, 1.0, 1.0, 0.0);
//change projection mode
glMatrixMode(GL_PROJECTION);
// set current matrix to identiy matrix
glLoadIdentity();
gluOrtho2D(0, 150.0, 0, 150.0);
}
int main(int argc, char** argv)
// Lab 1
// Sokchea
// Royal University of Phnom Penh
// Faculty of Engineering
{
glutInit(&argc,argv);
glutInitWindowSize (500,500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Simple Drawing");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
