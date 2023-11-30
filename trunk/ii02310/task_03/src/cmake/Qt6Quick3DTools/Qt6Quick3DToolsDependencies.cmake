# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6Quick3DTools_FOUND FALSE)
set(__qt_Quick3DTools_tool_deps "")
foreach(__qt_Quick3DTools_target_dep ${__qt_Quick3DTools_tool_deps})
    list(GET __qt_Quick3DTools_target_dep 0 __qt_Quick3DTools_pkg)
    list(GET __qt_Quick3DTools_target_dep 1 __qt_Quick3DTools_version)

    if (NOT ${__qt_Quick3DTools_pkg}_FOUND)
        find_dependency(${__qt_Quick3DTools_pkg} ${__qt_Quick3DTools_version})
    endif()
endforeach()

set(Qt6Quick3DTools_FOUND TRUE)
