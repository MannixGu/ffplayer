#ifndef _PLAYER_H_
#define _PLAYER_H_

// ����ͷ�ļ�
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// ��������
// message
#define MSG_COREPLAYER  (WM_APP + 1)
#define PLAY_COMPLETED  (('E' << 24) | ('N' << 16) | ('D' << 8))

// render mode
enum {
    RENDER_LETTERBOX,
    RENDER_STRETCHED,
};

// param
enum {
    PARAM_VIDEO_WIDTH,
    PARAM_VIDEO_HEIGHT,
    PARAM_VIDEO_DURATION,
    PARAM_VIDEO_POSITION,
    PARAM_RENDER_MODE,
};

// ��������
HANDLE playeropen    (char *file, HWND hwnd);
void   playerclose   (HANDLE hplayer);
void   playerplay    (HANDLE hplayer);
void   playerpause   (HANDLE hplayer);
void   playerseek    (HANDLE hplayer, DWORD sec);
void   playersetrect (HANDLE hplayer, int x, int y, int w, int h);
void   playersetparam(HANDLE hplayer, DWORD id, DWORD param);
void   playergetparam(HANDLE hplayer, DWORD id, void *param);

#ifdef __cplusplus
}
#endif

#endif














