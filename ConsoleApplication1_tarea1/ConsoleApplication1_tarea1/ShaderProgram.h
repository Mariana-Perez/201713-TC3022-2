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
#include <vector>
#include <memory>
#include "Shader.h"

class ShaderProgram
{
	public:
		ShaderProgram();
		~ShaderProgram();
		
		void CreateProgram();
		void AttachShader(std::string name, GLenum type);
		void LinkProgram();
		
		void Activate();
		void Deactivate();
		
		void SetAttribute(GLuint locationIndex, std::string name);
		void SetUniformf(std::string name, float value);
		void SetUniformf(std::string name, float x, float y);
		void SetUniformf(std::string name, float x, float y, float z);
		void SetUniformf(std::string name, float x, float y, float z, float w);
		
			private:
				void DeleteAndDetachShaders();
				void DeleteProgram();
				
				GLuint _programHandle;
				std::vector<std::unique_ptr<Shader>> _attachedShaders;
};