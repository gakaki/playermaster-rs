
/* public: void __thiscall CLanDevice::SetBasicUserName(class ATL::CStringT<wchar_t,class
   StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >) */

void __thiscall CLanDevice::SetBasicUserName(CLanDevice *this,wchar_t *param_2)

{
                    /* 0x11f40  457
                       ?SetBasicUserName@CLanDevice@@QAEXV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@@Z
                        */
  wcscpy_s((wchar_t *)(this + 0x188),0x20,param_2);
  Ordinal_1042();
  return;
}

