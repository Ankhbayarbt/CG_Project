#ifndef BED_H
#define BED_H

//#include <GL/glut.h>
//#include <GL/freeglut_ext.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

class Bed{

    public:
        void drawBed();
};



#endif
