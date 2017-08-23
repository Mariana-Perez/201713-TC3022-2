/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/

#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

void MainLoop()
{
	//Borramos el buffer de color y profundidades siempre al inicio de un nuevo frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//!!Warning!!! Esto es OpenGL clásico y no lo vamos a volver a usar en todo el semestre.
	glBegin(GL_TRIANGLES);

	glColor3f(1.0F,0.0f,0.0f);
	glVertex2f(-1.0f,-1.0f);

	glColor3f(0.0F, 1.0f, 0.0f);
	glVertex2f(1.0f, -1.0f);

	glColor3f(0.0F, 0.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);

	glEnd();
	//Fin del WARNING
	//To do:RENDER
	//Intercambiar los buffer (el que se estaba rendereando con el que se estaba mostrando )
	glutSwapBuffers();
}


int main(int argc, char* argv[])
{
	//Inicializamos freeglut.
	//Freegluy se encanrga de generar ventanas y manejar ventanas
	//Utilizamos freeglut para crear una ventana donde vamos a dibujar
	glutInit(&argc,argv);
	//Tenemos que informar que queremos trabajar con el pipeline clasico
	//Eso es OpenGl viejito.
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
	//Freeglut nos permite configurar eventos que ocurren en la ventana
	//Un evento que nos interesa es cuando alguien cierrra la ventana.
	//En este caso, simplemete dejamos de renderear y terminamos el programa.
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
	//Configurando el framebuffer. En este caso estamos solicitando un buffer 
	//de color true color RGBA, un buffer de profundidad y un segundo buffer
	//para renderear(evitamos parpadeos al renderear).
	glutInitDisplayMode( GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	//Solicitamos una ventana de 400x400 pixeles
	glutInitWindowSize(400, 400);
	//Creamos y abrimos la ventana con un título personalizado
	glutCreateWindow("Hellow word OpenGL");

	//Asociar una función de render. Esta función se mandara a llamar dibujar un frame
	
	glutDisplayFunc(MainLoop);
	
	//Inicializamos GLEW. Esta libreria se encanga de obtener el API del OpenGl de nuestra tarjeta de video.Shame on You Microsoft
	glewInit();
	//Configurar OpenGL.Este es el color por default del buffer de color 
	//en el Framebuffer
	glClearColor(1.0f, 1.0f, 0.5f, 1.0f);

	//Iniciamos la aplicación gráfica.El main se oausará en esta línea hasta que se cierre la ventana de OpenGl
	glutMainLoop();

	return 0;


}




