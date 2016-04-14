#ifndef QT_DIRECTORY_LIST_BOX_H
#define QT_DIRECTORY_LIST_BOX_H

#include <QFrame>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QtGui/qevent.h>

#include "utility/file/FilePath.h"

#include "qt/element/QtLineEdit.h"

class QtDirectoryListBox;

class QtListItemWidget
	: public QWidget
{
	Q_OBJECT

public:
	QtListItemWidget(QtDirectoryListBox* list, QListWidgetItem* item, QWidget *parent = nullptr);

	QString getText();
	void setText(QString text);

public slots:
	void setFocus();

private slots:
	void handleButtonPress();
	void handleFocus();

private:
	QPushButton* m_button;
	QtLineEdit* m_data;

	QtDirectoryListBox* m_list;
	QListWidgetItem* m_item;
};


class QtDirectoryListBox
	: public QFrame
{
	Q_OBJECT

public:
	QtDirectoryListBox(QWidget *parent, bool forStrings = false);

	virtual QSize sizeHint() const override;

	void clear();

	std::vector<FilePath> getList();
	void setList(const std::vector<FilePath>& list);

	std::vector<std::string> getStringList();
	void setStringList(const std::vector<std::string>& list);

	void selectItem(QListWidgetItem* item);

	bool isForStrings() const;

protected:
	bool event(QEvent* event) override;

	void dropEvent(QDropEvent *event) override;
	void dragEnterEvent(QDragEnterEvent* event) override;

private slots:
	void resize();

	QtListItemWidget* addListBoxItem();
	void removeListBoxItem();

private:
	QPushButton* m_addButton;
	QPushButton* m_removeButton;
	QListWidget* m_list;

	bool m_forStrings;
};

#endif // QT_DIRECTORY_LIST_BOX_H
