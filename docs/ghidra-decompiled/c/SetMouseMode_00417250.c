
/* protected: int __thiscall CGridCtrl::SetMouseMode(int) */

int __thiscall CGridCtrl::SetMouseMode(CGridCtrl *this,int param_1)

{
  int iVar1;
  
                    /* 0x17250  575  ?SetMouseMode@CGridCtrl@@IAEHH@Z */
  iVar1 = *(int *)(this + 0x388);
  *(int *)(this + 0x388) = param_1;
  return iVar1;
}

