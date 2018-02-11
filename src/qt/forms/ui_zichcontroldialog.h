/********************************************************************************
** Form generated from reading UI file 'zichcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZICHCONTROLDIALOG_H
#define UI_ZICHCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZICHControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZICH;
    QLabel *labelZICH_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZICHControlDialog)
    {
        if (ZICHControlDialog->objectName().isEmpty())
            ZICHControlDialog->setObjectName(QStringLiteral("ZICHControlDialog"));
        ZICHControlDialog->resize(681, 384);
        ZICHControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZICHControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZICHControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZICHControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZICH = new QLabel(ZICHControlDialog);
        labelZICH->setObjectName(QStringLiteral("labelZICH"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZICH);

        labelZICH_int = new QLabel(ZICHControlDialog);
        labelZICH_int->setObjectName(QStringLiteral("labelZICH_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZICH_int);

        pushButtonAll = new QPushButton(ZICHControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZICHControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zICH Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZICHControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZICHControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZICHControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZICHControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZICHControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZICHControlDialog)
    {
        ZICHControlDialog->setWindowTitle(QApplication::translate("ZICHControlDialog", "Select zICH to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZICHControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZICHControlDialog", "0", Q_NULLPTR));
        labelZICH->setText(QApplication::translate("ZICHControlDialog", "zICH", Q_NULLPTR));
        labelZICH_int->setText(QApplication::translate("ZICHControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZICHControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZICHControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZICHControlDialog: public Ui_ZICHControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZICHCONTROLDIALOG_H
