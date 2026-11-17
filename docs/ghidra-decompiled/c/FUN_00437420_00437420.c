
void __thiscall FUN_00437420(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  
  if (*(undefined4 **)((int)this + 0xc4) != param_1) {
    FUN_004375d0((int)param_1);
  }
  _Dst = (undefined4 *)((int)this + 4);
  puVar2 = _Dst;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  memset(_Dst,0,0xc0);
  *(undefined4 *)((int)this + 0xc4) = 0;
  *_Dst = 0xc0;
  return;
}

