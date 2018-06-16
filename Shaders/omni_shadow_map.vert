#version 330

layout (location = 0) in vec3 pos;

uniform mat4 model;

void main() 
{
	gl_position = model * vec(pos, 1.0);
}