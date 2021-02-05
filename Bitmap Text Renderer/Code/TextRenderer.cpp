#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define print(x) std::cout << x << std::endl;

void RenderText(GLFWwindow* window, const char* text) {

	int windowWidth;
	int windowHeight;

	glfwGetWindowSize(window, &windowWidth, &windowHeight);

	print(windowWidth << "px, " << windowHeight << "px");  //Output window size
}