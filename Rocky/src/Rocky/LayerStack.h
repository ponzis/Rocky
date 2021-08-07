//
// Created by Jan on 8/7/2021.
//

#ifndef ROCKY_LAYERSTACK_H
#define ROCKY_LAYERSTACK_H

#include "Rocky/Core.h"
#include "Rocky/Layer.h"

#include <vector>

namespace Rocky {

    class ROCKY_API LayerStack {
    public:
        LayerStack();

        ~LayerStack();

        void PushLayer(Layer *layer);

        void PushOverlay(Layer *overlay);

        void PopLayer(Layer *layer);

        void PopOverlay(Layer *overlay);

        std::vector<Layer *>::iterator begin() { return m_Layers.begin(); }

        std::vector<Layer *>::iterator end() { return m_Layers.end(); }

    private:
        std::vector<Layer *> m_Layers;
        std::vector<Layer *>::iterator m_LayerInsert;
    };

}


#endif //ROCKY_LAYERSTACK_H
