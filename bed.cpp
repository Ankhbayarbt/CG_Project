# include "bed.h"

void Bed :: drawBed() {


    glBegin(GL_QUADS);

    //Front
    //
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-4, 1, -10);
    glVertex3f(4, 1, -10);
    glVertex3f(4, 1, 0);
    glVertex3f(-4, 1, 0);

    //Back
    //;
    glColor3f(0.85,0.85,0.85);
    glVertex3f(-4, 1, 0);
    glVertex3f(4, 1, 0);
    glVertex3f(4, 0, 0);
    glVertex3f(-4, 0, 0);
//
//    //Right
//    //
    glColor3f(0.80,0.80,0.80);
    glVertex3f(-4, 1, 0);
    glVertex3f(-4, 0, 0);
    glVertex3f(-4, 0, -10);
    glVertex3f(-4, 1, -10);
//
//
//    //Left
    glColor3f(0.80,0.80,0.80);
    glVertex3f(4, 1, 0);
    glVertex3f(4, 0, 0);
    glVertex3f(4, 0, -10);
    glVertex3f(4, 1, -10);
//
    
    //Pillow1
    //Front
    //
    glColor3f(0.6,0.4,0.2);
    glVertex3f(-3, 1.4, -10);
    glVertex3f(-0.5, 1.4, -10);
    glVertex3f(-0.5, 1.4, -9);
    glVertex3f(-3, 1.4, -9);

    //Back
    //;
    glColor3f(0.65,0.4,0.2);
    glVertex3f(-3, 1.4, -9);
    glVertex3f(-0.5, 1.4, -9);
    glVertex3f(-0.5, 1, -9);
    glVertex3f(-3, 1, -9);
//
//   //Front
    //
    glColor3f(0.6,0.45,0.2);
    glVertex3f(-3, 1.4, -10);
    glVertex3f(-3, 1.4, -9);
    glVertex3f(-3, 1, -9);
    glVertex3f(-3, 1, -10);

    //Back
    //;
    glColor3f(0.6,0.45,0.2);
    glVertex3f(-0.5, 1.4, -10);
    glVertex3f(-0.5, 1.4, -9);
    glVertex3f(-0.5, 1, -9);
    glVertex3f(-0.5, 1, -10);
//
    
    //Pillow2
    //Front
    //
    glColor3f(0.6,0.4,0.2);
    glVertex3f(3, 1.4, -10);
    glVertex3f(0.5, 1.4, -10);
    glVertex3f(0.5, 1.4, -9);
    glVertex3f(3, 1.4, -9);

    //Back
    //;
    glColor3f(0.65,0.4,0.2);
    glVertex3f(3, 1.4, -9);
    glVertex3f(0.5, 1.4, -9);
    glVertex3f(0.5, 1, -9);
    glVertex3f(3, 1, -9);
//
//   //Front
    //
    glColor3f(0.6,0.45,0.2);
    glVertex3f(3, 1.4, -10);
    glVertex3f(3, 1.4, -9);
    glVertex3f(3, 1, -9);
    glVertex3f(3, 1, -10);

    //Back
    //;
    glColor3f(0.6,0.45,0.2);
    glVertex3f(0.5, 1.4, -10);
    glVertex3f(0.5, 1.4, -9);
    glVertex3f(0.5, 1, -9);
    glVertex3f(0.5, 1, -10);
    
    glEnd();
}
