#version 330

in vec3 TexCoords;

out vec4 coloor;

uniform samplerCube skybox;

void main()
{
	coloor = texture(skybox, TexCoords);
}