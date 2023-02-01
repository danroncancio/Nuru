#include "app.h"
#include "main.h"

Nuru::App *Nuru::CreateApp(int argc, char **argv) {
    Nuru::WindowParams params;
    // params.WIDTH = 1270;
    // params.HEIGHT = 720;
    params.title = "Nuru App Framework";

    auto* app = new Nuru::App(params);

    return app;
}