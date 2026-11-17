
/* public: void __thiscall CScheduleData::SetCommandArray(class CArray<struct
   sCommandSchedule,struct sCommandSchedule &> &) */

void __thiscall
CScheduleData::SetCommandArray
          (CScheduleData *this,CArray<sCommandSchedule,sCommandSchedule&> *param_1)

{
                    /* 0x12370  471
                       ?SetCommandArray@CScheduleData@@QAEXAAV?$CArray@UsCommandSchedule@@AAU1@@@@Z
                        */
  if (this + 0x18 != (CScheduleData *)param_1) {
    FUN_00419f50(this + 0x18,*(int *)(param_1 + 8));
    FUN_0041a220(*(int *)(this + 0x1c),*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  return;
}

