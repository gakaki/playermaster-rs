
/* private: void __thiscall CProgramPathList::GenerateGuid2String(class ATL::CStringT<wchar_t,class
   StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,struct _GUID &) */

void __thiscall
CProgramPathList::GenerateGuid2String
          (CProgramPathList *this,
          CStringT<wchar_t,StrTraitMFC_DLL<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
          _GUID *param_2)

{
                    /* 0x127f0  103
                       ?GenerateGuid2String@CProgramPathList@@AAEXAAV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@AAU_GUID@@@Z
                       0x127f0  104
                       ?GenerateGuid2String@CSchedulePathList@@AAEXAAV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@AAU_GUID@@@Z
                        */
  Ordinal_4772(param_1,L"%08X%04X%04x%02X%02X%02X%02X%02X%02X%02X%02X",param_2->Data1,param_2->Data2
               ,param_2->Data3,param_2->Data4[0],param_2->Data4[1],param_2->Data4[2],
               param_2->Data4[3],param_2->Data4[4],param_2->Data4[5],param_2->Data4[6],
               param_2->Data4[7]);
  return;
}

