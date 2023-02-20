// Copyright 1996-2023 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef WB_CONTEXT_MENU_GENERATOR_HPP
#define WB_CONTEXT_MENU_GENERATOR_HPP

//
// Description: namespace for generating scene tree and view3d context menus
//

#include <QtCore/QPoint>

class QMenu;
class WbNode;

namespace WbContextMenuGenerator {
  void generateContextMenu(const QPoint &position, const WbNode *selectedNode);
  void enableNodeActions(bool enabled);
  void enableProtoActions(bool enabled);
  void enableExternProtoActions(bool enabled);
  void enableRobotActions(bool enabled);
  void setRobotCameraMenu(QMenu *menu);
  void setRobotRangeFinderMenu(QMenu *menu);
  void setRobotDisplayMenu(QMenu *menu);
};  // namespace WbContextMenuGenerator

#endif
