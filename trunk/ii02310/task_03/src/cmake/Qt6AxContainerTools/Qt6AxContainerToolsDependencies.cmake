# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6AxContainerTools_FOUND FALSE)
set(__qt_AxContainerTools_tool_deps "")
foreach(__qt_AxContainerTools_target_dep ${__qt_AxContainerTools_tool_deps})
    list(GET __qt_AxContainerTools_target_dep 0 __qt_AxContainerTools_pkg)
    list(GET __qt_AxContainerTools_target_dep 1 __qt_AxContainerTools_version)

    if (NOT ${__qt_AxContainerTools_pkg}_FOUND)
        find_dependency(${__qt_AxContainerTools_pkg} ${__qt_AxContainerTools_version})
    endif()
endforeach()

set(Qt6AxContainerTools_FOUND TRUE)
