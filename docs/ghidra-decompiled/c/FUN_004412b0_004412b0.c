
bool __thiscall
FUN_004412b0(void *this,undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,
            byte *param_5)

{
  uint *puVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  uint local_8;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xdc) || (puVar1[0x36] == 0)) {
    return false;
  }
  local_8 = (uint)*param_3;
  local_c = (uint)*param_4;
  local_10 = (uint)*param_5;
  iVar2 = (*(code *)puVar1[0x36])(puVar1,param_1,param_2,&local_8,&local_c,&local_10);
  *param_3 = local_8 != 0;
  *param_4 = local_c != 0;
  *param_5 = local_10 != 0;
  return iVar2 != 0;
}

