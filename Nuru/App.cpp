#include "App.h"

GLFWwindow *window = nullptr;

namespace Nuru {
    App::App() {
        Init();
    }

    App::~App() {
        Destroy(window);
    }

    void App::Init() {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        window = glfwCreateWindow(WIDTH, HEIGHT, title, nullptr, nullptr);
        if (window == nullptr) {
            std::cout << "Failed to create a GLFW window" << std::endl;
            return;
        }

        glfwMakeContextCurrent(window);

        int version = gladLoadGL(glfwGetProcAddress);
        if (version == 0) {
            printf("Failed to initialize OpenGL context\n");
            return;
        }
    }

    void App::Destroy(GLFWwindow *window) {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void App::Loop() {
        while(!glfwWindowShouldClose(window)) {
            glfwPollEvents();

            glClearColor(0.3f, 0.7f, 0.5f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glfwSwapBuffers(window);
        }
    }
}
