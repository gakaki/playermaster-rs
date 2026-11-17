
/* protected: int __thiscall CGridCtrl::SetCell(int,int,class CGridCellBase *) */

int __thiscall CGridCtrl::SetCell(CGridCtrl *this,int param_1,int param_2,CGridCellBase *param_3)

{
  int iVar1;
  
                    /* 0x17790  467  ?SetCell@CGridCtrl@@IAEHHHPAVCGridCellBase@@@Z */
  if (*(int *)(this + 0xe8) != 0) {
    return 0;
  }
  if ((((-1 < param_1) && (param_1 < *(int *)(this + 0x174))) && (-1 < param_2)) &&
     (param_2 < *(int *)(this + 0x17c))) {
    if (param_1 < *(int *)(this + 0x37c)) {
      iVar1 = *(int *)(*(int *)(this + 0x378) + param_1 * 4);
      if (iVar1 == 0) {
        return 0;
      }
      (**(code **)(*(int *)param_3 + 0x3c))(param_1,param_2);
      if (param_2 < *(int *)(iVar1 + 8)) {
        *(CGridCellBase **)(*(int *)(iVar1 + 4) + param_2 * 4) = param_3;
        return 1;
      }
    }
    Ordinal_2341();
  }
  return 0;
}

