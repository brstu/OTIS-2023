#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Qt6::ProtobufQtCoreTypes" for configuration "RelWithDebInfo"
set_property(TARGET Qt6::ProtobufQtCoreTypes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Qt6::ProtobufQtCoreTypes PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libQt6ProtobufQtCoreTypes.a"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "Qt6::Protobuf"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/Qt6ProtobufQtCoreTypes.dll"
  )

list(APPEND _cmake_import_check_targets Qt6::ProtobufQtCoreTypes )
list(APPEND _cmake_import_check_files_for_Qt6::ProtobufQtCoreTypes "${_IMPORT_PREFIX}/lib/libQt6ProtobufQtCoreTypes.a" "${_IMPORT_PREFIX}/bin/Qt6ProtobufQtCoreTypes.dll" )

# Import target "Qt6::ProtobufQtCoreTypes_protobuf_registration" for configuration "RelWithDebInfo"
set_property(TARGET Qt6::ProtobufQtCoreTypes_protobuf_registration APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Qt6::ProtobufQtCoreTypes_protobuf_registration PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELWITHDEBINFO ""
  IMPORTED_OBJECTS_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/objects-RelWithDebInfo/ProtobufQtCoreTypes_protobuf_registration/QtCore/QtCore_protobuftyperegistrations.cpp.obj"
  )

list(APPEND _cmake_import_check_targets Qt6::ProtobufQtCoreTypes_protobuf_registration )
list(APPEND _cmake_import_check_files_for_Qt6::ProtobufQtCoreTypes_protobuf_registration "${_IMPORT_PREFIX}/lib/objects-RelWithDebInfo/ProtobufQtCoreTypes_protobuf_registration/QtCore/QtCore_protobuftyperegistrations.cpp.obj" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
