
void __thiscall FUN_0043e130(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447a62;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  piVar3 = *(int **)((int)this + 4);
  if ((param_1 < piVar3) && (piVar1 = *(int **)this, piVar1 <= param_1)) {
    if (piVar3 == *(int **)((int)this + 8)) {
      FUN_00444720(this,1);
    }
    piVar3 = *(int **)((int)this + 4);
    local_8 = 0;
    if (piVar3 == (int *)0x0) goto LAB_0043e1d0;
    iVar4 = *(int *)(*(int *)this + ((int)param_1 - (int)piVar1 >> 2) * 4);
  }
  else {
    if (piVar3 == *(int **)((int)this + 8)) {
      FUN_00444720(this,1);
    }
    piVar3 = *(int **)((int)this + 4);
    local_8 = 1;
    if (piVar3 == (int *)0x0) goto LAB_0043e1d0;
    iVar4 = *param_1;
  }
  *piVar3 = iVar4;
  if (iVar4 != 0) {
    (*(code *)**(undefined4 **)(iVar4 + 4 + *(int *)(*(int *)(iVar4 + 4) + 4)))(uVar2);
  }
LAB_0043e1d0:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  ExceptionList = local_10;
  return;
}

