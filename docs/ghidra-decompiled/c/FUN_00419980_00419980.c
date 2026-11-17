
void __thiscall FUN_00419980(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  for (iVar4 = *(int *)this; iVar4 != iVar1; iVar4 = iVar4 + 4) {
    Ordinal_1042();
  }
  *(int *)((int)this + 4) = *(int *)this;
  if (param_1 != param_2) {
    uVar2 = param_2 - param_1 >> 2;
    uVar3 = *(int *)((int)this + 8) - *(int *)this >> 2;
    if (uVar3 < uVar2) {
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
      }
      FUN_00418b00(this);
      FUN_00418a60(this,uVar3);
    }
    iVar4 = FUN_0041b610(param_1,param_2,*(int *)this);
    *(int *)((int)this + 4) = iVar4;
  }
  return;
}

