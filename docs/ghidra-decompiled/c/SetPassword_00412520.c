
/* public: void __thiscall CServerData::SetPassword(wchar_t const *) */

void __thiscall CServerData::SetPassword(CServerData *this,wchar_t *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12520  582  ?SetPassword@CServerData@@QAEXPB_W@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446b09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = Ordinal_286(param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  Ordinal_1518(uVar1);
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

