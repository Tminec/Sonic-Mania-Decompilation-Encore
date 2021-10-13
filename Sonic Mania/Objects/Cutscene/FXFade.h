#ifndef OBJ_FXFADE_H
#define OBJ_FXFADE_H

#include "SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectFXFade;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int32 timer;
    int32 speedIn;
    int32 wait;
    int32 speedOut;
    uint32 color;
    bool32 oneWay;
    bool32 eventOnly;
    bool32 overHUD;
    bool32 fadeOutBlack;
#if RETRO_USE_PLUS
    bool32 transitionScene;
#endif
} EntityFXFade;

// Object Struct
extern ObjectFXFade *FXFade;

// Standard Entity Events
void FXFade_Update(void);
void FXFade_LateUpdate(void);
void FXFade_StaticUpdate(void);
void FXFade_Draw(void);
void FXFade_Create(void* data);
void FXFade_StageLoad(void);
void FXFade_EditorDraw(void);
void FXFade_EditorLoad(void);
void FXFade_Serialize(void);

// Extra Entity Functions
void FXFade_StopAll(void);
void FXFade_State_FadeIn(void);
void FXFade_State_Wait(void);
void FXFade_State_FadeOut(void);
void FXFade_State_FadeOutBlack(void);

#endif //!OBJ_FXFADE_H
