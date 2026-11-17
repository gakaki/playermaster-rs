
/* protected: int __thiscall CScheduleData::IsBetweenStartAndEnd(class ATL::CTime,class
   ATL::CTime,class ATL::CTime) */

int __thiscall
CScheduleData::IsBetweenStartAndEnd
          (undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
          int param_7)

{
                    /* 0x12490  390  ?IsBetweenStartAndEnd@CScheduleData@@IAEHVCTime@ATL@@00@Z */
  if (((param_3 < param_5) || (((param_3 <= param_5 && (param_2 < param_4)) || (param_7 < param_3)))
      ) || ((param_7 <= param_3 && (param_6 <= param_2)))) {
    return 0;
  }
  return 1;
}

