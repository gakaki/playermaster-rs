
/* public: void __thiscall BCMenu::SetSelectDisableMode(int) */

void __thiscall BCMenu::SetSelectDisableMode(BCMenu *this,int param_1)

{
                    /* 0x15db0  601  ?SetSelectDisableMode@BCMenu@@QAEXH@Z */
  *(int *)(this + 0x48) = param_1;
  *(int *)(this + 0x50) = param_1;
  return;
}

