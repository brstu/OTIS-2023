include_guard(DIRECTORY)

# Qml plugin targets might have dependencies on other qml plugin targets, but the Targets.cmake
# files are included in the order that file(GLOB) returns, which means certain targets that are
# referenced might not have been created yet, and ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE
# might be set to a message saying those targets don't exist.
#
# Postpone checking of which targets don't exist until all Qml PluginConfig.cmake files have been
# included, by including all the files one more time and checking for errors at each step.
#
# TODO: Find a better way to deal with this, perhaps by using find_package() instead of include
# for the Qml PluginConfig.cmake files.

file(GLOB __qt_qml_plugins_config_file_list "${CMAKE_CURRENT_LIST_DIR}/QmlPlugins/Qt6*Config.cmake")
if (__qt_qml_plugins_config_file_list AND NOT QT_SKIP_AUTO_QML_PLUGIN_INCLUSION)
    # First round of inclusions ensure all qml plugin targets are brought into scope.
    foreach(__qt_qml_plugin_config_file ${__qt_qml_plugins_config_file_list})
        include(${__qt_qml_plugin_config_file})

        # Temporarily unset any failure markers and mark the Qml package as found.
        unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE)
        set(${CMAKE_FIND_PACKAGE_NAME}_FOUND TRUE)
    endforeach()

    # For the second round of inclusions, check and bail out early if there are errors.
    foreach(__qt_qml_plugin_config_file ${__qt_qml_plugins_config_file_list})
        include(${__qt_qml_plugin_config_file})

        if(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE)
            string(APPEND ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE
                "
The message was set in ${__qt_qml_plugin_config_file} ")
            set(${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
            return()
        endif()
    endforeach()

endif()

if(NOT QT_NO_CREATE_TARGETS AND NOT QT_SKIP_AUTO_PLUGIN_INCLUSION)
    __qt_internal_include_plugin_packages(Qml)
endif()
