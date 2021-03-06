include_directories("/usr/include/qt4")
include_directories(view)
include_directories(includes)
include_directories(configuration)

MESSAGE(${DIR3PARTY}/qt)
SET(QT_ROOT_DIR ${DIR3PARTY}/qt)

find_package(Qt4 REQUIRED)
link_libraries(QtCore)
link_libraries(QtGui)

link_libraries(recorder)

find_package(Boost COMPONENTS system filesystem REQUIRED)
link_libraries(${Boost_FILESYSTEM_LIBRARY})
link_libraries(${Boost_SYSTEM_LIBRARY})

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

qt4_wrap_cpp(Interface_MOC includes/protocole.hh includes/mainwindow.hh  includes/ui_mainwindow.hh includes/controller.hh includes/view.hh includes/session.hh includes/error.hh includes/form_shape.hh includes/form_sphere.hh includes/form_square.hh includes/form_plan.hh includes/shape.hh includes/model.hh includes/event.hh )

add_executable(Interface ${Interface_MOC} main.cc view/protocole.cc controller/controller.cc view/mainwindow.cc view/view.cc view/session.cc view/form_plan.cc view/form_sphere.cc view/form_square.cc view/error.cc view/form_shape.cc view/shape.cc model/model.cc view/event.cc ../configuration/parser.cc ) 

target_link_libraries(Interface ${QT_LIBRARIES})

INSTALL(TARGETS Interface DESTINATION ${PROJECT_SOURCE_DIR}/../)
