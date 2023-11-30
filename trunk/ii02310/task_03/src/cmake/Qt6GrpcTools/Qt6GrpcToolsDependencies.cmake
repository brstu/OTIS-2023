# Find "ModuleTools" dependencies, which are other ModuleTools packages.
set(Qt6GrpcTools_FOUND FALSE)
set(__qt_GrpcTools_tool_deps "WrapProtoc\;;Qt6ProtobufTools\;6.6.0")
foreach(__qt_GrpcTools_target_dep ${__qt_GrpcTools_tool_deps})
    list(GET __qt_GrpcTools_target_dep 0 __qt_GrpcTools_pkg)
    list(GET __qt_GrpcTools_target_dep 1 __qt_GrpcTools_version)

    if (NOT ${__qt_GrpcTools_pkg}_FOUND)
        find_dependency(${__qt_GrpcTools_pkg} ${__qt_GrpcTools_version})
    endif()
endforeach()

set(Qt6GrpcTools_FOUND TRUE)
