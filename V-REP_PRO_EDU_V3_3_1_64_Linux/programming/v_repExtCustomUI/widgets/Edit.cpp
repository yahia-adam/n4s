#include "Edit.h"

#include "XMLUtils.h"

#include "UIProxy.h"

#include <QLineEdit>

Edit::Edit()
    : Widget("edit")
{
}

Edit::~Edit()
{
}

void Edit::parse(Widget *parent, std::map<int, Widget*>& widgets, tinyxml2::XMLElement *e)
{
    Widget::parse(parent, widgets, e);

    value = xmlutils::getAttrStr(e, "value", "");

    onchange = xmlutils::getAttrStr(e, "onchange", "");
}

QWidget * Edit::createQtWidget(Proxy *proxy, UIProxy *uiproxy, QWidget *parent)
{
    QLineEdit *edit = new QLineEdit(parent);
    edit->setText(QString::fromStdString(value));
    QObject::connect(edit, SIGNAL(textChanged(QString)), uiproxy, SLOT(onValueChange(QString)));
    setQWidget(edit);
    setProxy(proxy);
    return edit;
}

