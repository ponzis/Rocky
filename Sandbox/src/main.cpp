#include <iostream>
#include "../../Rocky/src/Rocky.h"


class Sandbox : public Rocky::Application
        {
        public:
            Sandbox()
            {
                printf("Starting the application\n ");
            }

            ~Sandbox()
            {

            }

        };

Rocky::Application* Rocky::CreateApplication()
{
    return new Sandbox();
}