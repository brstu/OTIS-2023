# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6ProtobufTools_FOUND FALSE)
set(__qt_ProtobufTools_tool_deps "WrapProtoc\;")
foreach(__qt_ProtobufTools_target_dep ${__qt_ProtobufTools_tool_deps})
    list(GET __qt_ProtobufTools_target_dep 0 __qt_ProtobufTools_pkg)
    list(GET __qt_ProtobufTools_target_dep 1 __qt_ProtobufTools_version)

    if (NOT ${__qt_ProtobufTools_pkg}_FOUND)
        find_dependency(${__qt_ProtobufTools_pkg} ${__qt_ProtobufTools_version})
    endif()
endforeach()

set(Qt6ProtobufTools_FOUND TRUE)
