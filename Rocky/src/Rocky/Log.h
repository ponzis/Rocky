//
// Created by Jan on 8/6/2021.
//

#ifndef ROCKY_LOG_H
#define ROCKY_LOG_H

#include "Rocky/Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Rocky {
    class ROCKY_API Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }

        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
}

//Core log macros
#define  ROCKY_CORE_TRACE(...)    ::Rocky::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define  ROCKY_CORE_INFO(...)     ::Rocky::Log::GetCoreLogger()->info(__VA_ARGS__)
#define  ROCKY_CORE_WARN(...)     ::Rocky::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define  ROCKY_CORE_ERROR(...)    ::Rocky::Log::GetCoreLogger()->error(__VA_ARGS__)
#define  ROCKY_CORE_FATAL(...)    ::Rocky::Log::GetCoreLogger()->fetal(__VA_ARGS__)


//Client log macros
#define  ROCKY_TRACE(...)         ::Rocky::Log::GetClientLogger()->trace(__VA_ARGS__)
#define  ROCKY_INFO(...)          ::Rocky::Log::GetClientLogger()->info(__VA_ARGS__)
#define  ROCKY_WARN(...)          ::Rocky::Log::GetClientLogger()->warn(__VA_ARGS__)
#define  ROCKY_ERROR(...)         ::Rocky::Log::GetClientLogger()->error(__VA_ARGS__)
#define  ROCKY_FATAL(...)         ::Rocky::Log::GetClientLogger()->fetal(__VA_ARGS__)

#endif //ROCKY_LOG_H