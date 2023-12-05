# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6AxServerTools_FOUND FALSE)
set(__qt_AxServerTools_tool_deps "")
foreach(__qt_AxServerTools_target_dep ${__qt_AxServerTools_tool_deps})
    list(GET __qt_AxServerTools_target_dep 0 __qt_AxServerTools_pkg)
    list(GET __qt_AxServerTools_target_dep 1 __qt_AxServerTools_version)

    if (NOT ${__qt_AxServerTools_pkg}_FOUND)
        find_dependency(${__qt_AxServerTools_pkg} ${__qt_AxServerTools_version})
    endif()
endforeach()

set(Qt6AxServerTools_FOUND TRUE)
