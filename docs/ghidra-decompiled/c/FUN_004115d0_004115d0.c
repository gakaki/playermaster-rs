
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_004115d0(void *this,uint param_1,uint param_2)

{
  double in_XMM0_Qa;
  double dVar1;
  wchar_t *pwVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446aaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_296(DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  if (param_2 == 0) {
    if (param_1 < 0x401) {
      Ordinal_4772(this,L"%d Bytes",param_1);
      ExceptionList = local_10;
      return this;
    }
    if (param_1 < 0x100001) {
      FUN_0044580c(param_1,0);
      dVar1 = (double)((float)in_XMM0_Qa * _DAT_0044fea4);
      pwVar2 = L"%.1f KB";
      goto LAB_0041175a;
    }
    if (param_1 < 0x40000001) {
      FUN_0044580c(param_1 >> 10,0);
      dVar1 = (double)((float)in_XMM0_Qa * _DAT_0044fea4);
      pwVar2 = L"%.1f MB";
      goto LAB_0041175a;
    }
  }
  if ((param_2 < 3) && ((param_2 < 2 || (param_1 < 0x80000001)))) {
    FUN_0044580c(param_1 >> 0x14 | param_2 << 0xc,param_2 >> 0x14);
    dVar1 = (double)((float)in_XMM0_Qa * _DAT_0044fea4);
    pwVar2 = L"%.2f GB";
  }
  else if ((param_2 < 0x1a) && ((param_2 < 0x19 || (param_1 == 0)))) {
    FUN_0044580c(param_1 >> 0x14 | param_2 << 0xc,param_2 >> 0x14);
    dVar1 = (double)((float)in_XMM0_Qa * _DAT_0044fea4);
    pwVar2 = L"%.1f GB";
  }
  else {
    FUN_0044580c(param_1 >> 0x14 | param_2 << 0xc,param_2 >> 0x14);
    dVar1 = (double)((float)in_XMM0_Qa * _DAT_0044fea4);
    pwVar2 = L"%.0f GB";
  }
LAB_0041175a:
  Ordinal_4772(this,pwVar2,dVar1);
  ExceptionList = local_10;
  return this;
}

