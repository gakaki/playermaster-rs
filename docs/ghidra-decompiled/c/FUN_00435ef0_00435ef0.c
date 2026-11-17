
undefined4 * __thiscall FUN_00435ef0(void *this,undefined4 *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x74) || (puVar1[0x1c] == 0)) {
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_0044bd28;
    return param_1;
  }
  uVar2 = (*(code *)puVar1[0x1c])(puVar1,uVar3);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 1) = uVar2;
  *param_1 = &PTR_FUN_0044bd28;
  return param_1;
}

