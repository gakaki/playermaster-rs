
void FUN_0041d77d(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0045172c; puVar1 < &DAT_0045172c; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}

