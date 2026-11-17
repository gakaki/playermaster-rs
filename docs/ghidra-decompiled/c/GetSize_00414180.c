
/* public: virtual int __thiscall CPublishDetailInfo::GetSize(void) */

int __thiscall CPublishDetailInfo::GetSize(CPublishDetailInfo *this)

{
                    /* 0x14180  322  ?GetSize@CPublishDetailInfo@@UAEHXZ */
  return (*(int *)(this + 8) - *(int *)(this + 4)) / 0x2c;
}

