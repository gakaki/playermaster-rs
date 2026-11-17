
bool __thiscall
FUN_0043ef90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x20) || ((code *)puVar1[7] == (code *)0x0)) || (param_6 == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[7])(puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3)
  ;
  return iVar2 != 0;
}

