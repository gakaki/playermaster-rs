
/* public: void __thiscall CScheduleData::SetContentArray(class CArray<struct
   sContentSchedule,struct sContentSchedule &> &) */

void __thiscall
CScheduleData::SetContentArray
          (CScheduleData *this,CArray<sContentSchedule,sContentSchedule&> *param_1)

{
                    /* 0x12340  473
                       ?SetContentArray@CScheduleData@@QAEXAAV?$CArray@UsContentSchedule@@AAU1@@@@Z
                        */
  if (this + 4 != (CScheduleData *)param_1) {
    FUN_00419bf0(this + 4,*(int *)(param_1 + 8));
    FUN_00419e30(*(int *)(this + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  return;
}

