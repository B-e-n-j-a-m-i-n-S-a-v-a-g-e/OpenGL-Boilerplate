#include "Light.h"



Light::Light()
{
	color = glm::vec3(1.0f, 1.0f, 1.0f);
	ambientIntensity = 1.0f;
}

Light::Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat ambientIntensity)
{
	color = glm::vec3(1.0f, 1.0f, 1.0f);
	ambientIntensity = 1.0f;
}

void Light::UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColorLocation)
{
	glUniform3f(ambientColorLocation, color.x, color.y, color.z);
	glUniform3f(ambientIntensityLocation, ambientIntensity);
}


Light::~Light()
{
}
