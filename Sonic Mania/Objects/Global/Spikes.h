#ifndef OBJ_SPIKES_H
#define OBJ_SPIKES_H

#include "SonicMania.h"

typedef enum {
    SPIKES_UP,
    SPIKES_DOWN,
    SPIKES_LEFT,
    SPIKES_RIGHT,
}SpikeTypes;

// Object Class
typedef struct {
    RSDK_OBJECT
    StateMachine(stateDraw);
    Animator vData;
    Animator hData;
    uint16 spriteIndex;
    int32 dword3C;
    int32 dword40;
    uint16 sfx_Move;
    uint16 sfx_Spike;
} ObjectSpikes;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int32 type;
    bool32 moving;
    uint8 count;
    uint8 stagger;
    int16 timer;
    int32 planeFilter;
    int32 stateMove;
    int32 moveOffset;
    Vector2 offset;
    int16 timer2;
    uint8 shatterTimer;
    Hitbox hitbox;
    Animator animator;
} EntitySpikes;

// Object Struct
extern ObjectSpikes *Spikes;

// Standard Entity Events
void Spikes_Update(void);
void Spikes_LateUpdate(void);
void Spikes_StaticUpdate(void);
void Spikes_Draw(void);
void Spikes_Create(void* data);
void Spikes_StageLoad(void);
void Spikes_EditorDraw(void);
void Spikes_EditorLoad(void);
void Spikes_Serialize(void);

// Extra Entity Functions
void Spikes_StateDraw_Global(void);
void Spikes_StateDraw_Stage(void);

void Spikes_Unknown1(int32 a1, int32 a2);
void Spikes_CheckHit(EntityPlayer *player, int32 playerVelX, int32 playerVelY);

#endif //!OBJ_SPIKES_H
