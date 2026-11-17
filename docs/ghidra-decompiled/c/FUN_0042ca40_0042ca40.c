
void __thiscall FUN_0042ca40(void *this,undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x7c) || ((code *)puVar1[0x1e] == (code *)0x0)) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = &PTR_FUN_0044bd28;
    return;
  }
  puVar6 = (undefined4 *)(*(code *)puVar1[0x1e])(local_18,puVar1);
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  *param_1 = &PTR_FUN_0044bd28;
  return;
}

