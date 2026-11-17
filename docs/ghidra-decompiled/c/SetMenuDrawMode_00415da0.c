
/* public: void __thiscall BCMenu::SetMenuDrawMode(unsigned int) */

void __thiscall BCMenu::SetMenuDrawMode(BCMenu *this,uint param_1)

{
                    /* 0x15da0  571  ?SetMenuDrawMode@BCMenu@@QAEXI@Z */
  *(uint *)(this + 0x44) = param_1;
  *(uint *)(this + 0x4c) = param_1;
  return;
}

