//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_ENTRYPOINT_H
#define ROCKY_ENTRYPOINT_H

#ifdef ROCKY_PLATFORM_WINDOWS

extern Rocky::Application *Rocky::CreateApplication();

int main(int argc, char **argv) {
    Rocky::Log::Init();
    ROCKY_CORE_WARN("Initialized Log!");
    int a = 5;
    ROCKY_INFO("Hello Log! Var={0}", a);

    auto app = Rocky::CreateApplication();
    app->Run();
    delete app;
}

#endif

#endif //ROCKY_ENTRYPOINT_H
