# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6ScxmlTools_FOUND FALSE)
set(__qt_ScxmlTools_tool_deps "")
foreach(__qt_ScxmlTools_target_dep ${__qt_ScxmlTools_tool_deps})
    list(GET __qt_ScxmlTools_target_dep 0 __qt_ScxmlTools_pkg)
    list(GET __qt_ScxmlTools_target_dep 1 __qt_ScxmlTools_version)

    if (NOT ${__qt_ScxmlTools_pkg}_FOUND)
        find_dependency(${__qt_ScxmlTools_pkg} ${__qt_ScxmlTools_version})
    endif()
endforeach()

set(Qt6ScxmlTools_FOUND TRUE)
