# Make sure Qt6 is found before anything else.
set(Qt63DQuickInput_FOUND FALSE)

if("${_qt_cmake_dir}" STREQUAL "")
    set(_qt_cmake_dir "${QT_TOOLCHAIN_RELOCATABLE_CMAKE_DIR}")
endif()
set(__qt_use_no_default_path_for_qt_packages "NO_DEFAULT_PATH")
if(QT_DISABLE_NO_DEFAULT_PATH_IN_QT_PACKAGES)
    set(__qt_use_no_default_path_for_qt_packages "")
endif()

# Don't propagate REQUIRED so we don't immediately FATAL_ERROR, rather let the find_dependency calls
# set _NOT_FOUND_MESSAGE which will be displayed by the includer of the Dependencies file.
set(${CMAKE_FIND_PACKAGE_NAME}_FIND_REQUIRED FALSE)

if(NOT Qt6_FOUND)
    find_dependency(Qt6 6.6.0
        PATHS
            "${CMAKE_CURRENT_LIST_DIR}/.."
            "${_qt_cmake_dir}"
            ${_qt_additional_packages_prefix_paths}
            ${QT_EXAMPLES_CMAKE_PREFIX_PATH}
        ${__qt_use_no_default_path_for_qt_packages}
    )
endif()


# note: _third_party_deps example: "ICU\\;FALSE\\;1.0\\;i18n uc data;ZLIB\\;FALSE\\;\\;"
set(__qt_3DQuickInput_third_party_deps "")
_qt_internal_find_third_party_dependencies("3DQuickInput" __qt_3DQuickInput_third_party_deps)

# Find Qt tool package.
set(__qt_3DQuickInput_tool_deps "")
_qt_internal_find_tool_dependencies("3DQuickInput" __qt_3DQuickInput_tool_deps)

# note: target_deps example: "Qt6Core\;5.12.0;Qt6Gui\;5.12.0"
set(__qt_3DQuickInput_target_deps "Qt63DCore\;6.6.0;Qt63DInput\;6.6.0;Qt63DQuick\;6.6.0;Qt6Core\;6.6.0;Qt6Gui\;6.6.0;Qt6Qml\;6.6.0")
set(__qt_3DQuickInput_find_dependency_paths "${CMAKE_CURRENT_LIST_DIR}/.." "${_qt_cmake_dir}")
_qt_internal_find_qt_dependencies("3DQuickInput" __qt_3DQuickInput_target_deps
                                  __qt_3DQuickInput_find_dependency_paths)

set(_Qt63DQuickInput_MODULE_DEPENDENCIES "3DCore;3DInput;3DQuick;Core;Gui;Qml")
set(Qt63DQuickInput_FOUND TRUE)
