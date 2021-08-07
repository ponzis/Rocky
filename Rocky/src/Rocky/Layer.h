//
// Created by Jan on 8/7/2021.
//

#ifndef ROCKY_LAYER_H
#define ROCKY_LAYER_H


#include "Rocky/Core.h"
#include "Rocky/Events/Event.h"

namespace Rocky {

    class ROCKY_API Layer {
    public:
        Layer(const std::string &name = "Layer");

        virtual ~Layer();

        virtual void OnAttach() {}

        virtual void OnDetach() {}

        virtual void OnUpdate() {}

        virtual void OnEvent(Event &event) {}

        inline const std::string &GetName() const { return m_DebugName; }

    protected:
        std::string m_DebugName;
    };

}

#endif //ROCKY_LAYER_H
