#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(){

	int windowWidth = 900;
	int windowHeight = 600;
	const char* windowTitle = "Title";

	float bgColor[3] = { 0.2f, 0.4f, 0.8f }; //RGB

	glfwInit();

	GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, windowTitle, nullptr, nullptr);

	glfwMakeContextCurrent(window);

	glewInit();

	while (!glfwWindowShouldClose(window)) {
		glClearColor(bgColor[0], bgColor[1], bgColor[2], 0.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}
	glfwTerminate();

	return 0;
}