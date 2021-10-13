#ifndef OBJ_EGGTV_H
#define OBJ_EGGTV_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    Animator animator;
} ObjectEggTV;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    Vector2 size;
    bool32 drawOverTV;
    int32 lineAlpha;
    Hitbox hitbox;
    int32 field_74;
    int32 field_78;
    int32 field_7C;
    int32 field_80;
    int32 field_84;
    int32 field_88;
} EntityEggTV;

// Object Struct
extern ObjectEggTV *EggTV;

// Standard Entity Events
void EggTV_Update(void);
void EggTV_LateUpdate(void);
void EggTV_StaticUpdate(void);
void EggTV_Draw(void);
void EggTV_Create(void* data);
void EggTV_StageLoad(void);
void EggTV_EditorDraw(void);
void EggTV_EditorLoad(void);
void EggTV_Serialize(void);

// Extra Entity Functions
void EggTV_DrawScanlines(void);
void EggTV_DrawTV(void);


#endif //!OBJ_EGGTV_H
