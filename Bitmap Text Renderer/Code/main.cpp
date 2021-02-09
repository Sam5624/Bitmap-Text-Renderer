#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "TextRenderer.h"
#include "ColourPalette.h"

int main(){

	int windowWidth = 900;
	int windowHeight = 600;
	const char* windowTitle = "Title";

	glfwInit();

	GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, windowTitle, nullptr, nullptr);

	glfwMakeContextCurrent(window);

	glewInit();

	while (!glfwWindowShouldClose(window)) {
		glClearColor(GREY, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		RenderText(window, "Text");

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}