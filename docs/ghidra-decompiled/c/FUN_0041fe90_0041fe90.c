
undefined4 __thiscall FUN_0041fe90(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x30) || ((code *)puVar1[0xb] == (code *)0x0)) || (param_1 == 0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0xb])(puVar1,param_1,param_2,param_3,uVar2);
  return uVar2;
}

