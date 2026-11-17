
void FUN_0040acc0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined **local_2c;
  int local_28;
  char local_24;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446268;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  FUN_0040b800(&local_2c,(int *)"no-proxy-server");
  local_8._0_1_ = 1;
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x38))(&local_2c,uVar1);
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if ((local_28 != 0) && (local_24 != '\0')) {
    cef_string_utf16_clear(local_28);
    Ordinal_1508(local_28);
  }
  FUN_0040b800(&local_2c,(int *)"--enable-npapi");
  local_8._0_1_ = 2;
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x38))(&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if ((local_28 != 0) && (local_24 != '\0')) {
    cef_string_utf16_clear(local_28);
    Ordinal_1508(local_28);
  }
  FUN_0040b800(&local_2c,(int *)"--disable-web-security");
  local_8._0_1_ = 3;
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x38))(&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if ((local_28 != 0) && (local_24 != '\0')) {
    cef_string_utf16_clear(local_28);
    Ordinal_1508(local_28);
  }
  FUN_0040b800(&local_2c,(int *)"allow-outdated-plugins");
  local_8._0_1_ = 4;
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x38))(&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if ((local_28 != 0) && (local_24 != '\0')) {
    cef_string_utf16_clear(local_28);
    Ordinal_1508(local_28);
  }
  FUN_0040b800(&local_2c,(int *)"34.0.0.164");
  local_8._0_1_ = 5;
  FUN_0040b800(&local_20,(int *)"ppapi-flash-version");
  local_8 = CONCAT31(local_8._1_3_,6);
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x3c))(&local_20,&local_2c);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (local_1c != 0) {
    if (local_18 != '\0') {
      cef_string_utf16_clear(local_1c);
      Ordinal_1508(local_1c);
    }
    local_1c = 0;
    local_18 = '\0';
  }
  local_8 = local_8 & 0xffffff00;
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if ((local_28 != 0) && (local_24 != '\0')) {
    cef_string_utf16_clear(local_28);
    Ordinal_1508(local_28);
  }
  FUN_0040b800(&local_2c,(int *)"pepflashplayer32_34_0_0_164.dll");
  local_8._0_1_ = 7;
  FUN_0040b800(&local_20,(int *)"ppapi-flash-path");
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar2 = (int *)FUN_0040b920(&param_2);
  (**(code **)(*piVar2 + 0x3c))(&local_20,&local_2c);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (local_1c != 0) {
    if (local_18 != '\0') {
      cef_string_utf16_clear(local_1c);
      Ordinal_1508(local_1c);
    }
    local_1c = 0;
    local_18 = '\0';
  }
  local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (local_28 != 0) {
    if (local_24 != '\0') {
      cef_string_utf16_clear(local_28);
      Ordinal_1508(local_28);
    }
    local_28 = 0;
    local_24 = '\0';
  }
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

