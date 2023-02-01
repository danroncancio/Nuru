#include "App.h"
#include "Main.h"

Nuru::App *Nuru::CreateApp(int argc, char **argv) {
    //Nuru::ApplicationSpecification spec;
    //spec.Name = "Nuru Example";

    auto* app = new Nuru::App();
    //app->PushLayer<ExampleLayer>();
    /*app->SetMenubarCallback([app]() {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("Exit")) {
                app->Close();
            }
            ImGui::EndMenu();
        }
    });*/
    return app;
}