cmake_minimum_required(VERSION 3.16)

project(kde_splash_creator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Network)

set(MAINWINDOW_FILES
    dialogs/sources/mainwindow.cpp
    dialogs/headers/mainwindow.h
    dialogs/ui/mainwindow.ui
)

set(DIALOGS_HEADERS
    dialogs/headers/add_image_dialog.h
    dialogs/headers/add_background_dialog.h
    dialogs/headers/add_metadata_dialog.h
    dialogs/headers/add_animatedimage_dialog.h
    dialogs/headers/add_text_dialog.h
)

set(DIALOGS_SOURCES
    dialogs/sources/add_image_dialog.cpp
    dialogs/sources/add_background_dialog.cpp
    dialogs/sources/add_metadata_dialog.cpp
    dialogs/sources/add_animatedimage_dialog.cpp
    dialogs/sources/add_text_dialog.cpp
)

set(DIALOGS_UIS
    dialogs/ui/add_image_dialog.ui
    dialogs/ui/add_background_dialog.ui
    dialogs/ui/add_metadata_dialog.ui
    dialogs/ui/add_animatedimage_dialog.ui
    dialogs/ui/add_text_dialog.ui
)

set(LIBS_HEADERS
    libs/splash_qml_class.h
    libs/global_vars.h
    libs/splash_metadata_class.h
)

set(LIBS_SOURCES
    libs/global_vars.cpp
)

set(ALL_PROJECT_SOURCES
    main.cpp
    ${MAINWINDOW_FILES}
    ${DIALOGS_HEADERS}
    ${DIALOGS_SOURCES}
    ${DIALOGS_UIS}
    ${LIBS_HEADERS}
    ${LIBS_SOURCES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(kde_splash_creator
        MANUAL_FINALIZATION
        ${ALL_PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(kde_splash_creator SHARED
            ${ALL_PROJECT_SOURCES}
        )
    else()
        add_executable(kde_splash_creator
            ${ALL_PROJECT_SOURCES}
        )
    endif()
endif()

target_include_directories(kde_splash_creator PRIVATE
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/dialogs/headers
    ${CMAKE_SOURCE_DIR}/libs
)

set_target_properties(kde_splash_creator PROPERTIES
    AUTOUIC_SEARCH_PATHS
        ${CMAKE_SOURCE_DIR}/dialogs/ui
)

target_link_libraries(kde_splash_creator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(kde_splash_creator PRIVATE Qt6::Network)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(kde_splash_creator)
endif()

if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.kde_splash_creator)
endif()

set_target_properties(kde_splash_creator PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS kde_splash_creator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
