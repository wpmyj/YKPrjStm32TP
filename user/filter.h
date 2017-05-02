#ifndef _FILTER_H
#define _FILTER_H

#include "global.h"
///////////////////////////////////////////////////
////////////////////////////////////////////////////
#define      AD_AVER_CNT                 16

#define      AD_AVER_CNT1                 16   //��һ��ƽ����  8 ����ȡ�м�4�� 
/////////////////////////////////////////////////////////////
#define      AD_AVER_CNT2                 16   //�ڶ���ƽ����  Ȼ��ȡƽ��ֵ

///��������Զ����ٷ�Χ 8�����ڸ��ٵ�
#define      AUTO_0_SETUP                 10

extern Uint8 flag_auto_track_enable,auto_track_cnt;  //����������¶��������Զ����ٺ��غɸ���
extern Uint8 flag_load_track_enable,load_track_cnt; 


extern  Uint32 Get_Filter_Data(void);
extern  void   filter(void);
extern  void   filter_init(void);
extern  void   stable_manual_break(void);
extern  Uint32 stable_load_zer0(Uint32 weight2);
extern  void   auto_zer0(Uint32 weight1);

extern  float   filter_ad_NTC(Uint16 ntc_data);

#endif