cmake_minimum_required (VERSION 2.6)

cmake_policy(SET CMP0012 NEW)

PROJECT(OpenCV_Window)
MESSAGE("Project name: ${PROJECT_NAME}")

# Requires OpenCV
FIND_PACKAGE(OpenCV 3.4.3 REQUIRED)
FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(GLUT REQUIRED)

ADD_EXECUTABLE( create_move_window create_move_window.cpp )
TARGET_LINK_LIBRARIES( create_move_window ${OpenCV_LIBS} )

ADD_EXECUTABLE( overlay_status_bar_window overlay_status_bar_window.cpp )
TARGET_LINK_LIBRARIES( overlay_status_bar_window ${OpenCV_LIBS} )

ADD_EXECUTABLE( event_slider_window event_slider_window.cpp )
TARGET_LINK_LIBRARIES( event_slider_window ${OpenCV_LIBS} )

ADD_EXECUTABLE( event_button_window event_button_window.cpp )
TARGET_LINK_LIBRARIES( event_button_window ${OpenCV_LIBS} )

ADD_EXECUTABLE( opengl_window opengl_window.cpp )
TARGET_LINK_LIBRARIES( opengl_window ${OpenCV_LIBS} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )

ADD_EXECUTABLE( vtk_window vtk_window.cpp )
TARGET_LINK_LIBRARIES( vtk_window ${OpenCV_LIBS} )
