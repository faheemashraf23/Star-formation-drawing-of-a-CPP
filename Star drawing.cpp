#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 40.0, 0.0, 40.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);

   glColor3f(0, 0, 1);
   glBegin(GL_POLYGON);

   glVertex2i(21, 14);
   glVertex2i(25, 15);
   glVertex2i(21, 16);
   glVertex2i(20, 20);
   glVertex2i(19, 16);
   glVertex2i(15, 15);
   glVertex2i(19, 14);
   glVertex2i(20, 10);
   glEnd();

glColor3f(0, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(26, 19);
   glVertex2i(30, 20);
   glVertex2i(26, 21);
   glVertex2i(25, 25);
   glVertex2i(24, 21);
   glVertex2i(20, 20);
   glVertex2i(24, 19);
   glVertex2i(25, 15);
   glEnd();

   glColor3f(1, 0, 0);
   glBegin(GL_POLYGON);
   glVertex2i(21, 24);
   glVertex2i(25, 25);
   glVertex2i(21, 26);
   glVertex2i(20, 30);
   glVertex2i(19, 26);
   glVertex2i(15, 25);
   glVertex2i(19, 24);
   glVertex2i(20, 20);

   glEnd();

   glColor3f(1, 1, 0);
   glBegin(GL_POLYGON);
   glVertex2i(16, 19);
   glVertex2i(20, 20);
   glVertex2i(16, 21);
   glVertex2i(15, 25);
   glVertex2i(14, 21);
   glVertex2i(10, 20);
   glVertex2i(14, 19);
   glVertex2i(15, 15);
   glEnd();

   glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}