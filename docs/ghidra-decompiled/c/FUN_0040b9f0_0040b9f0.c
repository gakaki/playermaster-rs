
bool __thiscall FUN_0040b9f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1[4] == 0) {
    if (*(int *)((int)this + 4) != 0) {
      cef_string_utf16_clear(*(int *)((int)this + 4));
    }
    return true;
  }
  if (*(int *)((int)this + 4) == 0) {
    puVar2 = (undefined8 *)Ordinal_1506(0xc);
    *(undefined8 **)((int)this + 4) = puVar2;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)((int)this + 8) = 1;
  }
  puVar1 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar3 = cef_string_utf8_to_utf16(param_1,*puVar1,*(undefined4 *)((int)this + 4));
  return iVar3 != 0;
}

