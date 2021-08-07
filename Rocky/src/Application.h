//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_APPLICATION_H
#define ROCKY_APPLICATION_H

#include "Core.h"

namespace Rocky {

    class ROCKY_API Application
            {
            public:
                Application();
                virtual ~Application();

                void Run();
            };

    // To be defined in CLIENT
    Application* CreateApplication();

}

#endif //ROCKY_APPLICATION_H
