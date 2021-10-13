#ifndef OBJ_BREAKBAR_H
#define OBJ_BREAKBAR_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    uint16 sfxBreak;
} ObjectBreakBar;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    uint8 orientation;
    uint16 length;
    uint8 activePlayersGrabbed;
    uint8 activePlayersReleased;
    uint8 playerTimers[4];
    Vector2 startPos;
    int32 releaseTimer;
    bool32 destroyFlag;
    Hitbox hitbox;
    Animator animator;
} EntityBreakBar;

// Object Struct
extern ObjectBreakBar *BreakBar;

// Standard Entity Events
void BreakBar_Update(void);
void BreakBar_LateUpdate(void);
void BreakBar_StaticUpdate(void);
void BreakBar_Draw(void);
void BreakBar_Create(void* data);
void BreakBar_StageLoad(void);
void BreakBar_EditorDraw(void);
void BreakBar_EditorLoad(void);
void BreakBar_Serialize(void);

// Extra Entity Functions
void BreakBar_DrawSprites(void);

void BreakBar_CheckPlayerCollisions(void);
void BreakBar_HandlePlayerInteractions(void *p);

void BreakBar_State_Setup(void);
void BreakBar_State_Main(void);

#endif //!OBJ_BREAKBAR_H
