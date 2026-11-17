
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CGridCtrl::GetStr(int) */

int __thiscall CGridCtrl::GetStr(CGridCtrl *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int in_stack_00000008;
  
                    /* 0x16b30  331
                       ?GetStr@CGridCtrl@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@H@Z
                        */
  if ((in_stack_00000008 < 0) || (*(int *)(this + 0x164) <= in_stack_00000008)) {
    Ordinal_2341(0);
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  Ordinal_280(*(int *)(this + 0x160) + in_stack_00000008 * 4);
  return param_1;
}

