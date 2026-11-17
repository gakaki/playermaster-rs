
bool __thiscall FUN_0041e530(void *this,int param_1,int param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (*(int *)((int)this + 4) != 0) {
      cef_string_utf16_clear(*(int *)((int)this + 4));
    }
    return true;
  }
  if (*(int *)((int)this + 4) == 0) {
    puVar1 = (undefined8 *)Ordinal_1506(0xc);
    *(undefined8 **)((int)this + 4) = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)this + 8) = 1;
  }
  iVar2 = cef_string_utf16_set(param_1,param_2,*(undefined4 *)((int)this + 4),param_3);
  return iVar2 != 0;
}

