set(_ProtobufQtCoreTypes_proto_include_dirs "include/QtProtobufQtCoreTypes")
foreach(proto_include_dir IN LISTS _ProtobufQtCoreTypes_proto_include_dirs)
    if(IS_ABSOLUTE "${proto_include_dir}")
        set_property(TARGET ${QT_CMAKE_EXPORT_NAMESPACE}::ProtobufQtCoreTypes APPEND PROPERTY
            QT_PROTO_INCLUDES "${proto_include_dir}")
    else()
        set_property(TARGET ${QT_CMAKE_EXPORT_NAMESPACE}::ProtobufQtCoreTypes APPEND PROPERTY
            QT_PROTO_INCLUDES "${QT6_INSTALL_PREFIX}/${proto_include_dir}")
        if(CMAKE_STAGING_PREFIX)
            set_property(TARGET ${QT_CMAKE_EXPORT_NAMESPACE}::ProtobufQtCoreTypes APPEND PROPERTY
                QT_PROTO_INCLUDES "${CMAKE_STAGING_PREFIX}/${proto_include_dir}")
        endif()
    endif()
endforeach()
unset(_ProtobufQtCoreTypes_proto_include_dirs)
