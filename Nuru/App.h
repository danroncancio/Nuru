#ifndef NURU_APP_H
#define NURU_APP_H

#include <iostream>
#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <imgui.h>

namespace Nuru {
    class App {
    public:
        App();

        ~App();

    private:
        void Init();

        static void Destroy(GLFWwindow *window);

    public:
        static void Loop();

    private:
        const int32_t WIDTH = 800;
        const int32_t HEIGHT = 600;
        const char *title = "";
    };

    App *CreateApp(int argc, char **argv);
}

#endif //NURU_APP_H
