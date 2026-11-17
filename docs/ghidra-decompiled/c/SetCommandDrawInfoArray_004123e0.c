
/* public: void __thiscall CScheduleData::SetCommandDrawInfoArray(class CArray<struct
   sCommandDrawInfo,struct sCommandDrawInfo &> &) */

void __thiscall
CScheduleData::SetCommandDrawInfoArray
          (CScheduleData *this,CArray<sCommandDrawInfo,sCommandDrawInfo&> *param_1)

{
                    /* 0x123e0  472
                       ?SetCommandDrawInfoArray@CScheduleData@@QAEXAAV?$CArray@UsCommandDrawInfo@@AAU1@@@@Z
                        */
  if (this + 0x40 != (CScheduleData *)param_1) {
    FUN_0041a680(this + 0x40,*(int *)(param_1 + 8));
    FUN_0041a940(*(int *)(this + 0x44),*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  return;
}

