#include <iostream>
#include <Rocky.h>


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