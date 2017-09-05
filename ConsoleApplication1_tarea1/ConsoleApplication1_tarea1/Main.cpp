/*******************
MATERIA: GRÁFICAS COMPUTACIONALES
FECHA: 23 AGOSTO 2017
AUTOR: A01376131 MARIANA PÉREZ SÁNCHEZ
********************/

#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>
#include "InputFile.h"



//Identificador del manager de VBOs para un conjunto de vertices
GLuint vao;


//Función que va a inicializar toda la memoria del programa
void Initialize()
{
	//Vamos a crear una lista que va a almacenar las posiciones en 2 dimensiones de un triángulo
	//Esto es en CPU Y RAM
	std::vector<glm::vec2> positions;
	positions.push_back(glm::vec2(-1.0f, -1.0f));
	positions.push_back(glm::vec2(1.0f, -1.0f));
	positions.push_back(glm::vec2(0.0f, 1.0f));

	//Vamos a crear una lista para almacenar colores RGB y esta lista está en CPU y RAM
	std::vector<glm::vec3> colors;
	//RGB ->ROJO
	colors.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	//RGB ->VERDE
	colors.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	//RGB ->AZUL
	colors.push_back(glm::vec3(0.0f, 0.0f, 1.0f));


	//Creamos un VAO y almacenamos el id en la variable vao
	//Este manager de VOBs
	glGenVertexArrays(1, &vao);
	//Le decimos a Open GL que lo queremos utilizar 
	//Todos los VBOs que creemos a partir de este punto y hasta que desactivemos este VAO,se van a asociar a este manager
	glBindVertexArray(vao);


	//Identificador del VBO de posiciones. Aqui lo vamos a almacenar
	GLuint positionsVBO;
	//Creamos un VBO y almacenamos el id en la variable positions VBO 
	glGenBuffers(1, &positionsVBO);
	//E DECIMOS A openGL que lo queremos utilizar como atributo
	glBindBuffer(GL_ARRAY_BUFFER, positionsVBO);
	//Asignamos los datos al buffer y los mamdamos a la tarjeta de video
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2)*positions.size(),
		positions.data(), GL_STATIC_DRAW);
	//Quiero activar el atributo con indice 0 en la tarjeta de video
	glEnableVertexAttribArray(0);
	//CONFIGURAMOS EL ATRIBUTO CON INDICE 0 EN LA TARJETA DE VIDEO
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	//Desactivamos el uso del VBO de posiciones.
	glBindBuffer(GL_ARRAY_BUFFER, 0);


	GLuint colorsVBO;
	glGenBuffers(1, &colorsVBO);
	glBindBuffer (GL_ARRAY_BUFFER, colorsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3)*colors.size(),
		positions.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);




	//Ya no quiero utilizar el VAO ya no se asociaran más VBOs a este VAO;
	glBindVertexArray(0);

}

void MainLoop()
{
	//Borramos el buffer de color y profundidades siempre al inicio de un nuevo frame
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//Paso 1:

	//Paso 2:Activar un VAO
	glBindVertexArray(vao);
	//Paso 3:Dibujamos
	glDrawArrays(GL_TRIANGLES, 0, 3);
	//Paso 4: Desactivamos el VAO
	glBindVertexArray(0);

	//Paso 5:
	
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
	glutInitContextProfile(GLUT_CORE_PROFILE);
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

	//Configurar la memoria que la aplicación va a necesitar.
	Initialize();


	//Iniciamos la aplicación gráfica.El main se oausará en esta línea hasta que se cierre la ventana de OpenGl
	glutMainLoop();

	return 0;






}




