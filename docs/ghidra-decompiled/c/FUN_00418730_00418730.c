
undefined4 * __thiscall FUN_00418730(void *this,int *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_00419120(this,param_1[1] - *param_1 >> 3);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_0041bae0((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  return this;
}

