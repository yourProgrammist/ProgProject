/********************************************************************************
** Form generated from reading UI file 'authform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHFORM_H
#define UI_AUTHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *log_horizontalLayout;
    QLabel *log_label;
    QLineEdit *log_lineEdit;
    QHBoxLayout *pass_horizontalLayout;
    QLabel *pass_label;
    QLineEdit *pass_lineEdit;
    QHBoxLayout *mail_horizontalLayout;
    QLabel *mail_label;
    QLineEdit *mail_lineEdit;
    QHBoxLayout *but_horizontalLayout;
    QPushButton *but_sign_in;
    QPushButton *but_sign_up;
    QPushButton *but_exit;

    void setupUi(QWidget *AuthForm)
    {
        if (AuthForm->objectName().isEmpty())
            AuthForm->setObjectName("AuthForm");
        AuthForm->resize(804, 607);
        verticalLayoutWidget = new QWidget(AuthForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 50, 521, 441));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        log_horizontalLayout = new QHBoxLayout();
        log_horizontalLayout->setObjectName("log_horizontalLayout");
        log_label = new QLabel(verticalLayoutWidget);
        log_label->setObjectName("log_label");

        log_horizontalLayout->addWidget(log_label);

        log_lineEdit = new QLineEdit(verticalLayoutWidget);
        log_lineEdit->setObjectName("log_lineEdit");

        log_horizontalLayout->addWidget(log_lineEdit);


        verticalLayout_4->addLayout(log_horizontalLayout);

        pass_horizontalLayout = new QHBoxLayout();
        pass_horizontalLayout->setObjectName("pass_horizontalLayout");
        pass_label = new QLabel(verticalLayoutWidget);
        pass_label->setObjectName("pass_label");

        pass_horizontalLayout->addWidget(pass_label);

        pass_lineEdit = new QLineEdit(verticalLayoutWidget);
        pass_lineEdit->setObjectName("pass_lineEdit");

        pass_horizontalLayout->addWidget(pass_lineEdit);


        verticalLayout_4->addLayout(pass_horizontalLayout);

        mail_horizontalLayout = new QHBoxLayout();
        mail_horizontalLayout->setObjectName("mail_horizontalLayout");
        mail_label = new QLabel(verticalLayoutWidget);
        mail_label->setObjectName("mail_label");

        mail_horizontalLayout->addWidget(mail_label);

        mail_lineEdit = new QLineEdit(verticalLayoutWidget);
        mail_lineEdit->setObjectName("mail_lineEdit");

        mail_horizontalLayout->addWidget(mail_lineEdit);


        verticalLayout_4->addLayout(mail_horizontalLayout);

        but_horizontalLayout = new QHBoxLayout();
        but_horizontalLayout->setObjectName("but_horizontalLayout");
        but_sign_in = new QPushButton(verticalLayoutWidget);
        but_sign_in->setObjectName("but_sign_in");

        but_horizontalLayout->addWidget(but_sign_in);

        but_sign_up = new QPushButton(verticalLayoutWidget);
        but_sign_up->setObjectName("but_sign_up");

        but_horizontalLayout->addWidget(but_sign_up);

        but_exit = new QPushButton(verticalLayoutWidget);
        but_exit->setObjectName("but_exit");

        but_horizontalLayout->addWidget(but_exit);


        verticalLayout_4->addLayout(but_horizontalLayout);


        retranslateUi(AuthForm);

        QMetaObject::connectSlotsByName(AuthForm);
    } // setupUi

    void retranslateUi(QWidget *AuthForm)
    {
        AuthForm->setWindowTitle(QCoreApplication::translate("AuthForm", "Form", nullptr));
        log_label->setText(QCoreApplication::translate("AuthForm", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pass_label->setText(QCoreApplication::translate("AuthForm", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        mail_label->setText(QCoreApplication::translate("AuthForm", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        but_sign_in->setText(QCoreApplication::translate("AuthForm", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        but_sign_up->setText(QCoreApplication::translate("AuthForm", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        but_exit->setText(QCoreApplication::translate("AuthForm", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthForm: public Ui_AuthForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHFORM_H
