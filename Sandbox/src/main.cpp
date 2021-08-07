#include <iostream>
#include "Rocky.h"


class ExampleLayer : public Rocky::Layer {
public:
    ExampleLayer()
            : Layer("Example") {
    }

    void OnUpdate() override {
        ROCKY_INFO("ExampleLayer::Update");
    }

    void OnEvent(Rocky::Event &event) override {
        ROCKY_TRACE("{0}", event);
    }

};

class Sandbox : public Rocky::Application {
public:
    Sandbox() {
        ROCKY_INFO("Starting the application ");
        PushLayer(new ExampleLayer());
    }

    ~Sandbox() {
        ROCKY_INFO("Stopping the application ");
    }

};

Rocky::Application *Rocky::CreateApplication() {
    return new Sandbox();
}