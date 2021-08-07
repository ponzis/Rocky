//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_KEYEVENT_H
#define ROCKY_KEYEVENT_H

#include "Rocky/Event.h"

namespace Rocky {

    class ROCKY_API KeyEvent : public Event {
    public:
        inline int GetKeyCode() const { return m_KeyCode; }

        EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

    protected:
        KeyEvent(int keycode) : m_KeyCode(keycode) {}

        int m_KeyCode;
    };

    class ROCKY_API KeyPressedEvent : public KeyEvent {
        public:
            KeyPressedEvent(int keycode, int repeatCount) : KeyEvent(keycode), m_RepeatCount(repeatCount) {}

            inline int GetRepeatCount() const { return m_RepeatCount; }

            std::string ToString() const

            override {
                std::stringstream ss;
                ss << "KeyPressedEvent: " << m_KeyCode << " (" << m_RepeatCount << " repeats)";
                return ss.str();
            }

        EVENT_CLASS_TYPE(KeyPressed)

        private:
            int m_RepeatCount;
    };

    class ROCKY_API KeyReleasedEvent : public KeyEvent {
        public:
            KeyReleasedEvent(int keycode) : KeyEvent(keycode) {}

            std::string ToString() const

            override {
                std::stringstream ss;
                ss << "KeyReleasedEvent: " << m_KeyCode;
                return ss.str();
            }
            EVENT_CLASS_TYPE(KeyReleased)
    };

}

#endif //ROCKY_KEYEVENT_H
