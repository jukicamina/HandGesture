#include<iostream>
#include<GL/glut.h>
#include <GL/freeglut_std.h>
#include <GL/gl.h>
#include <memory>
#include "skinTexture.c"
using namespace std;

double incr1 = 0.1;

class Model
{
	public:
		
		Model(){
			maxAngle = 90;
			Angle = 0;
		}

		virtual void drawThumbFinger() = 0;
		virtual void drawIndexFinger() = 0;
		virtual void drawMiddleFinger() = 0;
		virtual void drawRingFinger() = 0;
		virtual void drawPinkieFinger() = 0;
		
        void closing(){
			if(Angle < maxAngle)
				Angle += 5;
		}

		void opening(){
			if(Angle > 0)
				Angle -= 5;
		}

		double maxAngle = 90;
		double Angle;
};


class Finger : public Model
{
	public:
		Finger() : Model(){}

		void drawThumbFinger(){

			glPushMatrix();
			glTranslatef(-0.1, 0, 0);
			glutSolidSphere(-0.3, 10, 10);
			glPushMatrix();
			glRotatef((Angle + 10), 0, 1, 0);
		    glTranslatef(-0.6, 0, 0);
			glScalef(-1, 0.5, 0.25);
			glutSolidCube(1);
			glPushMatrix();
			glTranslatef(0.6, 0 ,0);
			glScalef(-1, 4, 4);
			glutSolidSphere(-0.2, 10, 10);
			glPushMatrix();
			glRotatef((Angle + 15) , 0, 1, 0);
			glTranslatef(-0.4, 0, 0);
			glScalef(-1, 0.25, 0.25);
			glutSolidCube(0.8);
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			}

			void drawIndexFinger(){
			glPushMatrix();
			glTranslatef(0, 0.15, 0);
			glutSolidSphere(0.27, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.45, 0);
			glScalef(0.5, 1, 0.25);
			glutSolidCube(1.1);
			glPushMatrix();
			glTranslatef(0, 0.6, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.18, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.5, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.8);
			glPushMatrix();
			glTranslatef(0, 0.5, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.16, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.4, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.6);
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			}
			
			void drawMiddleFinger(){
			glPushMatrix();
			glTranslatef(0, 0.15, 0);
			glutSolidSphere(0.3, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.6, 0);
			glScalef(0.5, 1, 0.25);
			glutSolidCube(1.35);
			glPushMatrix();
			glTranslatef(0, 0.6, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.2, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.6, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(1);
			glPushMatrix();
			glTranslatef(0, 0.6, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.16, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.4, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.6);
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
            }

			void drawRingFinger(){
			glPushMatrix();
			glTranslatef(0, 0.15, 0);
			glutSolidSphere(0.3, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.45, 0);
			glScalef(0.5, 1, 0.25);
			glutSolidCube(1.1);
			glPushMatrix();
			glTranslatef(0, 0.6, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.18, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.45, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.8);
			glPushMatrix();
			glTranslatef(0, 0.45, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.14, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.4, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.6);
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
            }

			void drawPinkieFinger(){
			glPushMatrix();
			glTranslatef(0, 0.07, 0);
			glutSolidSphere(0.23, 10, 8);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.38, 0);
			glScalef(0.5, 1, 0.25);
			glutSolidCube(0.9);
			glPushMatrix();
			glTranslatef(0, 0.3, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.16, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.4, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.77);
			glPushMatrix();
			glTranslatef(0, 0.3, 0);
			glScalef(4, 1, 4);
			glutSolidSphere(0.13, 10, 10);
			glPushMatrix();
			glRotatef(Angle, 1, 0, 0);
			glTranslatef(0, 0.3, 0);
			glScalef(0.25, 1, 0.25);
			glutSolidCube(0.5);
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
			glPopMatrix();
            }
		
};

class Light{

	private:
		GLfloat light_position[4] = {10.0, 10.0, -15.0, 0.0};
	    GLfloat light_diffuse[4] = {1.0, 0.902, 0.8902 , 1.0};

	public:
	void Draw(){

		glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
		glLightfv(GL_LIGHT0, GL_POSITION, light_position);

		glMaterialfv(GL_FRONT, GL_DIFFUSE, light_diffuse);

		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_COLOR_MATERIAL);

	}
};

class Texture 
{
	private:
		GLuint skinTexture;

	public:
    
	void TextureBegin(){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, skinTexture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, gimp_image.width, gimp_image.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, gimp_image.pixel_data);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	}
		
	void TextureEnd(){

	glDisable(GL_TEXTURE_2D);
	}

	void TextureInit(){

	glGenTextures(1, &skinTexture);
	glEnable(GL_TEXTURE_GEN_S);
	glEnable(GL_TEXTURE_GEN_T);
	}
	
};

class Camera{

	public:

		void DrawBegin(){
			glClear(GL_COLOR_BUFFER_BIT);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			gluPerspective(50.0, 1.0, 1.0, 12.0);
			glMatrixMode(GL_MODELVIEW);
			glLoadIdentity();
			gluLookAt(ex, ey, ez, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
		}
		
		void DrawEnd(){
			glutSwapBuffers();
		}
	    
		GLdouble ex = 0.0, ey = 0.0 , ez = 2.5;
};

class Hand{

	private:
		static std::auto_ptr<Model>Fingers[] ;
	    static Texture texture;
	  	static Light light;
		static Camera camera;

	public:
		void Init(){
			light.Draw();
			camera.DrawBegin();
			glClearColor(0.345, 0.5608, 0.3608, 0);
			glTranslatef(1.0, 0.0, -8.0);
			glRotatef(-20, 0, 1, 0);
			texture.TextureInit();
			}

		static void Display(){
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			texture.TextureBegin();
			glPushMatrix();
			glTranslatef(0, -1.5, 0);
			glScalef(0.85, 0.75, 0.1);
			glutSolidCube(4);
			glPopMatrix();
			glPushMatrix();
			glTranslatef(-1.75, -2, 0);
			Fingers[0]->drawThumbFinger();
			glPopMatrix();
			glPushMatrix();
			glTranslatef(-1.5, 0, 0);
   			Fingers[1]->drawIndexFinger();
			glPopMatrix();
			glPushMatrix();
			glTranslatef(-0.5, 0, 0);
    		Fingers[2]->drawMiddleFinger();
			glPopMatrix();
			glPushMatrix();
			glTranslatef(0.5, 0, 0);
			Fingers[3]->drawRingFinger();
			glPopMatrix();
			glPushMatrix();
			glTranslatef(1.4, 0, 0);
			Fingers[4]->drawPinkieFinger();
			glPopMatrix();

			texture.TextureEnd();
    		glFlush();
			}


		static void specialKeys(int key, int x, int y) {
  
  			switch (key) {
 				case GLUT_KEY_UP:
   				 glutIdleFunc(idle);
    			break;
 				case GLUT_KEY_DOWN:
   				 glutIdleFunc(NULL);
    			break;
  				default:
    			break;
				}
			
  			glutPostRedisplay();
			}

	    static void Keyboard(unsigned char key, int x, int y){
			switch(key){
				case 'u':
				case 'U':	
				for(int i = 0; i < 5; ++i)
				Fingers[i]->opening();
				break;
				case 'd':
				case 'D':
				for(int i = 0; i < 5; ++i)
			    Fingers[i]->closing();
				break;
				}
			glutPostRedisplay();
			}

	    static void idle(){
		
		    if(Fingers[1]->Angle  > 90){
			incr1 = -0.05;
		    }
		    if(Fingers[1]->Angle  < 0 ){
			incr1 = 0.05;
		    }
		
		for(int i = 0; i < 5;++i){
		Fingers[i]->Angle += incr1;
		}

	glutPostRedisplay();
	}
};

std::auto_ptr<Model> Hand::Fingers[] = {

	std::auto_ptr<Model>(new Finger()),
	std::auto_ptr<Model>(new Finger()),
	std::auto_ptr<Model>(new Finger()),
	std::auto_ptr<Model>(new Finger()),
	std::auto_ptr<Model>(new Finger())

};
Texture Hand::texture = Texture();
Light Hand::light = Light();
Camera Hand::camera = Camera();

int main(int argc, char *argv[]){

	Hand hand;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1100, 1100);
	glutInitWindowPosition(500, 500);
	glutCreateWindow("Amila_Dropic_Project: Hand Movement Animation");
	hand.Init();
	glutDisplayFunc(hand.Display);
	glutSpecialFunc(hand.specialKeys);
	glutKeyboardFunc(hand.Keyboard);
    glutIdleFunc(hand.idle);
	glutMainLoop();

}