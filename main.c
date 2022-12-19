#include <windows.h>
#include <gl/glut.h>
#include <gl/gl.h>

int cor =1;
//void ds = 0.0;
//float cor = 0.0;

void teclado (unsigned char tecla, int x, int y){
    switch (tecla){
        case '-': cor = 1; glutPostRedisplay(); break;
        case '+': cor = 2; glutPostRedisplay(); break;
    }
}

void init(){
glClearColor(1.0,1.0,1.0,1.0);}

void Desenha (void){

    glClear(GL_ACCUM_BUFFER_BIT);
    //glLoadIdentity();
    //glOrtho(-10.0,10.0,-10.0,10.0,-1.0,1.0);
    if (cor == 1)
        glColor3f (1.0f, 1.0f, 0.0f);
    else
        glColor3f (1.0f,0.0f, 1.0f);

    //glLoadIdentity(); glTranslatef(dx,0.0,0.0):
    glBegin (GL_POLYGON); //Fun��es OpenGL para Desenho
    glVertex2f (0,2);
    glVertex2f (0,-1);
    glVertex2f (2,0);
    glVertex2f (5,2);
    glEnd();
    /*if (cor == 1)
        glColor3f (1.0f, 1.0f, 0.0f);
    else
        glColor3f (1.0f, 1.0f, 0.0f);*/
    glFlush();
}

int main (int argc, char **argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
    glutInitWindowPosition(100,10);
    glutCreateWindow("Testing ...");
    init();
    glutDisplayFunc(Desenha);
    glutKeyboardFunc(teclado);
    glutMainLoop();
    return(0);
}
