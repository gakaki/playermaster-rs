
void __thiscall FUN_0041e2a0(void *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    if (*(char *)((int)this + 8) != '\0') {
      cef_string_utf16_clear(*(int *)((int)this + 4));
      Ordinal_1508(*(undefined4 *)((int)this + 4));
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      puVar1 = (undefined8 *)Ordinal_1506(0xc);
      *(undefined8 **)((int)this + 4) = puVar1;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((int)this + 8) = 1;
    }
    puVar1 = *(undefined8 **)((int)this + 4);
    *(undefined1 *)((int)this + 8) = 1;
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    cef_string_userfree_utf16_free(param_1);
  }
  return;
}

