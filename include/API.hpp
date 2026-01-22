#pragma once

#ifdef GEODE_IS_WINDOWS
#ifdef CW_TEMPLATE_API_EXPORTING
#define CW_TEMPLATE_API_DLL __declspec(dllexport)
#else
#define CW_TEMPLATE_API_DLL __declspec(dllimport)
#endif
#else
#ifdef CW_TEMPLATE_API_EXPORTING
#define CW_TEMPLATE_API_DLL __attribute__((visibility("default")))
#else
#define CW_TEMPLATE_API_DLL
#endif
#endif

namespace cheeseworks {
    inline static constexpr auto field = "gay!";
};