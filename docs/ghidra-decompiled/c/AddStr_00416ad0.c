
/* public: void __thiscall CGridCtrl::AddStr(class ATL::CStringT<wchar_t,class
   StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >) */

void __thiscall CGridCtrl::AddStr(CGridCtrl *this,undefined1 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x16ad0  80
                       ?AddStr@CGridCtrl@@QAEXV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@@Z
                        */
  puStack_c = &LAB_00446ad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_13117(*(undefined4 *)(this + 0x164),&param_2,DAT_0046400c ^ (int)register0x00000010 - 4U);
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

