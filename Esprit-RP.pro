#-------------------------------------------------
#
# Project created by QtCreator 2013-10-27T14:16:56
#
#-------------------------------------------------

QT       += core gui sql network multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Esprit-RP
TEMPLATE = app


SOURCES +=\
    src/main.cpp \
    src/login.cpp \
    src/home.cpp \
    src/student_management.cpp \
    src/teachers_management.cpp \
    src/student_information.cpp \
    src/teacher_information.cpp \
    src/aboutesprit_rp.cpp \
    src/maintenance.cpp \
    src/statistics.cpp \
    src/employees_management.cpp \
    src/financial_management.cpp \
    src/project_mangement.cpp \
    src/employees_information.cpp \
    src/user.cpp \
    src/administrator.cpp \
    src/student.cpp \
    src/time_table.cpp \
    src/time_table_widget.cpp \
    src/postoffice.cpp \
    src/SmtpClient/emailaddress.cpp \
    src/SmtpClient/mimeattachment.cpp \
    src/SmtpClient/mimecontentformatter.cpp \
    src/SmtpClient/mimefile.cpp \
    src/SmtpClient/mimehtml.cpp \
    src/SmtpClient/mimeinlinefile.cpp \
    src/SmtpClient/mimemessage.cpp \
    src/SmtpClient/mimemultipart.cpp \
    src/SmtpClient/mimepart.cpp \
    src/SmtpClient/mimetext.cpp \
    src/SmtpClient/quotedprintable.cpp \
    src/SmtpClient/smtpclient.cpp \
    src/mailclient.cpp \
    src/account_management.cpp \
    src/simplecrypt.cpp \
    src/pass_demande.cpp \
    src/sessions.cpp \
    src/sessions_management.cpp \
    src/session.cpp \
    src/classes.cpp \
    src/class_widget.cpp \
    src/employees.cpp \
    src/mainwindow.cpp \
    src/grades_management.cpp \
    src/teacher.cpp \
    src/grades_table.cpp \
    src/camera.cpp \
    src/stylesheet.cpp  \
    src/edit_add.cpp \
    src/delete_maintenance.cpp \
    src/edit_maintenance.cpp \
    src/products.cpp \
    src/financialagent.cpp \
    src/qcustomplot.cpp \
    src/statisticsdrawer.cpp \
    src/qcpdocumentobject.cpp

HEADERS  += \
    headers/Prototype.h \
    headers/login.h \
    headers/home.h \
    headers/student_management.h \
    headers/teachers_management.h \
    headers/student_information.h \
    headers/teacher_information.h \
    headers/aboutesprit_rp.h \
    headers/maintenance.h \
    headers/statistics.h \
    headers/employees_management.h \
    headers/financial_management.h \
    headers/project_mangement.h \
    headers/employees_information.h \
    headers/user.h \
    headers/administrator.h \
    headers/student.h \
    headers/time_table.h \
    headers/time_table_widget.h \
    headers/postoffice.h \
    headers/SmtpClient/emailaddress.h \
    headers/SmtpClient/mimeattachment.h \
    headers/SmtpClient/mimecontentformatter.h \
    headers/SmtpClient/mimefile.h \
    headers/SmtpClient/mimehtml.h \
    headers/SmtpClient/mimeinlinefile.h \
    headers/SmtpClient/mimemessage.h \
    headers/SmtpClient/mimemultipart.h \
    headers/SmtpClient/mimepart.h \
    headers/SmtpClient/mimetext.h \
    headers/SmtpClient/quotedprintable.h \
    headers/SmtpClient/smtpclient.h \
    headers/SmtpClient/SmtpMime.h \
    headers/mailclient.h \
    headers/account_management.h \
    headers/simplecrypt.h \
    headers/pass_demande.h \
    headers/sessions.h \
    headers/sessions_management.h \
    headers/session.h \
    headers/classes.h \
    headers/class_widget.h \
    headers/employees.h \
    headers/mainwindow.h \
    headers/grades_management.h \
    headers/teacher.h \
    headers/grades_table.h \
    headers/camera.h \
    headers/stylesheet.h \
    headers/delete_maintenance.h \
    headers/edit_add.h \
    headers/edit_maintenance.h \
    headers/project_mangement.h \
    headers/products.h \
    headers/delete_maintenance.h \
    headers/financialagent.h \
    headers/qcustomplot.h \
    headers/statisticsdrawer.h \
    qcpdocumentobject.h \
    headers/qcpdocumentobject.h
FORMS+= \
    Ressources/home.ui \
    Ressources/login.ui \
    Ressources/student_management.ui \
    Ressources/teachers_management.ui \
    Ressources/student_information.ui \
    Ressources/teacher_information.ui \
    Ressources/aboutesprit_rp.ui \
    Ressources/maintenance.ui \
    Ressources/statistics.ui \
    Ressources/employees_management.ui \
    Ressources/financial_management.ui \
    Ressources/project_mangement.ui \
    Ressources/employees_information.ui \
    Ressources/time_table.ui \
    Ressources/time_table_widget.ui \
    Ressources/mailclient.ui \
    Ressources/account_management.ui \
    Ressources/pass_demande.ui \
    Ressources/sessions_management.ui \
    Ressources/session.ui \
    Ressources/class_widget.ui \
    Ressources/mainwindow.ui \
    Ressources/grades_management.ui \
    Ressources/camera.ui \
    Ressources/stylesheet.ui \
    Ressources/edit_add.ui \
    Ressources/delete_maintenance.ui \
    Ressources/edit_maintenance.ui

RESOURCES += \
    Ressources.qrc
