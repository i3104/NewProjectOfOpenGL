#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    // to initialize GLFW
    if ( GL_FALSE == glfwInit() ) {
        // Error message
        std::cerr << "Can't initialize GLFW" << std::endl;
        return -1;
    }

    // to create a GLFW window
    GLFWwindow* const w( glfwCreateWindow( 640, 480, "Hello!", NULL, NULL));
    if ( NULL == w ) {
        // Error message
        std::cerr << "Can't create GLFW window." << std::endl;
        return -1;
    }

    // to bind OpenGL processing to created window
    glfwMakeContextCurrent(w);

    // to specify background color
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

    // main loop
    while ( glfwWindowShouldClose(w) == GL_FALSE ) {
        // to clrea color buffer in frame buffer
        glClear(GL_COLOR_BUFFER_BIT);

        //
        // TODO
        //

        // to swap w-buffer
        glfwSwapBuffers(w);

        // to wait for an event to occur
        glfwWaitEvents();
    }
}
