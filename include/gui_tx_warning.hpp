#pragma once

#include "gui.hpp"

#include <vector>
#include <unordered_map>

class GuiTXWarning : public Gui {
public:
  GuiTXWarning();
  ~GuiTXWarning();

  void update();
  void draw();
  void onInput(u32 kdown);
  void onTouch(touchPosition &touch);
  void onGesture(touchPosition &startPosition, touchPosition &endPosition);
};
