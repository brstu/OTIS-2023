
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was QtModuleConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

cmake_minimum_required(VERSION 3.16...3.21)

include(CMakeFindDependencyMacro)

get_filename_component(_import_prefix "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_import_prefix "${_import_prefix}" REALPATH)

# Extra cmake code begin

# Extra cmake code end

# Find required dependencies, if any.
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickDependencies.cmake")
    include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickDependencies.cmake")
    _qt_internal_suggest_dependency_debugging(WebViewQuick
        __qt_WebViewQuick_pkg ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE)
endif()

# If *ConfigDependencies.cmake exists, the variable value will be defined there.
# Don't override it in that case.
if(NOT DEFINED "Qt6WebViewQuick_FOUND")
    set("Qt6WebViewQuick_FOUND" TRUE)
endif()

if (NOT QT_NO_CREATE_TARGETS AND Qt6WebViewQuick_FOUND)
    include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickTargets.cmake")
    include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickAdditionalTargetInfo.cmake")
    include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickExtraProperties.cmake"
        OPTIONAL)
    if(NOT QT_NO_CREATE_VERSIONLESS_TARGETS)
        include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickVersionlessTargets.cmake")
    endif()

    # DEPRECATED
    # Provide old style variables for includes, compile definitions, etc.
    # These variables are deprecated and only provided on a best-effort basis to facilitate porting.
    # Consider using target_link_libraries(app PRIVATE Qt6WebViewQuick) instead.
    set(Qt6WebViewQuick_LIBRARIES "Qt6::WebViewQuick")

    get_target_property(_Qt6WebViewQuick_OWN_INCLUDE_DIRS
                        Qt6::WebViewQuick INTERFACE_INCLUDE_DIRECTORIES)
    if(NOT _Qt6WebViewQuick_OWN_INCLUDE_DIRS)
        set(_Qt6WebViewQuick_OWN_INCLUDE_DIRS "")
    endif()

    if(TARGET Qt6::WebViewQuickPrivate)
        get_target_property(_Qt6WebViewQuick_OWN_PRIVATE_INCLUDE_DIRS
                            Qt6::WebViewQuickPrivate INTERFACE_INCLUDE_DIRECTORIES)
        if(NOT _Qt6WebViewQuick_OWN_PRIVATE_INCLUDE_DIRS)
            set(_Qt6WebViewQuick_OWN_PRIVATE_INCLUDE_DIRS "")
        endif()
    endif()

    get_target_property(Qt6WebViewQuick_DEFINITIONS
                        Qt6::WebViewQuick INTERFACE_COMPILE_DEFINITIONS)
    if(NOT Qt6WebViewQuick_DEFINITIONS)
        set(Qt6WebViewQuick_DEFINITIONS "")
    else()
        list(TRANSFORM Qt6WebViewQuick_DEFINITIONS PREPEND "-D")
    endif()

    get_target_property(Qt6WebViewQuick_COMPILE_DEFINITIONS
                        Qt6::WebViewQuick INTERFACE_COMPILE_DEFINITIONS)
    if(NOT Qt6WebViewQuick_COMPILE_DEFINITIONS)
        set(Qt6WebViewQuick_COMPILE_DEFINITIONS "")
    endif()

    set(Qt6WebViewQuick_INCLUDE_DIRS
        ${_Qt6WebViewQuick_OWN_INCLUDE_DIRS})

    set(Qt6WebViewQuick_PRIVATE_INCLUDE_DIRS
        ${_Qt6WebViewQuick_OWN_PRIVATE_INCLUDE_DIRS})

    foreach(_module_dep ${_Qt6WebViewQuick_MODULE_DEPENDENCIES})
        list(APPEND Qt6WebViewQuick_INCLUDE_DIRS
             ${Qt6${_module_dep}_INCLUDE_DIRS})
        list(APPEND Qt6WebViewQuick_PRIVATE_INCLUDE_DIRS
             ${Qt6${_module_dep}_PRIVATE_INCLUDE_DIRS})
        list(APPEND Qt6WebViewQuick_DEFINITIONS
             ${Qt6${_module_dep}_DEFINITIONS})
        list(APPEND Qt6WebViewQuick_COMPILE_DEFINITIONS
             ${Qt6${_module_dep}_COMPILE_DEFINITIONS})
    endforeach()

    list(REMOVE_DUPLICATES Qt6WebViewQuick_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt6WebViewQuick_PRIVATE_INCLUDE_DIRS)
    list(REMOVE_DUPLICATES Qt6WebViewQuick_DEFINITIONS)
    list(REMOVE_DUPLICATES Qt6WebViewQuick_COMPILE_DEFINITIONS)
endif()

if (TARGET Qt6::WebViewQuick)
    qt_make_features_available(Qt6::WebViewQuick)

    foreach(extra_cmake_include )
        include("${CMAKE_CURRENT_LIST_DIR}/${extra_cmake_include}")
    endforeach()

    if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickPlugins.cmake")
        include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickPlugins.cmake")
    endif()

    list(APPEND QT_ALL_MODULES_FOUND_VIA_FIND_PACKAGE "WebViewQuick")

    get_target_property(_qt_module_target_type "Qt6::WebViewQuick" TYPE)
    if(NOT _qt_module_target_type STREQUAL "INTERFACE_LIBRARY")
        get_target_property(_qt_module_plugin_types
                            Qt6::WebViewQuick MODULE_PLUGIN_TYPES)
        if(_qt_module_plugin_types)
            list(APPEND QT_ALL_PLUGIN_TYPES_FOUND_VIA_FIND_PACKAGE "${_qt_module_plugin_types}")
        endif()
    endif()


    # Load Module's BuildInternals should any exist
    if (Qt6BuildInternals_DIR AND
        EXISTS "${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickBuildInternals.cmake")
        include("${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickBuildInternals.cmake")
    endif()
else()

    set(Qt6WebViewQuick_FOUND FALSE)
    if(NOT DEFINED Qt6WebViewQuick_NOT_FOUND_MESSAGE)
        set(Qt6WebViewQuick_NOT_FOUND_MESSAGE
            "Target \"Qt6::WebViewQuick\" was not found.")

        if(QT_NO_CREATE_TARGETS)
            string(APPEND Qt6WebViewQuick_NOT_FOUND_MESSAGE
                "Possibly due to QT_NO_CREATE_TARGETS being set to TRUE and thus "
                "${CMAKE_CURRENT_LIST_DIR}/Qt6WebViewQuickTargets.cmake was not "
                "included to define the target.")
        endif()
    endif()
endif()
