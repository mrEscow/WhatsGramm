QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    EnterWindow.cpp \
    FacadeWindows.cpp \
    LoginWindow.cpp \
    RegistrationWindow.cpp \
    SqlDataBase.cpp \
    UserWindow.cpp \
    main.cpp

HEADERS += \
    EnterWindow.h \
    FacadeWindows.h \
    LoginWindow.h \
    RegistrationWindow.h \
    SqlDataBase.h \
    UserWindow.h

FORMS += \
    EnterWindow.ui \
    LoginWindow.ui \
    RegistrationWindow.ui \
    UserWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
