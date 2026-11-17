
void __cdecl FUN_004235d0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **local_5c;
  int local_58;
  char local_54;
  undefined **local_50;
  int local_4c;
  char local_48;
  undefined **local_44;
  undefined8 *local_40;
  char local_3c;
  undefined **local_38;
  undefined8 *local_34;
  char local_30;
  undefined4 local_2c [2];
  int *local_24;
  int *local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447ad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = cef_string_multimap_size(param_1,DAT_0046400c ^ (uint)(local_2c + 10));
  local_44 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_40 = (undefined8 *)0x0;
  local_3c = '\0';
  puVar3 = (undefined8 *)0x0;
  local_38 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_34 = (undefined8 *)0x0;
  local_30 = '\0';
  local_8 = 1;
  local_14 = 0;
  if (local_1c != 0) {
    puVar4 = (undefined8 *)0x0;
    do {
      uVar1 = local_14;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)Ordinal_1506(0xc);
        local_3c = '\x01';
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        local_40 = puVar4;
      }
      cef_string_multimap_key(param_1,uVar1,puVar4);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)Ordinal_1506(0xc);
        local_30 = '\x01';
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        local_34 = puVar3;
      }
      cef_string_multimap_value(param_1,uVar1,puVar3);
      local_18 = FUN_00422e60(&local_5c,(int)&local_44,(int)&local_38);
      local_8._0_1_ = 2;
      piVar2 = (int *)Ordinal_1506(0x28);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      *piVar2 = *param_2;
      if (piVar2 + 1 != (int *)0x0) {
        piVar2[1] = *param_2;
      }
      if (piVar2 + 2 != (int *)0x0) {
        piVar2[2] = *param_2;
      }
      local_24 = piVar2 + 4;
      *(undefined2 *)(piVar2 + 3) = 0;
      local_8._0_1_ = 3;
      local_20 = local_24;
      if (local_24 != (int *)0x0) {
        FUN_00422800(local_24,(int)local_18);
      }
      local_8._0_1_ = 2;
      FUN_00422ad0(param_2,local_2c,'\0',(int)(piVar2 + 4),piVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_50 = CefStringBase<CefStringTraitsUTF16>::vftable;
      if (local_4c != 0) {
        if (local_48 != '\0') {
          cef_string_utf16_clear(local_4c);
          Ordinal_1508(local_4c);
        }
        local_4c = 0;
        local_48 = '\0';
      }
      local_5c = CefStringBase<CefStringTraitsUTF16>::vftable;
      if ((local_58 != 0) && (local_54 != '\0')) {
        cef_string_utf16_clear(local_58);
        Ordinal_1508(local_58);
      }
      local_14 = local_14 + 1;
    } while (local_14 < local_1c);
    if ((puVar3 != (undefined8 *)0x0) && (local_30 != '\0')) {
      cef_string_utf16_clear(puVar3);
      Ordinal_1508(puVar3);
    }
    if ((puVar4 != (undefined8 *)0x0) && (local_3c != '\0')) {
      cef_string_utf16_clear(puVar4);
      Ordinal_1508(puVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

