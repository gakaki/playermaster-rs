
/* public: class CSize __thiscall CGridCtrl::GetCellTextExtent(int,int) */

int __thiscall CGridCtrl::GetCellTextExtent(CGridCtrl *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  wchar_t *in_stack_0000000c;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x16bc0  125  ?GetCellTextExtent@CGridCtrl@@QAE?AVCSize@@HH@Z */
  iVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446e79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)CGridCtrl::GetItemText(this,(int)&param_2,param_2);
  local_8 = 0;
  uVar3 = *puVar2;
  CGridCtrl::GetTextExtent(this,param_1,iVar1,in_stack_0000000c);
  Ordinal_1042(uVar3);
  ExceptionList = local_10;
  return param_1;
}

