//
// Created by Jan on 8/6/2021.
//
#include "rockypch.h"
#include "Application.h"

#include "Rocky/Events/ApplicationEvent.h"
#include "Rocky/Log.h"

namespace Rocky {

    Application::Application()
    {
    }


    Application::~Application()
    {
    }

    void Application::Run()
    {
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication))
        {
            ROCKY_TRACE(e);
        }
        if (e.IsInCategory(EventCategoryInput))
        {
            ROCKY_TRACE(e);
        }

        while (true);
    }
}