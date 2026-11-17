
int __thiscall FUN_0041dd20(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = **(uint **)((int)this + 0x1c);
  if ((uVar1 != 0) && (**(uint **)((int)this + 0xc) < uVar1)) {
    if ((param_1 == -1) ||
       (((char)param_1 == *(char *)(uVar1 - 1) || ((*(byte *)((int)this + 0x3c) & 2) == 0)))) {
      **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) + 1;
      **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + -1;
      if (param_1 == -1) {
        return 0;
      }
      *(char *)**(undefined4 **)((int)this + 0x1c) = (char)param_1;
      return param_1;
    }
  }
  return -1;
}

