/*
    graphia - little tool for building designer diagram
    Copyright (C) 2012  Mickael Sergent

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef DIALOGNEWDIAGRAM_H
#define DIALOGNEWDIAGRAM_H

#include <QDialog>
#include <QComboBox>
#include <QLineEdit>

class CDialogNewDiagram : public QDialog
{
public:
  explicit CDialogNewDiagram(QWidget* parent = 0, Qt::WindowFlags f = 0);
  virtual ~CDialogNewDiagram();

  QString getDiagramName() { return m_editName->text(); }
  QString getProcessName() { return m_editProcessName->text(); }
  int getType();
  
protected:
  QComboBox* m_comboType;
  QLineEdit* m_editName;
  QLineEdit* m_editProcessName;

private:
  void buildDialog();
  void updateCombo();
};

#endif // DIALOGNEWDIAGRAM_H
