//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_APPLICATION_H
#define ROCKY_APPLICATION_H

#include "Rocky/Core.h"

#include "Rocky/Window.h"
#include "Rocky/LayerStack.h"
#include "Rocky/Events/Event.h"
#include "Rocky/Events/ApplicationEvent.h"

namespace Rocky {

    class ROCKY_API Application {
    public:
        Application();

        virtual ~Application();

        void Run();

        void OnEvent(Event &e);

        void PushLayer(Layer *layer);

        void PushOverlay(Layer *layer);

    private:
        bool OnWindowClose(WindowCloseEvent &e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
    };

    // To be defined in CLIENT
    Application *CreateApplication();

}

#endif //ROCKY_APPLICATION_H
