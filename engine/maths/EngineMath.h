#pragma once

#include <cmath>
#include "../../Dependencies/glm/glm.hpp"
#include "../../Dependencies/glm/gtc/matrix_transform.hpp"

#define PI 3.14159265

/*The following calculations are provided by glm:
	-cross (3D ONLY)
	-distance
	-dot
	-length (magnitude)
	-reflect
	-refract
*/

/* Notes:
	-) a x b != b x a (cross)(3D ONLY)
	-) a x b = -b x a (cross)(3D ONLY)
	-) a o b = b o a (componentProduct)
	-) a * b = b * a (scalar)
	-)scaledVector = this + v * s 
*/

/* Formulas:
	-) p_prime = p + deriv1_p * t; (for object not accelerating)
	-) deriv1_p_prime = deriv1_p + deriv2_p * t;
	-) p_prime = p + deriv1_p * t + deriv2_p * (t^2) / 2; (finding position if accelerating constantly)
*/

class EngineMath{
	public:
		static glm::vec2 absVec2(const glm::vec2 v); // COMPLETE
		static glm::vec2* calcHalfExtents(const float* vertices,glm::vec3* scale); // COMPLETE
		static glm::vec2 componentProduct(const glm::vec2* a, const glm::vec2* b); // COMPLETE
		static glm::vec3 componentProduct(const glm::vec3* a, const glm::vec3* b); // COMPLETE
		static glm::vec2 projectOnto(glm::vec2 v, glm::vec2 l); // TODO
		static glm::mat2 rotationMatrix(float r); // COMPLETE
		//theta returns the angle between two vectors
		static float theta(const glm::vec2* a, const glm::vec2* b); // COMPLETE
		static float theta(const glm::vec3* a, const glm::vec3* b); // COMPLETE
		
		
		
};