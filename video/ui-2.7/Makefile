#############################################################################
# Makefile for building: arch-64/video
# Generated by qmake (2.01a) (Qt 4.8.5) on: Tue Aug 19 13:51:15 2014
# Project:  video.pro
# Template: app
# Command: /opt/qt/qt/bin/qmake -o Makefile video.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qt/qt-4.8.5/mkspecs/linux-g++ -I. -I/opt/qt/qt-4.8.5/include/QtCore -I/opt/qt/qt-4.8.5/include/QtGui -I/opt/qt/qt-4.8.5/include/QtMultimedia -I/opt/qt/qt-4.8.5/include -I. -I/opt/qt/epicsqt/framework/plugins/include -I/opt/qt/epicsqt-2.8.1/framework/widgets/include -I/opt/qt/epicsqt-2.8.1/framework/api/include -I/opt/qt/epicsqt-2.8.1/framework/data/include -I/opt/qt/epicsqt-2.8.1/framework/widgets/QELabel -I/opt/qt/epicsqt-2.8.1/framework/widgets/QELineEdit -I/opt/qt/epicsqt-2.8.1/framework/widgets/QEButton -I/opt/qt/epicsqt-2.8.1/framework/widgets/QEForm -I/opt/qt/epicsqt-2.8.1/framework/widgets/QEImage -I/opt/qt/epicsqt-2.8.1/framework/widgets/QEShape -I/opt/qt/epicsqt-2.8.1/framework/widgets/QEComboBox -I/opt/qt/epicsqt-2.8.1/framework/common -I/opt/qt/qt-4.8.5/include/QtXml -I/opt/qt/qwt-6.0.2/src -I/opt/qt/myPlugins-2.8.1/widgets -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/qt/qt-4.8.5/lib
LIBS          = $(SUBLIBS)  -L/opt/qt/qt-4.8.5/lib -L/opt/qt/qt/plugins/designer -lQEPlugin -lmyPlugin -lQtMultimedia -L/opt/qt/qt-4.8.5/lib -L/usr/X11R6/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qt/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = mainwindow.cpp \
		main.cpp moc_mainwindow.cpp \
		qrc_video.cpp
OBJECTS       = mainwindow.o \
		main.o \
		moc_mainwindow.o \
		qrc_video.o
DIST          = /opt/qt/qt-4.8.5/mkspecs/common/unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/linux.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/gcc-base.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/gcc-base-unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/g++-base.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/g++-unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/qconfig.pri \
		/opt/qt/qt-4.8.5/mkspecs/features/qt_functions.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/qt_config.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/exclusive_builds.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/default_pre.prf \
		/opt/qt/arch.pri \
		/opt/qt/qt-4.8.5/mkspecs/features/release.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/default_post.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/shared.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/warn_on.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/qt.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/unix/thread.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/moc.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/resources.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/uic.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/yacc.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/lex.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/include_source_dir.prf \
		video.pro
QMAKE_TARGET  = video
DESTDIR       = arch-64/
TARGET        = arch-64/video

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) arch-64/ || $(MKDIR) arch-64/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: video.pro  /opt/qt/qt-4.8.5/mkspecs/linux-g++/qmake.conf /opt/qt/qt-4.8.5/mkspecs/common/unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/linux.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/gcc-base.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/gcc-base-unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/g++-base.conf \
		/opt/qt/qt-4.8.5/mkspecs/common/g++-unix.conf \
		/opt/qt/qt-4.8.5/mkspecs/qconfig.pri \
		/opt/qt/qt-4.8.5/mkspecs/features/qt_functions.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/qt_config.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/exclusive_builds.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/default_pre.prf \
		/opt/qt/arch.pri \
		/opt/qt/qt-4.8.5/mkspecs/features/release.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/default_post.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/shared.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/warn_on.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/qt.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/unix/thread.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/moc.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/resources.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/uic.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/yacc.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/lex.prf \
		/opt/qt/qt-4.8.5/mkspecs/features/include_source_dir.prf \
		/opt/qt/qt-4.8.5/lib/libQtMultimedia.prl \
		/opt/qt/qt-4.8.5/lib/libQtGui.prl \
		/opt/qt/qt-4.8.5/lib/libQtCore.prl
	$(QMAKE) -o Makefile video.pro
/opt/qt/qt-4.8.5/mkspecs/common/unix.conf:
/opt/qt/qt-4.8.5/mkspecs/common/linux.conf:
/opt/qt/qt-4.8.5/mkspecs/common/gcc-base.conf:
/opt/qt/qt-4.8.5/mkspecs/common/gcc-base-unix.conf:
/opt/qt/qt-4.8.5/mkspecs/common/g++-base.conf:
/opt/qt/qt-4.8.5/mkspecs/common/g++-unix.conf:
/opt/qt/qt-4.8.5/mkspecs/qconfig.pri:
/opt/qt/qt-4.8.5/mkspecs/features/qt_functions.prf:
/opt/qt/qt-4.8.5/mkspecs/features/qt_config.prf:
/opt/qt/qt-4.8.5/mkspecs/features/exclusive_builds.prf:
/opt/qt/qt-4.8.5/mkspecs/features/default_pre.prf:
/opt/qt/arch.pri:
/opt/qt/qt-4.8.5/mkspecs/features/release.prf:
/opt/qt/qt-4.8.5/mkspecs/features/default_post.prf:
/opt/qt/qt-4.8.5/mkspecs/features/shared.prf:
/opt/qt/qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf:
/opt/qt/qt-4.8.5/mkspecs/features/warn_on.prf:
/opt/qt/qt-4.8.5/mkspecs/features/qt.prf:
/opt/qt/qt-4.8.5/mkspecs/features/unix/thread.prf:
/opt/qt/qt-4.8.5/mkspecs/features/moc.prf:
/opt/qt/qt-4.8.5/mkspecs/features/resources.prf:
/opt/qt/qt-4.8.5/mkspecs/features/uic.prf:
/opt/qt/qt-4.8.5/mkspecs/features/yacc.prf:
/opt/qt/qt-4.8.5/mkspecs/features/lex.prf:
/opt/qt/qt-4.8.5/mkspecs/features/include_source_dir.prf:
/opt/qt/qt-4.8.5/lib/libQtMultimedia.prl:
/opt/qt/qt-4.8.5/lib/libQtGui.prl:
/opt/qt/qt-4.8.5/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile video.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/video1.0.0 || $(MKDIR) .tmp/video1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/video1.0.0/ && $(COPY_FILE) --parents mainwindow.h .tmp/video1.0.0/ && $(COPY_FILE) --parents video.qrc .tmp/video1.0.0/ && $(COPY_FILE) --parents mainwindow.cpp main.cpp .tmp/video1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/video1.0.0/ && (cd `dirname .tmp/video1.0.0` && $(TAR) video1.0.0.tar video1.0.0 && $(COMPRESS) video1.0.0.tar) && $(MOVE) `dirname .tmp/video1.0.0`/video1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/video1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp
moc_mainwindow.cpp: mainwindow.h
	/opt/qt/qt-4.8.5/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all: qrc_video.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_video.cpp
qrc_video.cpp: video.qrc \
		qss/video.qss \
		qss/myStyle.qss
	/opt/qt/qt-4.8.5/bin/rcc -name video video.qrc -o qrc_video.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui
	/opt/qt/qt-4.8.5/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

main.o: main.cpp mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

qrc_video.o: qrc_video.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_video.o qrc_video.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

