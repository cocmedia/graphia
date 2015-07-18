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
#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <QWidget>
#include <QVBoxLayout>
#include "diagrams/generic/toolitemmodel.h"
#include "widgets/buttongroup.h"
#include "diagrams/flow/graphics/graphicsscene.h"

class CToolBox : public QWidget
{
  Q_OBJECT

public:
  explicit CToolBox(CToolItemModel* model, QWidget* parent = 0, Qt::WindowFlags f = 0);
  virtual ~CToolBox();
    
signals:
  void itemSelected(int id, CToolButton::STATE state);

public slots:
  void onChangeTypeOfDiagram(CGraphicsScene* newDiagram);
  void onSelectButton(int id, CToolButton::STATE state);
  void returnToSelectButton();

protected:
  void createAllButtonsState(QVBoxLayout* layout);
  void updateButtonState();
  void resetButtonState();
  
protected:
  CButtonGroup* m_btnGroup;
  CToolItemModel* m_model;
  
private:
  
};

#endif // TOOLBOX_H