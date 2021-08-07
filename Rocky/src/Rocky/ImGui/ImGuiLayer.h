//
// Created by Jan on 8/7/2021.
//

#ifndef ROCKY_IMGUILAYER_H
#define ROCKY_IMGUILAYER_H

#include "Rocky/Layer.h"

#include "Rocky/Events/ApplicationEvent.h"
#include "Rocky/Events/KeyEvent.h"
#include "Rocky/Events/MouseEvent.h"


namespace Rocky {

    class ROCKY_API ImGuiLayer : public Layer {
    public:
        ImGuiLayer();

        ~ImGuiLayer();

        void OnAttach();

        void OnDetach();

        void OnUpdate();

        void OnEvent(Event &event);

    private:
        float m_Time = 0.0f;
    };

}

#endif //ROCKY_IMGUILAYER_H
