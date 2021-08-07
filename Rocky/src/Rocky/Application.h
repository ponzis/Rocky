//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_APPLICATION_H
#define ROCKY_APPLICATION_H

#include "Rocky/Core.h"
#include "Rocky/Events/Event.h"
#include "Rocky/Window.h"

namespace Rocky {

    class ROCKY_API Application {
    public:
        Application();

        virtual ~Application();

        void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be defined in CLIENT
    Application *CreateApplication();

}

#endif //ROCKY_APPLICATION_H
