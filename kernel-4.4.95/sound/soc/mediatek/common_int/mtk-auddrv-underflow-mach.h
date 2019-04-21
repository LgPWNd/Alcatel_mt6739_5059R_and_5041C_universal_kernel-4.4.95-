

#include <mt-plat/aee.h>

void SetUnderFlowThreshold(unsigned int Threshold);
void Auddrv_Aee_Dump(void);
void Auddrv_Set_UnderFlow(void);
void Auddrv_Reset_Dump_State(void);
void Auddrv_Set_Interrupt_Changed(bool bChange);
void Auddrv_CheckInterruptTiming(void);
void RefineInterrruptInterval(void);
bool Auddrv_Set_DlSamplerate(unsigned int Samplerate);
bool Auddrv_Set_InterruptSample(unsigned int count);
bool Auddrv_Enable_dump(bool bEnable);

