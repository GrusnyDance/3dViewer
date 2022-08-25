CC = gcc
CFLAGS        = -pipe -g $(EXPORT_ARCH_ARGS) -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk -mmacosx-version-min=11 -Wall -Wextra -fPIC $(DEFINES)
CXXFLAGS      = -pipe -stdlib=libc++ -O2 -std=gnu++1z $(EXPORT_ARCH_ARGS) -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk -mmacosx-version-min=11 -Wall -Wextra -fPIC $(DEFINES)
INCPATH       = -Iviewer -I. -IQtGifImage-master/src/gifimage -IQtGifImage-master/src/3rdParty/giflib -I/usr/local/lib/QtOpenGLWidgets.framework/Headers -I/usr/local/lib/Qt3DExtras.framework/Headers -I/usr/local/lib/Qt3DRender.framework/Headers -I/usr/local/lib/QtOpenGL.framework/Headers -I/usr/local/lib/QtWidgets.framework/Headers -I/usr/local/lib/Qt3DInput.framework/Headers -I/usr/local/lib/Qt3DLogic.framework/Headers -I/usr/local/lib/Qt3DCore.framework/Headers -I/usr/local/lib/QtGui.framework/Headers -I/usr/local/lib/QtConcurrent.framework/Headers -I/usr/local/lib/QtNetwork.framework/Headers -I/usr/local/lib/QtCore.framework/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/System/Library/Frameworks/OpenGL.framework/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/System/Library/Frameworks/AGL.framework/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/System/Library/Frameworks/OpenGL.framework/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/System/Library/Frameworks/AGL.framework/Headers -I/usr/local/share/qt/mkspecs/macx-clang -F/usr/local/lib
DEFINES       = -DGIFIMAGE_NO_LIB -DQT_QML_DEBUG -DQT_OPENGLWIDGETS_LIB -DQT_3DEXTRAS_LIB -DQT_3DRENDER_LIB -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_3DINPUT_LIB -DQT_3DLOGIC_LIB -DQT_3DCORE_LIB -DQT_GUI_LIB -DQT_CONCURRENT_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
LFLAGS        = -stdlib=libc++ -headerpad_max_install_names $(EXPORT_ARCH_ARGS) -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk -mmacosx-version-min=11 -Wl,-rpath,@executable_path/../Frameworks -Wl,-rpath,/usr/local/lib
LIBS          = $(SUBLIBS) -F/usr/local/lib -framework QtOpenGLWidgets -framework Qt3DExtras -framework Qt3DRender -framework QtOpenGL -framework QtWidgets -framework Qt3DInput -framework Qt3DLogic -framework Qt3DCore -framework QtGui -framework AppKit -framework ImageIO -framework Metal -framework QtConcurrent -framework QtNetwork -framework QtCore -framework DiskArbitration -framework IOKit -framework AGL -framework OpenGL   

GCOV_FLAGS := -fprofile-arcs -ftest-coverage
LDFLAGS := -fprofile-arcs --coverage
LCHECK = -lcheck
LIN_FLAGS := -lpthread -pthread -lrt -lm -lsubunit
ifeq ($(shell uname), Linux)
LCHECK += $(LIN_FLAGS)
endif

SOURCES_TEST:= $(wildcard parser/*.c)

SOURCES       = QtGifImage-master/src/3rdParty/giflib/dgif_lib.c \
		QtGifImage-master/src/3rdParty/giflib/egif_lib.c \
		QtGifImage-master/src/3rdParty/giflib/gif_err.c \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.c \
		QtGifImage-master/src/3rdParty/giflib/gifalloc.c \
		QtGifImage-master/src/3rdParty/giflib/quantize.c \
		QtGifImage-master/src/gifimage/qgifimage.cpp \
		viewer/main.cpp \
		viewer/mainwindow.cpp \
		viewer/ogl.cpp \
		parser/parser.c \
		parser/move.c \
		parser/rotate.c \
		parser/scale.c qrc_style.cpp \
		moc_mainwindow.cpp \
		moc_ogl.cpp
OBJECTS       = dgif_lib.o \
		egif_lib.o \
		gif_err.o \
		gif_hash.o \
		gifalloc.o \
		quantize.o \
		qgifimage.o \
		main.o \
		mainwindow.o \
		ogl.o \
		parser.o \
		move.o \
		rotate.o \
		scale.o \
		qrc_style.o \
		moc_mainwindow.o \
		moc_ogl.o
DIST          = /usr/local/share/qt/mkspecs/features/spec_pre.prf \
		/usr/local/share/qt/mkspecs/features/device_config.prf \
		/usr/local/share/qt/mkspecs/common/unix.conf \
		/usr/local/share/qt/mkspecs/common/mac.conf \
		/usr/local/share/qt/mkspecs/common/macx.conf \
		/usr/local/share/qt/mkspecs/common/sanitize.conf \
		/usr/local/share/qt/mkspecs/common/gcc-base.conf \
		/usr/local/share/qt/mkspecs/common/gcc-base-mac.conf \
		/usr/local/share/qt/mkspecs/common/clang.conf \
		/usr/local/share/qt/mkspecs/common/clang-mac.conf \
		/usr/local/share/qt/mkspecs/qconfig.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3danimation_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dextras_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3drender.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_bodymovin_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_charts.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_charts_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_chartsqml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_chartsqml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_coap.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_coap_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_core5compat.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_core5compat_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_datavisualization.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_datavisualization_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_designer.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_help.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_help_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_hunspellinputmethod_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsanimation.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsanimation_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsfolderlistmodel.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsqmlmodels.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labsqmlmodels_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labssettings.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labssettings_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labssharedimage.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labssharedimage_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labswavefrontmesh.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_linguist.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_linguist_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_mqtt.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_mqtt_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_multimediaquick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_networkauth.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_networkauth_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_nfc.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_opcua.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_opcua_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_openglwidgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_positioning.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_positioningquick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_positioningquick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlcompiler_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlcore.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlcore_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmldom_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmllocalstorage.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmllocalstorage_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlmodels.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlxmllistmodel.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3d.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3d_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dassetimport.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dassetimport_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dassetutils.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dassetutils_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3deffects.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3deffects_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dhelpers.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dhelpers_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3diblbaker.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3diblbaker_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dparticles.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dparticles_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3druntimerender.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3druntimerender_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dutils.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick3dutils_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickcontrols2.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickcontrols2impl.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2utils.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicklayouts.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicklayouts_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickshapes_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicktemplates2.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicktimeline.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quicktimeline_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_remoteobjects.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_remoteobjectsqml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_remoteobjectsqml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_repparser.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_repparser_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_scxml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_scxml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_scxmlqml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_scxmlqml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sensors.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sensorsquick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sensorsquick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_serialbus.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_serialbus_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_serialport.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_shadertools.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_shadertools_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_statemachine.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_statemachine_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_statemachineqml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_statemachineqml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_svg.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_svgwidgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_svgwidgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_tools_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_uitools.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_virtualkeyboard.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_virtualkeyboard_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginecore.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginequick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginequick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginequickdelegatesqml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginequickdelegatesqml_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_websockets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webview.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webview_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webviewquick.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_webviewquick_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/local/share/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/local/share/qt/mkspecs/features/qt_functions.prf \
		/usr/local/share/qt/mkspecs/features/qt_config.prf \
		/usr/local/share/qt/mkspecs/macx-clang/qmake.conf \
		/usr/local/share/qt/mkspecs/features/spec_post.prf \
		/usr/local/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/local/share/qt/mkspecs/features/mac/sdk.prf \
		/usr/local/share/qt/mkspecs/features/toolchain.prf \
		/usr/local/share/qt/mkspecs/features/mac/toolchain.prf \
		/usr/local/share/qt/mkspecs/features/default_pre.prf \
		/usr/local/share/qt/mkspecs/features/mac/default_pre.prf \
		QtGifImage-master/src/3rdParty/giflib.pri \
		QtGifImage-master/src/gifimage/qtgifimage.pri \
		/usr/local/share/qt/mkspecs/features/resolve_config.prf \
		/usr/local/share/qt/mkspecs/features/default_post.prf \
		/usr/local/share/qt/mkspecs/features/mac/default_post.prf \
		/usr/local/share/qt/mkspecs/features/mac/objective_c.prf \
		/usr/local/share/qt/mkspecs/features/qml_debug.prf \
		/usr/local/share/qt/mkspecs/features/mac/mac.prf \
		/usr/local/share/qt/mkspecs/features/warn_on.prf \
		/usr/local/share/qt/mkspecs/features/qt.prf \
		/usr/local/share/qt/mkspecs/features/resources_functions.prf \
		/usr/local/share/qt/mkspecs/features/resources.prf \
		/usr/local/share/qt/mkspecs/features/moc.prf \
		/usr/local/share/qt/mkspecs/features/unix/opengl.prf \
		/usr/local/share/qt/mkspecs/features/uic.prf \
		/usr/local/share/qt/mkspecs/features/unix/thread.prf \
		/usr/local/share/qt/mkspecs/features/qmake_use.prf \
		/usr/local/share/qt/mkspecs/features/file_copies.prf \
		/usr/local/share/qt/mkspecs/features/mac/rez.prf \
		/usr/local/share/qt/mkspecs/features/mac/asset_catalogs.prf \
		/usr/local/share/qt/mkspecs/features/testcase_targets.prf \
		/usr/local/share/qt/mkspecs/features/exceptions.prf \
		/usr/local/share/qt/mkspecs/features/yacc.prf \
		/usr/local/share/qt/mkspecs/features/lex.prf \
		viewer/viewer.pro QtGifImage-master/src/gifimage/qgifglobal.h \
		QtGifImage-master/src/gifimage/qgifimage.h \
		QtGifImage-master/src/gifimage/qgifimage_p.h \
		viewer/mainwindow.h \
		viewer/ogl.h \
		parser/3d.h QtGifImage-master/src/3rdParty/giflib/dgif_lib.c \
		QtGifImage-master/src/3rdParty/giflib/egif_lib.c \
		QtGifImage-master/src/3rdParty/giflib/gif_err.c \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.c \
		QtGifImage-master/src/3rdParty/giflib/gifalloc.c \
		QtGifImage-master/src/3rdParty/giflib/quantize.c \
		QtGifImage-master/src/gifimage/qgifimage.cpp \
		viewer/main.cpp \
		viewer/mainwindow.cpp \
		viewer/ogl.cpp \
		parser/parser.c \
		parser/move.c \
		parser/rotate.c \
		parser/scale.c

DISTNAME := 3dviewer1.0.0
OBJ_GCOV_DIR := obj_gcov
OBJECTS_GCOV := $(addprefix obj_gcov/,$(SOURCES_TEST:.c=.o))
HEADER = parser/3d.h
TARGET = build/app

RM := rm -rf


all: install

install: ui_mainwindow.h $(OBJECTS)
	@test -d build/ || mkdir -p build/
	clang++ $(LFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS)

uninstall: 
	$(RM) build

create_dir:
	@mkdir -p $(OBJ_GCOV_DIR)

test: parser/test/tests.c $(HEADER) $(OBJECTS_GCOV)
	$(CC) $(CFLAGS) $< $(OBJ_GCOV_DIR)/*.o -o $@ $(LCHECK) $(LDFLAGS) $(GCOV_FLAGS)
	./$@
	@mv *gcda *gcno $(OBJ_GCOV_DIR)/

gcov_report: test
	@rm -f $(OBJ_GCOV_DIR)/*tests*
	@lcov/bin/./lcov -c -d $(OBJ_GCOV_DIR)/. -o $(OBJ_GCOV_DIR)/coverage.info
	@lcov/bin/./genhtml $(OBJ_GCOV_DIR)/coverage.info --output-directory out

$(OBJ_GCOV_DIR)/%.o: %.c $(HEADER) create_dir
	@$(CC) $(CFLAGS) $(GCOV_FLAGS) -c $< -o obj_gcov/$(subst /,_,$@)
	# @mv *.o *gcno $(OBJ_GCOV_DIR)/

qrc_style.cpp: viewer/style.qrc \
		/usr/local/share/qt/libexec/rcc \
		viewer/SpyBot.qss
	/usr/local/share/qt/libexec/rcc -name style viewer/style.qrc -o qrc_style.cpp

moc_mainwindow.cpp: viewer/mainwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/QMainWindow \
		/usr/local/lib/QtWidgets.framework/Headers/qmainwindow.h \
		QtGifImage-master/src/gifimage/qgifimage.h \
		QtGifImage-master/src/gifimage/qgifglobal.h \
		/usr/local/lib/QtCore.framework/Headers/QtGlobal \
		/usr/local/lib/QtCore.framework/Headers/qglobal.h \
		/usr/local/lib/QtGui.framework/Headers/QImage \
		/usr/local/lib/QtGui.framework/Headers/qimage.h \
		/usr/local/lib/QtGui.framework/Headers/QColor \
		/usr/local/lib/QtGui.framework/Headers/qcolor.h \
		/usr/local/lib/QtCore.framework/Headers/QList \
		/usr/local/lib/QtCore.framework/Headers/qlist.h \
		/usr/local/lib/QtCore.framework/Headers/QVector \
		/usr/local/lib/QtCore.framework/Headers/qvector.h \
		viewer/ogl.h \
		/usr/local/lib/QtGui.framework/Headers/QOpenGLFunctions \
		/usr/local/lib/QtGui.framework/Headers/qopenglfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/QtOpenGL \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglglobal.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglbuffer.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengldebug.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglframebufferobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpaintdevice.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpixeltransferoptions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglshaderprogram.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltexture.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltextureblitter.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltimerquery.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctionsfactory.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionprofile.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglvertexarrayobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglwindow.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglversion.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QtOpenGLWidgets \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsglobal.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qopenglwidget.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsversion.h \
		/usr/local/lib/QtWidgets.framework/Headers/QtWidgets \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsglobal.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaccessiblewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qactiongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qapplication.h \
		/usr/local/lib/QtWidgets.framework/Headers/qboxlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qbuttongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcalendarwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcheckbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolordialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolormap.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolumnview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommandlinkbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommonstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcompleter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatawidgetmapper.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatetimeedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdial.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialogbuttonbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdockwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdrawutil.h \
		/usr/local/lib/QtWidgets.framework/Headers/qerrormessage.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfiledialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfileiconprovider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfilesystemmodel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfocusframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qformlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesture.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesturerecognizer.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsanchorlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicseffect.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitemanimation.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslinearlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsproxywidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsscene.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicssceneevent.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicstransform.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicswidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgroupbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qheaderview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qinputdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemeditorfactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qkeysequenceedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlabel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlcdnumber.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlineedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdiarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdisubwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenu.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenubar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmessagebox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qplaintextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qproxystyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qpushbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qradiobutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qrubberband.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscroller.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollerproperties.h \
		/usr/local/lib/QtWidgets.framework/Headers/qshortcut.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizegrip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizepolicy.h \
		/usr/local/lib/QtWidgets.framework/Headers/qslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplashscreen.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplitter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstatusbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleditemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylefactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleoption.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylepainter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleplugin.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsystemtrayicon.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtableview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtablewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextbrowser.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtooltip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreeview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidgetitemiterator.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundogroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundostack.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundoview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwhatsthis.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidgetaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwizard.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsversion.h \
		parser/3d.h \
		moc_predefs.h \
		/usr/local/share/qt/libexec/moc
	/usr/local/share/qt/libexec/moc $(DEFINES) --include build-viewer-Desktop_x86_darwin_generic_mach_o_64bit-Debug/moc_predefs.h -I/usr/local/share/qt/mkspecs/macx-clang -Iviewer -IQtGifImage-master/src/gifimage -IQtGifImage-master/src/3rdParty/giflib -I/usr/local/lib/QtOpenGLWidgets.framework/Headers -I/usr/local/lib/Qt3DExtras.framework/Headers -I/usr/local/lib/Qt3DRender.framework/Headers -I/usr/local/lib/QtOpenGL.framework/Headers -I/usr/local/lib/QtWidgets.framework/Headers -I/usr/local/lib/Qt3DInput.framework/Headers -I/usr/local/lib/Qt3DLogic.framework/Headers -I/usr/local/lib/Qt3DCore.framework/Headers -I/usr/local/lib/QtGui.framework/Headers -I/usr/local/lib/QtConcurrent.framework/Headers -I/usr/local/lib/QtNetwork.framework/Headers -I/usr/local/lib/QtCore.framework/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include/c++/v1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/13.0.0/include -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include -F/usr/local/lib viewer/mainwindow.h -o moc_mainwindow.cpp

moc_ogl.cpp: viewer/ogl.h \
		/usr/local/lib/QtGui.framework/Headers/QOpenGLFunctions \
		/usr/local/lib/QtGui.framework/Headers/qopenglfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/QtOpenGL \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglglobal.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglbuffer.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengldebug.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglframebufferobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpaintdevice.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpixeltransferoptions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglshaderprogram.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltexture.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltextureblitter.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltimerquery.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctionsfactory.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionprofile.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglvertexarrayobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglwindow.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglversion.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QtOpenGLWidgets \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsglobal.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qopenglwidget.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsversion.h \
		/usr/local/lib/QtWidgets.framework/Headers/QtWidgets \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsglobal.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaccessiblewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qactiongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qapplication.h \
		/usr/local/lib/QtWidgets.framework/Headers/qboxlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qbuttongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcalendarwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcheckbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolordialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolormap.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolumnview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommandlinkbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommonstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcompleter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatawidgetmapper.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatetimeedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdial.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialogbuttonbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdockwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdrawutil.h \
		/usr/local/lib/QtWidgets.framework/Headers/qerrormessage.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfiledialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfileiconprovider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfilesystemmodel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfocusframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qformlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesture.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesturerecognizer.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsanchorlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicseffect.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitemanimation.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslinearlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsproxywidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsscene.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicssceneevent.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicstransform.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicswidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgroupbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qheaderview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qinputdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemeditorfactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qkeysequenceedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlabel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlcdnumber.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlineedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmainwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdiarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdisubwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenu.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenubar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmessagebox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qplaintextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qproxystyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qpushbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qradiobutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qrubberband.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscroller.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollerproperties.h \
		/usr/local/lib/QtWidgets.framework/Headers/qshortcut.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizegrip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizepolicy.h \
		/usr/local/lib/QtWidgets.framework/Headers/qslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplashscreen.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplitter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstatusbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleditemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylefactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleoption.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylepainter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleplugin.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsystemtrayicon.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtableview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtablewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextbrowser.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtooltip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreeview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidgetitemiterator.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundogroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundostack.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundoview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwhatsthis.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidgetaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwizard.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsversion.h \
		parser/3d.h \
		moc_predefs.h \
		/usr/local/share/qt/libexec/moc
	/usr/local/share/qt/libexec/moc $(DEFINES) --include build-viewer-Desktop_x86_darwin_generic_mach_o_64bit-Debug/moc_predefs.h -I/usr/local/share/qt/mkspecs/macx-clang -Iviewer -IQtGifImage-master/src/gifimage -IQtGifImage-master/src/3rdParty/giflib -I/usr/local/lib/QtOpenGLWidgets.framework/Headers -I/usr/local/lib/Qt3DExtras.framework/Headers -I/usr/local/lib/Qt3DRender.framework/Headers -I/usr/local/lib/QtOpenGL.framework/Headers -I/usr/local/lib/QtWidgets.framework/Headers -I/usr/local/lib/Qt3DInput.framework/Headers -I/usr/local/lib/Qt3DLogic.framework/Headers -I/usr/local/lib/Qt3DCore.framework/Headers -I/usr/local/lib/QtGui.framework/Headers -I/usr/local/lib/QtConcurrent.framework/Headers -I/usr/local/lib/QtNetwork.framework/Headers -I/usr/local/lib/QtCore.framework/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include/c++/v1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/13.0.0/include -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include -F/usr/local/lib viewer/ogl.h -o moc_ogl.cpp

dgif_lib.o: QtGifImage-master/src/3rdParty/giflib/dgif_lib.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o dgif_lib.o QtGifImage-master/src/3rdParty/giflib/dgif_lib.c

egif_lib.o: QtGifImage-master/src/3rdParty/giflib/egif_lib.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o egif_lib.o QtGifImage-master/src/3rdParty/giflib/egif_lib.c

gif_err.o: QtGifImage-master/src/3rdParty/giflib/gif_err.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gif_err.o QtGifImage-master/src/3rdParty/giflib/gif_err.c

gif_hash.o: QtGifImage-master/src/3rdParty/giflib/gif_hash.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gif_hash.o QtGifImage-master/src/3rdParty/giflib/gif_hash.c

gifalloc.o: QtGifImage-master/src/3rdParty/giflib/gifalloc.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o gifalloc.o QtGifImage-master/src/3rdParty/giflib/gifalloc.c

quantize.o: QtGifImage-master/src/3rdParty/giflib/quantize.c QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h \
		QtGifImage-master/src/3rdParty/giflib/gif_hash.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o quantize.o QtGifImage-master/src/3rdParty/giflib/quantize.c

qgifimage.o: QtGifImage-master/src/gifimage/qgifimage.cpp QtGifImage-master/src/gifimage/qgifimage.h \
		QtGifImage-master/src/gifimage/qgifglobal.h \
		/usr/local/lib/QtCore.framework/Headers/QtGlobal \
		/usr/local/lib/QtCore.framework/Headers/qglobal.h \
		/usr/local/lib/QtGui.framework/Headers/QImage \
		/usr/local/lib/QtGui.framework/Headers/qimage.h \
		/usr/local/lib/QtGui.framework/Headers/QColor \
		/usr/local/lib/QtGui.framework/Headers/qcolor.h \
		/usr/local/lib/QtCore.framework/Headers/QList \
		/usr/local/lib/QtCore.framework/Headers/qlist.h \
		/usr/local/lib/QtCore.framework/Headers/QVector \
		/usr/local/lib/QtCore.framework/Headers/qvector.h \
		QtGifImage-master/src/gifimage/qgifimage_p.h \
		QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
		/usr/local/lib/QtCore.framework/Headers/QFile \
		/usr/local/lib/QtCore.framework/Headers/qfile.h \
		/usr/local/lib/QtCore.framework/Headers/QDebug \
		/usr/local/lib/QtCore.framework/Headers/qdebug.h \
		/usr/local/lib/QtCore.framework/Headers/QScopedPointer \
		/usr/local/lib/QtCore.framework/Headers/qscopedpointer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qgifimage.o QtGifImage-master/src/gifimage/qgifimage.cpp

main.o: viewer/main.cpp viewer/mainwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/QMainWindow \
		/usr/local/lib/QtWidgets.framework/Headers/qmainwindow.h \
		QtGifImage-master/src/gifimage/qgifimage.h \
		QtGifImage-master/src/gifimage/qgifglobal.h \
		/usr/local/lib/QtCore.framework/Headers/QtGlobal \
		/usr/local/lib/QtCore.framework/Headers/qglobal.h \
		/usr/local/lib/QtGui.framework/Headers/QImage \
		/usr/local/lib/QtGui.framework/Headers/qimage.h \
		/usr/local/lib/QtGui.framework/Headers/QColor \
		/usr/local/lib/QtGui.framework/Headers/qcolor.h \
		/usr/local/lib/QtCore.framework/Headers/QList \
		/usr/local/lib/QtCore.framework/Headers/qlist.h \
		/usr/local/lib/QtCore.framework/Headers/QVector \
		/usr/local/lib/QtCore.framework/Headers/qvector.h \
		viewer/ogl.h \
		/usr/local/lib/QtGui.framework/Headers/QOpenGLFunctions \
		/usr/local/lib/QtGui.framework/Headers/qopenglfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/QtOpenGL \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglglobal.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglbuffer.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengldebug.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglframebufferobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpaintdevice.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpixeltransferoptions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglshaderprogram.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltexture.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltextureblitter.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltimerquery.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctionsfactory.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionprofile.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglvertexarrayobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglwindow.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglversion.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QtOpenGLWidgets \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsglobal.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qopenglwidget.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsversion.h \
		/usr/local/lib/QtWidgets.framework/Headers/QtWidgets \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsglobal.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaccessiblewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qactiongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qapplication.h \
		/usr/local/lib/QtWidgets.framework/Headers/qboxlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qbuttongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcalendarwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcheckbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolordialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolormap.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolumnview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommandlinkbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommonstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcompleter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatawidgetmapper.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatetimeedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdial.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialogbuttonbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdockwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdrawutil.h \
		/usr/local/lib/QtWidgets.framework/Headers/qerrormessage.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfiledialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfileiconprovider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfilesystemmodel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfocusframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qformlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesture.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesturerecognizer.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsanchorlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicseffect.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitemanimation.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslinearlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsproxywidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsscene.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicssceneevent.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicstransform.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicswidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgroupbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qheaderview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qinputdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemeditorfactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qkeysequenceedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlabel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlcdnumber.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlineedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdiarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdisubwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenu.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenubar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmessagebox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qplaintextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qproxystyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qpushbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qradiobutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qrubberband.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscroller.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollerproperties.h \
		/usr/local/lib/QtWidgets.framework/Headers/qshortcut.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizegrip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizepolicy.h \
		/usr/local/lib/QtWidgets.framework/Headers/qslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplashscreen.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplitter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstatusbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleditemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylefactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleoption.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylepainter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleplugin.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsystemtrayicon.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtableview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtablewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextbrowser.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtooltip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreeview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidgetitemiterator.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundogroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundostack.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundoview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwhatsthis.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidgetaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwizard.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsversion.h \
		parser/3d.h \
		/usr/local/lib/QtCore.framework/Headers/QFile \
		/usr/local/lib/QtCore.framework/Headers/qfile.h \
		/usr/local/lib/QtWidgets.framework/Headers/QApplication
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o viewer/main.cpp

mainwindow.o: viewer/mainwindow.cpp viewer/mainwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/QMainWindow \
		/usr/local/lib/QtWidgets.framework/Headers/qmainwindow.h \
		QtGifImage-master/src/gifimage/qgifimage.h \
		QtGifImage-master/src/gifimage/qgifglobal.h \
		/usr/local/lib/QtCore.framework/Headers/QtGlobal \
		/usr/local/lib/QtCore.framework/Headers/qglobal.h \
		/usr/local/lib/QtGui.framework/Headers/QImage \
		/usr/local/lib/QtGui.framework/Headers/qimage.h \
		/usr/local/lib/QtGui.framework/Headers/QColor \
		/usr/local/lib/QtGui.framework/Headers/qcolor.h \
		/usr/local/lib/QtCore.framework/Headers/QList \
		/usr/local/lib/QtCore.framework/Headers/qlist.h \
		/usr/local/lib/QtCore.framework/Headers/QVector \
		/usr/local/lib/QtCore.framework/Headers/qvector.h \
		viewer/ogl.h \
		/usr/local/lib/QtGui.framework/Headers/QOpenGLFunctions \
		/usr/local/lib/QtGui.framework/Headers/qopenglfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/QtOpenGL \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglglobal.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglbuffer.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengldebug.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglframebufferobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpaintdevice.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpixeltransferoptions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglshaderprogram.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltexture.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltextureblitter.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltimerquery.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctionsfactory.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionprofile.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglvertexarrayobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglwindow.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglversion.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QtOpenGLWidgets \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsglobal.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qopenglwidget.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsversion.h \
		/usr/local/lib/QtWidgets.framework/Headers/QtWidgets \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsglobal.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaccessiblewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qactiongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qapplication.h \
		/usr/local/lib/QtWidgets.framework/Headers/qboxlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qbuttongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcalendarwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcheckbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolordialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolormap.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolumnview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommandlinkbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommonstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcompleter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatawidgetmapper.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatetimeedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdial.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialogbuttonbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdockwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdrawutil.h \
		/usr/local/lib/QtWidgets.framework/Headers/qerrormessage.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfiledialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfileiconprovider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfilesystemmodel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfocusframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qformlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesture.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesturerecognizer.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsanchorlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicseffect.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitemanimation.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslinearlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsproxywidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsscene.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicssceneevent.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicstransform.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicswidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgroupbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qheaderview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qinputdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemeditorfactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qkeysequenceedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlabel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlcdnumber.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlineedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdiarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdisubwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenu.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenubar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmessagebox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qplaintextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qproxystyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qpushbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qradiobutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qrubberband.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscroller.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollerproperties.h \
		/usr/local/lib/QtWidgets.framework/Headers/qshortcut.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizegrip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizepolicy.h \
		/usr/local/lib/QtWidgets.framework/Headers/qslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplashscreen.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplitter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstatusbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleditemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylefactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleoption.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylepainter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleplugin.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsystemtrayicon.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtableview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtablewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextbrowser.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtooltip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreeview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidgetitemiterator.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundogroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundostack.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundoview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwhatsthis.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidgetaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwizard.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsversion.h \
		parser/3d.h \
		/usr/local/lib/QtWidgets.framework/Headers/QFileDialog \
		/usr/local/lib/QtCore.framework/Headers/QObject \
		/usr/local/lib/QtCore.framework/Headers/qobject.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QOpenGLWidget \
		/usr/local/lib/QtCore.framework/Headers/QRect \
		/usr/local/lib/QtCore.framework/Headers/qrect.h \
		/usr/local/lib/QtGui.framework/Headers/QScreen \
		/usr/local/lib/QtGui.framework/Headers/qscreen.h \
		/usr/local/lib/Qt3DCore.framework/Headers/Qt3DCore \
		/usr/local/lib/Qt3DCore.framework/Headers/qabstractaspect.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qabstractfunctor.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qabstractskeleton.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qarmature.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qaspectengine.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qaspectjob.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qattribute.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qbackendnode.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qboundingvolume.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qbuffer.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qcomponent.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qcoreaspect.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qcoresettings.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qentity.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qgeometry.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qgeometryview.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qjoint.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qnode.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qnodeid.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qskeleton.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qskeletonloader.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qtransform.h \
		/usr/local/lib/Qt3DCore.framework/Headers/qt3dcoreversion.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/Qt3DExtras \
		/usr/local/lib/Qt3DExtras.framework/Headers/qabstractcameracontroller.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qabstractspritesheet.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qconegeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qconegeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qconemesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcuboidgeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcuboidgeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcuboidmesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcylindergeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcylindergeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qcylindermesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qdiffusemapmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qdiffusespecularmapmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qdiffusespecularmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qextrudedtextgeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qextrudedtextmesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qfirstpersoncameracontroller.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qforwardrenderer.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qgoochmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qmetalroughmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qmorphphongmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qnormaldiffusemapalphamaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qnormaldiffusemapmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qnormaldiffusespecularmapmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qorbitcameracontroller.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qpervertexcolormaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qphongalphamaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qphongmaterial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qplanegeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qplanegeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qplanemesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qskyboxentity.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspheregeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspheregeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspheremesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspritegrid.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspritesheet.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qspritesheetitem.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qt3dwindow.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qtext2dentity.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qtexturematerial.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qtorusgeometry.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qtorusgeometryview.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qtorusmesh.h \
		/usr/local/lib/Qt3DExtras.framework/Headers/qt3dextrasversion.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o viewer/mainwindow.cpp

ogl.o: viewer/ogl.cpp viewer/ogl.h \
		/usr/local/lib/QtGui.framework/Headers/QOpenGLFunctions \
		/usr/local/lib/QtGui.framework/Headers/qopenglfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/QtOpenGL \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglglobal.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglbuffer.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengldebug.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglframebufferobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpaintdevice.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglpixeltransferoptions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglshaderprogram.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltexture.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltextureblitter.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopengltimerquery.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctions.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionfunctionsfactory.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglversionprofile.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglvertexarrayobject.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qopenglwindow.h \
		/usr/local/lib/QtOpenGL.framework/Headers/qtopenglversion.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/QtOpenGLWidgets \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsglobal.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qopenglwidget.h \
		/usr/local/lib/QtOpenGLWidgets.framework/Headers/qtopenglwidgetsversion.h \
		/usr/local/lib/QtWidgets.framework/Headers/QtWidgets \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsglobal.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractitemview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qabstractspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaccessiblewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qactiongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qapplication.h \
		/usr/local/lib/QtWidgets.framework/Headers/qboxlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qbuttongroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcalendarwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcheckbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolordialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolormap.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcolumnview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommandlinkbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcommonstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qcompleter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatawidgetmapper.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdatetimeedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdial.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdialogbuttonbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdockwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qdrawutil.h \
		/usr/local/lib/QtWidgets.framework/Headers/qerrormessage.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfiledialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfileiconprovider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfilesystemmodel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfocusframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontcombobox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qfontdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qformlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qframe.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesture.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgesturerecognizer.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsanchorlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicseffect.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsitemanimation.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicslinearlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsproxywidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsscene.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicssceneevent.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicstransform.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicsview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgraphicswidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgridlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qgroupbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qheaderview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qinputdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qitemeditorfactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qkeysequenceedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlabel.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlayoutitem.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlcdnumber.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlineedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qlistwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmainwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdiarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmdisubwindow.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenu.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmenubar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qmessagebox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qplaintextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qprogressdialog.h \
		/usr/local/lib/QtWidgets.framework/Headers/qproxystyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qpushbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qradiobutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qrubberband.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollarea.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscroller.h \
		/usr/local/lib/QtWidgets.framework/Headers/qscrollerproperties.h \
		/usr/local/lib/QtWidgets.framework/Headers/qshortcut.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizegrip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsizepolicy.h \
		/usr/local/lib/QtWidgets.framework/Headers/qslider.h \
		/usr/local/lib/QtWidgets.framework/Headers/qspinbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplashscreen.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsplitter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedlayout.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstackedwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstatusbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyle.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleditemdelegate.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylefactory.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleoption.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstylepainter.h \
		/usr/local/lib/QtWidgets.framework/Headers/qstyleplugin.h \
		/usr/local/lib/QtWidgets.framework/Headers/qsystemtrayicon.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtableview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtablewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtabwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextbrowser.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtextedit.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbar.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbox.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtoolbutton.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtooltip.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreeview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtreewidgetitemiterator.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundogroup.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundostack.h \
		/usr/local/lib/QtWidgets.framework/Headers/qundoview.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwhatsthis.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidget.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwidgetaction.h \
		/usr/local/lib/QtWidgets.framework/Headers/qwizard.h \
		/usr/local/lib/QtWidgets.framework/Headers/qtwidgetsversion.h \
		parser/3d.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ogl.o viewer/ogl.cpp

parser.o: parser/parser.c parser/3d.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o parser.o parser/parser.c

move.o: parser/move.c parser/3d.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o move.o parser/move.c

rotate.o: parser/rotate.c parser/3d.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o rotate.o parser/rotate.c

scale.o: parser/scale.c parser/3d.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o scale.o parser/scale.c

qrc_style.o: qrc_style.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_style.o qrc_style.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_ogl.o: moc_ogl.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ogl.o moc_ogl.cpp

moc_qcustomplot.o: moc_qcustomplot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qcustomplot.o moc_qcustomplot.cpp

moc_calc.o: moc_calc.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_calc.o moc_calc.cpp

moc_credit.o: moc_credit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_credit.o moc_credit.cpp

moc_deposit.o: moc_deposit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_deposit.o moc_deposit.cpp

moc_plot.o: moc_plot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_plot.o moc_plot.cpp

ui_mainwindow.h: viewer/mainwindow.ui \
		/usr/local/share/qt/libexec/uic
	/usr/local/share/qt/libexec/uic viewer/mainwindow.ui -o ui_mainwindow.h

moc_predefs.h: /usr/local/share/qt/mkspecs/features/data/dummy.cpp
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ -pipe -stdlib=libc++ -g -std=gnu++1z $(EXPORT_ARCH_ARGS) -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk -mmacosx-version-min=11 -Wall -Wextra -dM -E -o moc_predefs.h /usr/local/share/qt/mkspecs/features/data/dummy.cpp

clean:
	$(RM) $(OBJ_GCOV_DIR)
	$(RM) $(TARGET_EXEC) *.a out
	$(RM) *.gc* test .vscode test.dSYM
	$(RM) 3dviewer1.0.0.tar.gz
	$(RM) moc_* ui_* *.o qrc_style.cpp

dist: 
	tar -cf $(DISTNAME).tar $(DIST) && gzip -9f $(DISTNAME).tar

dvi:
	open doc.pdf

lint:
	cp ../materials/linters/CPPLINT.cfg ./
	python3 ../materials/linters/cpplint.py --extensions=c *.h *.c
	python3 ../materials/linters/cpplint.py --extensions=c \
	calculating/*.c calculating/*.c tests/*.c bonus/*.c
	python3 ../materials/linters/cpplint.py --extensions=cpp calc_qt/*.cpp calc_qt/*.h
	$(RM) CPPLINT.cfg

rebuild: clean all

.PHONY: all clean rebuild test lint create_dir gcov_report