#ifndef _MRC_SOUND_H_
#define _MRC_SOUND_H_
#include <mrc_sound.h>
enum{
_MIDI=1,
_WAVE,
_MP3,
_AMR,
_PCM,
_M4A,
_AMR_WB
};

typedef struct
{
    int32 pos;
}T_DSM_AUDIO_POS;


#define  soundinit   mrc_playSoundExInit
#define soundloadfile  mrc_playSoundExLoadFile
#define soundplay(type, block, loop)  mrc_playSoundEx(type, block, loop, NULL)
#define soundpause  mrc_pauseSoundEx
#define soundresume  mrc_resumeSoundEx
#define soundstop  mrc_stopSoundEx
#define soundclose  mrc_closeSoundEx
#define setvolume  mrc_setVolume
#define getsoundtotaltime  mrc_getSoundTotalTime
#define getsoundcurtime  mrc_getSoundCurTime
#define getsoundcurtimems mrc_getSoundCurTimeMs

/*
设置播放位置，相对文件或者缓冲的起始位置的偏移量
［IN］
	SOUND_POS pos：相对文件或者缓冲的起始位置的偏移量
    [return]:	0 初始化成功
    -1 初始化失败
    1 不支持该功能
*/
int32 setplaypos(int32 type,T_DSM_AUDIO_POS* pos);

/*
设置播放时间，相对文件或者缓冲的起始时间的偏移量
［IN］
	SOUND_POS pos：相对文件或者缓冲的起始时间的偏移量，单位：ms
    [return]:	0 初始化成功
    -1 初始化失败
    1 不支持该功能
*/
int32 setplaytime(int32 type,T_DSM_AUDIO_POS* pos);

/*
获取当前设备的状态
［IN］
	无
［return］
	设备状态值  成功
    -1 初始化失败
    1 不支持该功能

*/
int32 getdevicestate(int32 type);
#endif
 