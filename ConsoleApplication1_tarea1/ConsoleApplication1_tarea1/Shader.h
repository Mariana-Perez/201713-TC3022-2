/*******************
MATERIA: GR�FICAS COMPUTACIONALES
FECHA: 20 Octubre 2017
AUTOR: A01376131 MARIANA P�REZ S�NCHEZ
********************/




#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <string>


class Shader 
{
public:
	Shader();
	~Shader();

	void  CreateShader( std::string path, GLenum type);
	GLuint GetHandle(); 



private:

	GLuint _shaderHandle;
	
};