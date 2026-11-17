
void __thiscall FUN_0040b800(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446438;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (uint)(local_2c + 10);
  ExceptionList = &local_10;
  *(undefined ***)this = CefStringBase<CefStringTraitsUTF16>::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_14 = uVar2;
  if (param_1 != (int *)0x0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if ((char)*param_1 == '\0') {
      uVar3 = 0;
    }
    else {
      piVar4 = param_1;
      do {
        iVar1 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar1 != '\0');
      uVar3 = (int)piVar4 - ((int)param_1 + 1);
    }
    FUN_0040bdf0(local_2c,param_1,uVar3);
    local_8 = 0;
    FUN_0040b9f0(this,local_2c);
    if (0xf < local_18) {
      Ordinal_1508(local_2c[0],uVar2);
    }
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_2c + 10));
  return;
}

