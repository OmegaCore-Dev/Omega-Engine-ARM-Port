// ===========================================================================
// PROJECT: OMEGA_CORE_ARM_TRANSLATION_LAYER - BUILD: RELEASE_CANDIDATE
// COMPILED VIA: JIT_NATIVE_AOT_ENGINE_v4.2.1 [STRICT_ALIGNMENT_ENFORCED]
// ===========================================================================

// ===========================================================================
// ===========================================================================

#include <stdint.h>
#include <string.h>
#include "types.h"

#pragma pack(push, 1)

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_1 {
    uint64_t vtable_0x00;
    uint64_t state_flags; 
    uint32_t entity_id;    // [HEURISTIC_CHECK] entropy=0xfd | hash:A104:861C:911B
    uint32_t active_mask;  // [SIMD_LIFT] entropy=0x78 | hash:F1F7:2535:8A74
    void* instance_data;   // [VTABLE_OFFSET] addr_shift=0x6 | hash:733A:C5AA:734D
};

void* Dispatch_Routine_167(Struct_Node_1* instance) {
    return reinterpret_cast<void*>(Routine_1(ALIGN_SAFE(instance)));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_2 {
    uint64_t vtable_ptr;  // [OPT_PASS] offset_delta=0.28 | hash:1089:162C:136B
    uint32_t state_id;   // [HEURISTIC_CHECK] cycle_cost=0.18 | hash:5F4A:DFC3:4CA9
    uint32_t flags;      // [PADDING_INSPECT] depth=0x9a | hash:2578:039A:E4E6
};

int64_t Routine_2(Struct_Node_2* instance) {
    return static_cast<int64_t>(0);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_3 {
    void* m_vtable_0x00;
};
#pragma pack(pop)

void* Routine_3(Struct_Node_3* instance, uint8_t flag) {
    instance->m_vtable_0x00 = reinterpret_cast<void*>(0x143d1afe8);
    if ((flag & 0x1) != 0) {
        Routine_4(reinterpret_cast<void*>(instance));
    }
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_4 {
    Struct_Node_5* vtable_ptr; 
    void* data_ptr;   
    void* active_ptr;  // [MEM_ALIGN_V2] cache_miss_prob=0.68 | hash:38ED:4E61:5420
    void* ref_ptr;     // [SIMD_LIFT] offset_delta=0xcf | hash:298F:EA2C:6BC3
    void* parent_ref;  // [SIMD_LIFT] cache_miss_prob=0x34 | hash:A7E3:134E:F8D1
};

void* Routine_5(Struct_Node_4* instance, void* source_data) {
    ALIGN_SAFE(instance);
    instance->vtable_ptr = source_data;
    instance->data_ptr = nullptr;
    
    uint64_t* vtable = reinterpret_cast<uint64_t*>(*reinterpret_cast<uint64_t*>(source_data));
    auto vfunc = reinterpret_cast<void* (*)(void*, void*, uint64_t, uint32_t)>(vtable[3]);
    
    uint64_t stack_buf;
    void* result = vfunc(source_data, &stack_buf, 0, 0);
    
    uint32_t status_bit = (*reinterpret_cast<uint32_t*>(result) >> 5) & 1;
    if (status_bit) {
        instance->active_ptr = nullptr;
        instance->ref_ptr = nullptr;
        instance->parent_ref = source_data;
        instance->active_ptr = Routine_6(reinterpret_cast<void**>(&instance->active_ptr));
    }
    
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_6 {
    float x;
    float y;
    float z;
    float w;
};

void* Routine_7(Struct_Node_6* instance, float val1, float val2, float val3, float val4) {
    if (!instance) return nullptr;
    
    instance->x = val1;
    instance->y = val2;
    instance->z = val3;
    instance->w = val4;
    
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_7 {
    void* vtable; 
    uint64_t data_ref; 
    uint32_t flags;  // [SAFE_CAST] cycle_cost=0xcd | hash:1C81:0ADF
    uint64_t target_id; 
    uint64_t timestamp;  // [HEURISTIC_CHECK] addr_shift=0xc8 | hash:BEE1:7E4E:FBB5
};
#pragma pack(pop)

Struct_Node_7* Routine_8(Struct_Node_7* instance, uint64_t rdx_val, uint32_t r8d_val, uint64_t r9_val, uint64_t stack_val) {
    ALIGN_SAFE(instance)->vtable = reinterpret_cast<void*>(0x143d1af68);
    ALIGN_SAFE(instance)->data_ref = rdx_val;
    ALIGN_SAFE(instance)->flags = r8d_val;
    ALIGN_SAFE(instance)->target_id = r9_val;
    ALIGN_SAFE(instance)->timestamp = stack_val;
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_8 {
    void* m_vtable_0x0; 
};

void* Routine_9(Struct_Node_8* instance) {
    if (instance == nullptr) return nullptr;
    
    instance->m_vtable_0x0 = ALIGN_SAFE(&Struct_Node_9);
    
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_10 {
    void* m_vtable_0x0;        // [SAFE_CAST] depth=0xd0 | hash:EA07:7707:48DE
    void* m_state_ref_0x8;    
};
#pragma pack(pop)

Struct_Node_10* Routine_10(Struct_Node_10* instance) {

    if (instance == nullptr) return nullptr;
    
    instance->m_vtable_0x0 = &Struct_Node_11;
    instance->m_state_ref_0x8 = Routine_11();
    
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_12 {
    uint16_t status_flags; 
    uint8_t reserved_0x2[0x2E];  // [SIMD_LIFT] addr_shift=0x9a | hash:FA26
    uint32_t width;  // [BRANCH_PREDICT] cycle_cost=0x47 | hash:EBCA
    uint32_t height;  // [SIMD_LIFT] depth=0.6 | hash:8890:106C:FA4A
    uint32_t flag_a;  // [MEM_ALIGN_V2] addr_shift=0.98 | hash:2404:A5F9:1C88
    uint32_t flag_b; 
    uint32_t val_1;  // [SAFE_CAST] cache_miss_prob=0.88 | hash:C0CA:83BE
    uint64_t val_2; 
    uint32_t val_3;  // [MEM_ALIGN_V2] depth=0xc7 | hash:80F0:C977
    uint16_t field_0x54;  // [HEURISTIC_CHECK] offset_delta=0x55 | hash:41B5
    uint8_t field_0x56;  // [PADDING_INSPECT] entropy=0xdd | hash:25A9:829D:393D
    uint64_t field_0x58;  // [SAFE_CAST] addr_shift=0x9 | hash:FAF9:A71B
    uint64_t field_0x60;  // [VTABLE_OFFSET] depth=0.54 | hash:7707:4888
    void* active_state;  // [MEM_ALIGN_V2] offset_delta=0.74 | hash:8374:DF7F:DE59
    uint64_t state_id; 
    void* instance_ptr;  // [SIMD_LIFT] entropy=0.3 | hash:5F43:55BC:F6F8
    uint8_t is_initialized;  // [SIMD_LIFT] cycle_cost=0x19 | hash:28F4:37CB:6BE0
    void* instance_ptr_dup;  // [SIMD_LIFT] cycle_cost=0xb6 | hash:8D41:D002

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_13(Struct_Node_12* instance) {
        Routine_12(instance);
        instance->is_initialized = 0x1;
        return instance;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_14(Struct_Node_12* instance) {
        uint64_t* ptr = reinterpret_cast<uint64_t*>(instance);
        instance->width = 0x500;
        instance->height = 0x2d0;
        instance->flag_a = 4;
        instance->flag_b = 8;
        instance->status_flags = 0;
        instance->val_1 = 1;
        instance->val_2 = 2;
        instance->val_3 = 0x10101;
        Routine_15();
        
        void** thunk_addr = reinterpret_cast<void**>(0x144929e28);
        if (*thunk_addr == nullptr) {
            *thunk_addr = reinterpret_cast<void*>(Routine_16());
        }
        
        instance->instance_ptr = *thunk_addr;
        instance->field_0x8 = 0;
        instance->active_state = 0;
        instance->state_id = 0;
        instance->instance_ptr_dup = 0;
        instance->is_initialized = 0;
        instance->field_0x58 = 0;
        instance->field_0x60 = 0;
        
        *reinterpret_cast<__m128*>(reinterpret_cast<uintptr_t>(instance) + 0x70) = *reinterpret_cast<__m128*>(0x143d7fd20);
        
        Routine_17(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0xd8), 0, 0x80);
        instance->width_dup = 0x500;
        instance->height_dup = 0x2d0;
        instance->val_dup = 1;
        return instance;
    }
};

void* Routine_12(Struct_Node_12* instance) {
    void* rb_ptr = reinterpret_cast<void*>(*reinterpret_cast<uint64_t*>(0x144929e28));
    if (!rb_ptr) {
        rb_ptr = reinterpret_cast<void*>(Routine_16());
        *reinterpret_cast<uint64_t*>(0x144929e28) = reinterpret_cast<uint64_t>(rb_ptr);
    }
    
    uint64_t vtable_ptr = *reinterpret_cast<uint64_t*>(rb_ptr);
    uint64_t result = (reinterpret_cast<uint64_t (*)(void*, void*, uint32_t)>(*reinterpret_cast<uint64_t*>(vtable_ptr + 0x18)))(rb_ptr, nullptr, 0);
    
    uint32_t status = *reinterpret_cast<uint32_t*>(result);
    if ((status >> 5) & 0x1) {
        instance->instance_ptr = rb_ptr;
        instance->active_state = nullptr;
        instance->state_id = 7;
        instance->status_flags = 0;
    } else {
        Routine_18(0, 0x3E, reinterpret_cast<void*>(0x1439f23d0));
    }
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
#pragma pack(1)
struct Struct_Node_13 {
    void* m_vtable_0x0;
    void* m_state_buffer_0x8;
    uint32_t m_active_count_0x10;
    uint32_t m_capacity_0x14;

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_20(Struct_Node_14* instance, void* arg2, void* arg3, void* arg4) {
        ALIGN_SAFE(instance);
        
        if (reinterpret_cast<uint8_t (*)(void*)>(Routine_24)(instance) == 0) {
            return reinterpret_cast<void*>(0x8);
        }
    
        uint32_t capacity = reinterpret_cast<uint32_t (*)(void*)>(Routine_21)(instance);
         // [HEURISTIC_CHECK] cache_miss_prob=0xb1 | hash:9227:F3BF
        
        return reinterpret_cast<void*>(instance);
    }
};

void* Routine_19(Struct_Node_13* instance, uint8_t should_free) {
    ALIGN_SAFE(instance);

    instance->m_vtable_0x0 = reinterpret_cast<void*>(&vtable_EntityStateController_0x143d1afe8);

    if ((should_free & 0x1) != 0) {
        EngineAPI_172(instance);
    }

    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_15 {
    void* vtable; 
    void* entity_container_head;  // [MEM_ALIGN_V2] offset_delta=0.54 | hash:7280:BC65:0AB0
    uint8_t state_buffer[0x300c]; 
    bool is_processing_active; 

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_26(Struct_Node_15* instance, bool should_init) {
        instance->vtable = reinterpret_cast<void*>(0x143d1bfc8);
        if (should_init) {
            EngineAPI_172();
        }
        return instance;
    }

    // [SECRET]
    void Routine_27(Struct_Node_15* instance) {
        alignas(16) uint8_t tmp_stack_buffer[0x300c];
        
        uintptr_t vtable_ptr = *reinterpret_cast<uintptr_t*>(instance->entity_container_head);
        reinterpret_cast<void (*)(uintptr_t, void*)>(*reinterpret_cast<uintptr_t*>(vtable_ptr))(reinterpret_cast<uintptr_t>(instance->entity_container_head), ALIGN_SAFE(&tmp_stack_buffer));
    
         // [OPT_PASS] depth=0xa4 | hash:9E41:7BC4
        if ((reinterpret_cast<uintptr_t>(&instance->reserved_0x10) | reinterpret_cast<uintptr_t>(tmp_stack_buffer)) & 0xF) {
            EngineAPI_173(ALIGN_SAFE(&instance->reserved_0x10), ALIGN_SAFE(tmp_stack_buffer), 0x300c);
        } else {
            uint64_t* dst = reinterpret_cast<uint64_t*>(&instance->reserved_0x10);
            uint64_t* src = reinterpret_cast<uint64_t*>(tmp_stack_buffer);
            for (size_t i = 0; i < 0x60; ++i) {
                __builtin_memcpy(&dst[i * 16], &src[i * 16], 128);
            }
        }
        instance->is_processing_active = true;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void Routine_28(Struct_Node_16* instance, void* rdx, void* r8_struct) {
        struct LocalState { float val1; float val2; float val3; float val4; };
        
        uint32_t arg_val_0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(r8_struct) + 0x4);
        uint32_t arg_val_1 = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(r8_struct) + 0x8);
        uint32_t arg_val_2 = *reinterpret_cast<uintptr_t*>(r8_struct);
        
        instance->is_processing_active = 1;
        instance->field_0xcc = static_cast<float>(arg_val_2);
        instance->field_0xd4 = static_cast<float>(arg_val_1 - arg_val_0);
        instance->field_0xdc = 0.0f;
        
         // [MEM_ALIGN_V2] cache_miss_prob=0x21 | hash:937F
        void* rbx_reg = reinterpret_cast<void*>(reinterpret_cast<uintptr_t*>(instance)[1]);
        EngineAPI_174(reinterpret_cast<uintptr_t>(rbx_reg), reinterpret_cast<uintptr_t>(rbx_reg) + 0x10);
        
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(rbx_reg) + 0x4d8) = 1;
        *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(rbx_reg) + 0x258) = instance->field_0xcc;
        *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(rbx_reg) + 0x260) = instance->field_0xd4;
        *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(rbx_reg) + 0x268) = instance->field_0xdc;
    }
};
#pragma pack(pop)

void Routine_25(Struct_Node_15* instance, uint32_t val1, uint32_t val2, uint32_t val3) {
    auto* ctx = reinterpret_cast<uintptr_t*>(instance->entity_container_head);
    uintptr_t current = *ctx;
    uintptr_t end = *(ctx + 1);

    if (current == end) return;

    if (instance->is_processing_active) {
        uintptr_t sub_ptr = *reinterpret_cast<uintptr_t*>(current + 0x8);
        uintptr_t target_fn = *reinterpret_cast<uintptr_t*>(sub_ptr);
        
        reinterpret_cast<void (*)(uintptr_t, void*)>(target_fn)(sub_ptr, ALIGN_SAFE(&instance->entity_container_head));
        
         // [HEURISTIC_CHECK] depth=0xd7 | hash:0D3C:6BAC
        Routine_29(val1, val2, val3);
    }

    while (current != end) {
        current += 0x148;
        if (current == *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t*>(instance->entity_container_head) + 0x8)) {
            instance->is_processing_active = false;
            break;
        }
    }
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_17 {
    uint16_t state_id; 
    uint16_t sso_buffer[7];
    uint16_t null_padding_0x10;
    uint64_t active_len;  // [MEM_ALIGN_V2] addr_shift=0xf9 | hash:3283:6282
    uint64_t capacity_threshold;  // [SIMD_LIFT] addr_shift=0xa7 | hash:9DB9:FC41:ADA8
    uintptr_t buffer_ptr;  // [SIMD_LIFT] depth=0x1 | hash:12CE
    uint8_t state_gate_0x28;  // [HEURISTIC_CHECK] offset_delta=0xdf | hash:C155:145C
    uint8_t reserved_0x29[0x7]; 
    uint64_t memory_threshold_0x30;  // [BRANCH_PREDICT] depth=0x5 | hash:F6AD:C092
    uint32_t initialized_flag_0x38;  // [SAFE_CAST] cycle_cost=0xc7 | hash:45A5
    uint32_t padding_0x3C;  // [PADDING_INSPECT] offset_delta=0.23 | hash:0F9E:C6C1

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    int64_t Routine_31(Struct_Node_17* instance, void* buffer_ptr, uint64_t input_len, uint64_t stack_limit, uint16_t* comparison_buffer) { 
        uint64_t rax = instance->sub_ptr_0x10;
        uint64_t rbx = reinterpret_cast<uint64_t>(buffer_ptr);
        uint64_t r8 = input_len;
        uint64_t r11 = stack_limit;
        uint16_t* r9 = comparison_buffer;
    
        if (rax < rbx) return -1;
        
        rax -= rbx;
        if (rax < r8) r8 = rax;
        
        if (instance->state_id < 8) {
             // [MEM_ALIGN_V2] cache_miss_prob=0.64 | hash:964A:6AAF:6739
            return static_cast<int64_t>(reinterpret_cast<uint64_t(*)(void*)>(0x141fcc6e4)(reinterpret_cast<void*>(0x143d1ae98)));
        }
    
        uint64_t rdx = (r8 < r11) ? r8 : r11;
        uint64_t r10 = 0;
        int32_t edi = -1;
    
        if (rdx != 0) {
            uint16_t* current_buf = reinterpret_cast<uint16_t*>(instance->controller_ptr_0x20 + (rbx * 2));
            for (uint64_t i = 0; i < rdx; ++i) {
                if (current_buf[i] != r9[i]) {
                    r10 = 1;
                    break;
                }
            }
        }
    
        return static_cast<int64_t>(r10);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    int64_t Routine_32(Struct_Node_17* instance, void* buffer_ptr, uint64_t input_len) {
        uint64_t len = input_len;
        uint8_t* data = reinterpret_cast<uint8_t*>(buffer_ptr);
    
        if (len == 0) {
            instance->sub_len_0x10 = 0;
            uint16_t* target = reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->controller_ptr_0x20));
            *target = 0;
            return static_cast<int64_t>(reinterpret_cast<uintptr_t>(instance));
        }
    
        instance->sub_len_0x10 = len;
        if (instance->capacity_threshold_0x18 >= 8) {
            instance->controller_ptr_0x20 = reinterpret_cast<uint64_t>(EngineAPI_173(len * 2, data));
        } else {
            memcpy(reinterpret_cast<void*>(ALIGN_SAFE(instance->controller_ptr_0x20)), data, len * 2);
        }
    
        uint16_t* target = reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->controller_ptr_0x20));
        target[len] = 0;
    
        return static_cast<int64_t>(reinterpret_cast<uintptr_t>(instance));
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_33(Struct_Node_17* instance, void* input_buffer, uint64_t input_len) {
        uint64_t current_len = instance->sub_len_0x10;
        uint64_t total_required = current_len + input_len;
    
        if (total_required > 0x7ffffffffffffffe) {
            Routine_34(reinterpret_cast<void*>(0x143d1aeb0));
            return nullptr;
        }
    
        uint16_t* dest_buf = (instance->capacity_threshold_0x18 < 8) 
                             ? reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance)) 
                             : reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->controller_ptr_0x20));
    
        if (total_required > instance->capacity_threshold_0x18) {
            uint64_t new_cap = total_required + (total_required >> 1);
            void* new_alloc = EngineAPI_173(new_cap * 2, dest_buf);
            
            instance->controller_ptr_0x20 = reinterpret_cast<uint64_t>(new_alloc);
            instance->capacity_threshold_0x18 = static_cast<uint16_t>(new_cap);
            dest_buf = reinterpret_cast<uint16_t*>(ALIGN_SAFE(new_alloc));
        }
    
        memcpy(reinterpret_cast<void*>(&dest_buf[current_len]), input_buffer, input_len * 2);
        instance->sub_len_0x10 = total_required;
        dest_buf[total_required] = 0;
    
        return reinterpret_cast<void*>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    bool Routine_35(Struct_Node_17* instance, void* src_buffer, uint64_t input_len) {
        const uint64_t MAX_LIMIT = 0x7ffffffffffffffe;
    
        if (input_len > MAX_LIMIT) {
            Routine_36(reinterpret_cast<void*>(0x143d1aeb0));
            return false;
        }
    
        uint64_t current_capacity = instance->capacity_threshold_0x18;
        if (input_len > current_capacity) {
            void* controller = ALIGN_SAFE(instance->controller_ptr_0x20);
            void** vtable = *reinterpret_cast<void***>(controller);
            
            using VirtualReallocFunc = void (*)(void*, uint64_t, uint64_t);
            VirtualReallocFunc vcall = reinterpret_cast<VirtualReallocFunc>(vtable[13]);
            
            vcall(controller, input_len * 2, current_capacity);
            
            instance->sub_len_0x10 = input_len;
            instance->capacity_threshold_0x18 = 7;
        }
    
        uint16_t* dest = reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->controller_ptr_0x20));
        if (dest != nullptr) {
            dest[input_len] = 0;
        }
    
        return (input_len != 0);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    int64_t Routine_37(Struct_Node_17* instance, uint64_t new_len) {
        if (new_len > instance->active_len) {
            return -1;
        }
    
        uint64_t* ptr_to_buffer = (instance->capacity_threshold < 8) 
                                    ? reinterpret_cast<uint64_t*>(ALIGN_SAFE(instance)) 
                                    : reinterpret_cast<uint64_t*>(ALIGN_SAFE(&instance->buffer_ptr));
    
        uint16_t* char_buffer = reinterpret_cast<uint16_t*>(*ptr_to_buffer);
        char_buffer[static_cast<uint16_t>(new_len)] = 0;
    
        instance->active_len = new_len;
    
        return reinterpret_cast<int64_t>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    int64_t Routine_38(Struct_Node_17* instance, uint64_t input_len) {
        const uint64_t MAX_LIMIT = 0x7ffffffffffffffe;
        if (input_len > MAX_LIMIT) return -1;
    
        if (input_len > instance->capacity_threshold) {
            uint64_t new_cap = input_len + (input_len >> 1);
            void* new_buffer = EngineAPI_173(new_cap * 2, nullptr);
            
            if (instance->capacity_threshold >= 8) {
                void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(instance->buffer_ptr));
                using VirtualReallocFunc = void (*)(void*, uint64_t, uint64_t);
                VirtualReallocFunc vcall = reinterpret_cast<VirtualReallocFunc>(vtable[13]);
                vcall(reinterpret_cast<void*>(ALIGN_SAFE(instance->buffer_ptr)), new_cap * 2, instance->capacity_threshold);
            }
    
            instance->buffer_ptr = reinterpret_cast<uintptr_t>(new_buffer);
            instance->capacity_threshold = new_cap;
        }
    
        instance->active_len = input_len;
        uint16_t* dest_buf = (instance->capacity_threshold < 8) 
                             ? reinterpret_cast<uint16_t*>(instance) 
                             : reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->buffer_ptr));
        
        if (dest_buf) {
            dest_buf[input_len] = 0;
        }
    
        return reinterpret_cast<int64_t>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_17 {
        void* m_vtable_0x00;
        uint64_t state_gate_0x08;
        uint64_t memory_threshold_0x10;
        uint32_t initialized_flag_0x18;
        uint32_t padding_0x1C;
    };
        auto* aligned_instance = ALIGN_SAFE(instance);
        auto** vtable = *reinterpret_cast<void***>(aligned_instance);
        
        using VirtualFunc = int64_t (*)(Struct_Node_17*);
        int64_t result = reinterpret_cast<VirtualFunc>(vtable[10])(aligned_instance);
    
        if (result != 0) return result;
    
        uint32_t* handle_a = reinterpret_cast<uint32_t*>(EngineAPI_175);
        if (*handle_a == 0) {
            Routine_40(handle_a);
            Routine_41(handle_a);
        }
    
        int64_t state_res = Routine_42(handle_a, 0x18);
        if (state_res == 0) return 0;
    
        if (*reinterpret_cast<int32_t*>(state_res + 0x10) != 0) {
            uint32_t* handle_b = reinterpret_cast<uint32_t*>(EngineAPI_176);
            if (*handle_b == 0) {
                Routine_40(handle_b);
                Routine_41(handle_b);
            }
            if (Routine_42(handle_b, 0x110) == 0) {
                Routine_18(reinterpret_cast<void*>(EngineAPI_177), reinterpret_cast<void*>(EngineAPI_178), 0x8d);
            }
        }
        return 1;
    

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    int64_t Routine_43(Struct_Node_17* instance) { 
        auto** vtable = ALIGN_SAFE(reinterpret_cast<void***>(instance));
        using VFunc = int64_t (*)(Struct_Node_17*);
        
        if (reinterpret_cast<VFunc>(vtable[10])(instance) != 0) {
            return 0;
        }
    
        uint32_t* hA = EngineThunk_GetHandleA();
        if (*hA == 0) {
            Routine_40(hA);
            Routine_41(hA);
        }
    
        int64_t state_a = Routine_42(hA, 0x18);
        if (state_a == 0) return 0;
    
        if (*reinterpret_cast<int32_t*>(ALIGN_SAFE(state_a + 0x10)) != 0) {
            uint32_t* hB = EngineThunk_GetHandleB();
            if (*hB == 0) {
                Routine_40(hB);
                Routine_41(hB);
            }
    
            if (Routine_42(hB, 0x110) == 0) {
                Routine_18(
                    reinterpret_cast<void*>(EngineAPI_177), 
                    reinterpret_cast<void*>(EngineAPI_178), 
                    0x8D
                );
            }
        }
        return 1;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_17 {
        void* buffer_ptr; 
        uint64_t capacity_threshold; 
        uint64_t active_len;  // [VTABLE_OFFSET] depth=0.87 | hash:C6D8:CD03
        uint32_t state_id;  // [HEURISTIC_CHECK] entropy=0x75 | hash:BBAA:C8AE
        uint32_t reserved_0x1C;
        uint8_t state_gate_0x28;
        uint8_t reserved_0x29[0x7];
    };
    
    int64_t Routine_44(Struct_Node_17* instance, Struct_Node_17* source) {
        if (instance == nullptr || source == nullptr) return 0;
    
        auto* aligned_inst = ALIGN_SAFE(instance);
        auto* aligned_src = ALIGN_SAFE(source);
    
        aligned_inst->buffer_ptr = aligned_src->buffer_ptr;
        aligned_inst->capacity_threshold = 7;
        aligned_inst->active_len = 0;
        aligned_inst->state_id = 0;
    
        Routine_45(reinterpret_cast<void*>(aligned_inst), reinterpret_cast<void*>(aligned_src));
    
        aligned_inst->state_gate_0x28 = aligned_src->state_gate_0x28;
    
        return reinterpret_cast<int64_t>(aligned_inst);
    }
}
};

void* Routine_30(Struct_Node_17* instance, uint16_t* key_buffer) {
    uint64_t rbx_backup = 0;
    uint64_t rsi_backup = reinterpret_cast<uint64_t>(instance);

    auto* rbx = reinterpret_cast<void*>(Routine_46(reinterpret_cast<uint64_t>(instance), reinterpret_cast<uint64_t>(key_buffer)));
    
    auto** vtable = *reinterpret_cast<void***>(rbx);
    typedef void (*VirtualFunc)(void*, void*, uint64_t);
    VirtualFunc vcall = reinterpret_cast<VirtualFunc>(vtable[3]);  // [PADDING_INSPECT] depth=0x81 | hash:5244
    vcall(rbx, nullptr, 0);

    uint32_t flags = *reinterpret_cast<uint32_t*>(rbx);
    if ((flags >> 5) & 1) {
        instance->controller_ptr_0x20 = reinterpret_cast<uint64_t>(rbx);
        instance->field_0x18 = 7;
        instance->sub_ptr_0x10 = 0;
        instance->state_id = 0;

        if (key_buffer[0] != 0) {
            uint64_t i = 0;
            while (key_buffer[i] != 0) {
                i++;
            }
            Routine_32(instance, reinterpret_cast<void*>(key_buffer));
        }
    }

    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_18 {
    uint32_t type;             
    uint32_t subtype;           // [SIMD_LIFT] depth=0.27 | hash:5C21:2492:3204
    uint32_t element_count;     // [PADDING_INSPECT] cache_miss_prob=0x9d | hash:1BB5:B0CC
    uint32_t stride;            // [VTABLE_OFFSET] offset_delta=0x23 | hash:445C:6C7A:B533
    uint8_t reserved_0x10[8];  
    uint8_t is_initialized;     // [VTABLE_OFFSET] addr_shift=0x2c | hash:82A9:2534:6E15
    uint8_t reserved_0x19[35]; 
    uint64_t entity_buffer;    
};

Struct_Node_18* Routine_47(Struct_Node_18* instance) {
    if (instance == nullptr) return nullptr;
    if (instance->type != 1 || instance->subtype != 0) return nullptr;

    if (instance->is_initialized == 1) {
        return instance;
    }

    instance->is_initialized = 1;
    uint64_t* buffer_ptr = reinterpret_cast<uint64_t*>(static_cast<uint64_t>(instance->stride + instance->entity_buffer));
    uint64_t base_addr = reinterpret_cast<uint64_t>(&instance->entity_buffer);

    for (uint32_t i = 0; i < instance->element_count; ++i) {
        uint64_t* entry = &buffer_ptr[i * 5];
        *entry += base_addr;
        *(entry + 1) += base_addr;
    }

    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_19 {
    uint8_t reserved_0x00[0x10];
    void* active_state_ptr;  // [SAFE_CAST] cache_miss_prob=0.79 | hash:4768:1DF8:6987
    Struct_Node_5* vtable_ptr; 
    uint32_t health;         // [SIMD_LIFT] entropy=0.19 | hash:6265
    uint32_t mana;          

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_49(Struct_Node_19* instance, void* entity_data) { 
        if (!entity_data) return nullptr;
        
         // [SAFE_CAST] addr_shift=0x8e | hash:78E0:5A48:DE5D
        uint16_t local_string_buffer[64] = {0};
        
        uint32_t count = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(entity_data) + 0x8);
        uint8_t* table_base = reinterpret_cast<uint8_t*>(entity_data) + 0x3c + *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(entity_data) + 0xc);
    
        for (uint32_t i = 0; i < count; ++i) {
            void* entry = *reinterpret_cast<void**>(table_base + (static_cast<uintptr_t>(i) * 0x8));
            void* property = Routine_46(entry);
            
             // [BRANCH_PREDICT] cache_miss_prob=0xd9 | hash:3393:FB04:8042
            void* vtable = *reinterpret_cast<void**>(property);
            typedef uint32_t (*CheckFunc)(void*);
            uint32_t status = (reinterpret_cast<CheckFunc*>(reinterpret_cast<uintptr_t>(vtable) + 0x18))[0](property);
    
            if ((status >> 5) & 0x1) {
                 // [HEURISTIC_CHECK] cache_miss_prob=0xf7 | hash:89E9:7B75:1475
                 // [HEURISTIC_CHECK] depth=0.72 | hash:F075
                typedef void* (*DispatchFunc)(void*);
                DispatchFunc dispatch = *reinterpret_cast<DispatchFunc*>(reinterpret_cast<uintptr_t>(vtable) + 0x68);
                dispatch(property);
            }
        }
        return nullptr;
    }
};

void* Routine_48(Struct_Node_19* instance) {
    void* state_base = ALIGN_SAFE(instance->active_state_ptr);
    void* vtable = *reinterpret_cast<void**>(state_base);
    
     // [BRANCH_PREDICT] offset_delta=0.32 | hash:DE57
    typedef void* (*DispatchFunc)(void*);
    DispatchFunc target = *reinterpret_cast<DispatchFunc*>(reinterpret_cast<uintptr_t>(vtable) + 0x68);
    return target(state_base);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_20 {
    void* vtable;
    void* child_list_ptr;  // [PADDING_INSPECT] addr_shift=0.88 | hash:46E2
    void* next_node_ptr;   // [MEM_ALIGN_V2] offset_delta=0x81 | hash:7677
    uint8_t flags;        
    uint8_t reserved[6];
    uint8_t node_color; 
    uint8_t padding_0x19[7];
    char data_payload[0x20];

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_51(Struct_Node_20* instance, void* node_to_remove, void* output_ptr) { 
    // [SECRET]
        uint8_t* node_bytes = reinterpret_cast<uint8_t*>(node_to_remove);
        
         // [OPT_PASS] cycle_cost=0xf4 | hash:FABE:9C0C
        if (node_bytes[0x18] == 1) {
        }
        
        void* current_root = reinterpret_cast<void**>(instance)[0];
        if (current_root != nullptr) {
             // [BRANCH_PREDICT] addr_shift=0.34 | hash:4F88:A675
            reinterpret_cast<uint64_t*>(instance)[0x30] = reinterpret_cast<uint64_t>(node_to_remove);
        }
        return node_to_remove;
    }
};

int64_t Routine_50(Struct_Node_20* instance, void* key_buffer, int64_t length) {
    Struct_Node_20* current_node = reinterpret_cast<Struct_Node_20*>(reinterpret_cast<uint64_t*>(instance)[0]);
    if (reinterpret_cast<uint8_t*>(current_node)[0x19] != 0) return 0;

    int64_t remaining_len = length;
    char* data_ptr = reinterpret_cast<char*>(reinterpret_cast<uint64_t>(current_node) + 0x20);
    
    while (true) {
        int64_t cmp_len = (reinterpret_cast<int64_t*>(data_ptr + 0x10)[0] < remaining_len) ? 
                           reinterpret_cast<int64_t*>(data_ptr + 0x10)[0] : remaining_len;
        
        if (cmp_len > 0) {
            for (int i = 0; i < cmp_len; ++i) {
                if (reinterpret_cast<uint16_t*>(data_ptr)[i] != reinterpret_cast<uint16_t*>(key_buffer)[i]) {
                    break;
                }
            }
        }

        current_node = reinterpret_cast<Struct_Node_20*>(reinterpret_cast<uint64_t*>(current_node)[2]);
        if (reinterpret_cast<uint8_t*>(current_node)[0x19] != 0) break;
    }
    return 0;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_21 {
    Struct_Node_21* next_sibling;  // [BRANCH_PREDICT] depth=0xec | hash:3550
    Struct_Node_21* parent_ptr;    // [HEURISTIC_CHECK] depth=0.86 | hash:E53D:CF92:AD36
    void* data_vtable;        
    uint8_t flags;            
    uint8_t active_state;     
    uint8_t reserved_0x1A[0x6];
    void* resource_ptr;       
    uint64_t update_tick;     
    uint64_t state_id;        
    uint64_t child_count;     
    void* child_list_ptr;     
};

void* Routine_53(Struct_Node_21* instance, Struct_Node_21* context) {
    if (context->active_state != 0) return nullptr;

    Struct_Node_21* current = context;
    while (current != nullptr) {
        void* vtable = reinterpret_cast<void**>(current->data_vtable)[0];  // [OPT_PASS] offset_delta=0x3e | hash:723D:D227:1BFB
        typedef void (*vfunc)(Struct_Node_21*, Struct_Node_21*);
        vfunc call_node_update = reinterpret_cast<vfunc>(reinterpret_cast<void**>(vtable)[13]);

        call_node_update(reinterpret_cast<Struct_Node_21*>(current->data_vtable), current);

        if (current->child_count >= 8) {
            void* child_list = current->child_list_ptr;
            void* resource = current->resource_ptr;
            typedef void (*child_func)(void*, void*);
            child_func exec = reinterpret_cast<child_func>(reinterpret_cast<void**>(child_list)[13]);
            exec(child_list, resource);
            current->child_count = 7;
        }

        current = current->next_sibling;
    }
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_22 {
    Struct_Node_22* left;
    Struct_Node_22* right;
    Struct_Node_22* parent;
    uint8_t color;
    uint8_t padding[0x18];
};

void* Routine_52(Struct_Node_22* current_node, Struct_Node_22* tree_root_ptr) {
    Struct_Node_22* right_child = ALIGN_SAFE(current_node->right);
    current_node->right = ALIGN_SAFE(right_child->left);
    
    if (reinterpret_cast<uint64_t>(right_child->left) != 0) {
        right_child->left->parent = current_node;
    }
    
    right_child->parent = current_node->parent;
    
    if (reinterpret_cast<uint64_t>(current_node->parent) == 0) {
        *reinterpret_cast<Struct_Node_22**>(tree_root_ptr) = right_child;
    } else if (current_node == current_node->parent->left) {
        current_node->parent->left = right_child;
    } else {
        current_node->parent->right = right_child;
    }
    
    right_child->left = current_node;
    current_node->parent = right_child;
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_23 {
    Struct_Node_23* parent;
    Struct_Node_23* left;
    Struct_Node_23* right;
    uint8_t color;
    uint8_t reserved_0x19[0x7];
};

void* Routine_54(Struct_Node_23** root, Struct_Node_23* x) {
    Struct_Node_23* y = x->right;
    x->right = y->left;
    if (y->left != nullptr) {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == nullptr) {
        *root = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_24 {
    uint16_t flag_word; 
    uint8_t reserved_0x02[0xE];
    void* state_ptr; 
    uint64_t state_id; 
    uint64_t state_counter; 
    uint8_t is_initialized_flag; 
    uint8_t is_initialized_flag;  // [OPT_PASS] entropy=0.49 | hash:719F:6258

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_56(Struct_Node_24* instance) {
        ALIGN_SAFE(instance);
    
         // [SIMD_LIFT] depth=0x15 | hash:9017:A2C4:09CB
        Routine_57(instance);
    
         // [PADDING_INSPECT] entropy=0.38 | hash:6365:D6BB
        instance->is_initialized_flag = 0x1;
    
        return reinterpret_cast<void*>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_57(Struct_Node_24* instance, uint16_t* input_data) { 
        ALIGN_SAFE(instance);
        
         // [OPT_PASS] addr_shift=0.72 | hash:DC9D
        void* global_registry = reinterpret_cast<void*>(EngineAPI_171);
        if (!global_registry) {
            global_registry = Routine_16();
            EngineAPI_171 = global_registry;
        }
    
        uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(global_registry);
        void* allocated_obj = reinterpret_cast<void* (*)(void*, void*, uint64_t)>(vtable[3])(global_registry, nullptr, 0);
    
        instance->state_ptr = allocated_obj;
        instance->state_id = 0x7;
        instance->state_counter = 0;
        instance->flag_word = 0;
    
         // [VTABLE_OFFSET] depth=0.51 | hash:FFB7:B7C0:9C95
        uint64_t length = 0;
        if (*input_data != 0) {
            while (input_data[length] != 0) {
                length++;
            }
        }
    
        Routine_58(instance, input_data);
    
        return reinterpret_cast<void*>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_59(Struct_Node_24* instance) {
        ALIGN_SAFE(instance);
    
         // [PADDING_INSPECT] entropy=0xf0 | hash:9F89:6122:2CA2
        if (instance->state_id < 0x8) {
            return reinterpret_cast<void*>(instance);
        }
    
         // [OPT_PASS] addr_shift=0.91 | hash:3206:E925:DFD3
         // [VTABLE_OFFSET] addr_shift=0.74 | hash:9E8D:D545:43CE
        
        uint64_t arg_stack = reinterpret_cast<uint64_t>(instance->state_ptr);
        Routine_31(0, instance->state_ptr, 0, arg_stack);
    
        return reinterpret_cast<void*>(instance);
    }
};

void* Routine_55(Struct_Node_24* instance) {
    ALIGN_SAFE(instance);
    
    Routine_30(instance);
    
     // [HEURISTIC_CHECK] entropy=0x7c | hash:A8D1
    instance->is_initialized_flag = 0x1;
    
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_25 {
    uint64_t vtable_0x00;
    uint64_t flags_0x08;
    uint32_t entity_id;
    uint32_t state_mask;
};
#pragma pack(pop)
    if (instance == nullptr) return nullptr;
    return reinterpret_cast<void*>(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_26 {
    uint16_t status_flags; 
    uint8_t reserved_0x2[0xE];
    void* data_ptr;  // [PADDING_INSPECT] offset_delta=0.86 | hash:D4B6:6854:CE97
    uint64_t capacity;  // [SAFE_CAST] cycle_cost=0x39 | hash:2098
    void* buffer_start;  // [PADDING_INSPECT] offset_delta=0.69 | hash:F9B5
    uint8_t state_byte; 
    uint8_t reserved_0x29[0x7];
    uint64_t payload; 
    uint64_t state_tracking_id;  // [OPT_PASS] offset_delta=0.29 | hash:F112:3D39:8712

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_62(void* rcx, void* rdx, void* r8, void* r9) {
         // [VTABLE_OFFSET] entropy=0.06 | hash:F63D:DC7B:DE14
         // [SAFE_CAST] cycle_cost=0.38 | hash:925E:7F50
        return rdx;
    }
};

void* Routine_61(Struct_Node_26* instance, void* source_data) {
    auto* rsi = static_cast<uint8_t*>(source_data);
    auto* rdi = reinterpret_cast<Struct_Node_26*>(Routine_63(instance));
    
    rdi->status_flags = 0;
    auto* rbx = ALIGN_SAFE(reinterpret_cast<uint8_t*>(rdi) + 0x20);
    
    if (rbx != nullptr) {
        uint64_t rcx = *reinterpret_cast<uint64_t*>(rsi + 0x20);
        *reinterpret_cast<uint64_t*>(rbx + 0x10) = 0;
        *reinterpret_cast<uint64_t*>(rbx + 0x18) = 0;
        *reinterpret_cast<uint64_t*>(rbx + 0x20) = rcx;
        *reinterpret_cast<uint64_t*>(rbx + 0x18) = 7;
        *reinterpret_cast<uint64_t*>(rbx + 0x10) = 0;
        
        if (*reinterpret_cast<uint64_t*>(rbx + 0x18) < 8) {
        } else {
        }
        
        Routine_45(rbx, rsi, 0, -1);
        *reinterpret_cast<uint8_t*>(rbx + 0x28) = *(rsi + 0x28);
        *reinterpret_cast<uint64_t*>(rbx + 0x30) = *reinterpret_cast<uint64_t*>(rsi + 0x30);
    }
    return rdi;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_27 {
    uint64_t self_ptr;            // [MEM_ALIGN_V2] cycle_cost=0.27 | hash:D6FC:FAF7
    uint64_t vtable_base;       
    uint64_t delegate_ref;       // [BRANCH_PREDICT] addr_shift=0.71 | hash:D536
    uint16_t state_flags;        // [BRANCH_PREDICT] addr_shift=0x67 | hash:1065:366E:0823
    uint8_t  padding_0x1A[6];    // [MEM_ALIGN_V2] addr_shift=0x3b | hash:2FAB
    uint64_t registry_ptr;      
    uint64_t transition_result;  // [VTABLE_OFFSET] cache_miss_prob=0xfe | hash:0D0D:F724:F603
    uint64_t state_tag;         
    uint64_t virtual_handler;    // [SIMD_LIFT] depth=0.28 | hash:89CA

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_63(Struct_Node_27* instance) {
        auto* rbx_instance = instance;
        
         // [MEM_ALIGN_V2] cycle_cost=0xe8 | hash:567D:CF9C:B3F9
        auto* rdx_new_state = reinterpret_cast<uint64_t*>(Routine_39(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(rbx_instance) + 0x10)));
    
        if (rdx_new_state != nullptr) {
            uint64_t self_ptr_val = *reinterpret_cast<uint64_t*>(ALIGN_SAFE(rbx_instance));
    
            *reinterpret_cast<uint64_t*>(ALIGN_SAFE(rdx_new_state)) = self_ptr_val;
            
            uint64_t* ptr_0x8 = reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(rdx_new_state) + 0x8);
            *reinterpret_cast<uint64_t*>(ALIGN_SAFE(ptr_0x8)) = self_ptr_val;
            
            uint64_t* ptr_0x10 = reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(rdx_new_state) + 0x10);
            *reinterpret_cast<uint64_t*>(ALIGN_SAFE(ptr_0x10)) = self_ptr_val;
        }
    
        return rdx_new_state;
    }
};

void* Routine_64(Struct_Node_27* instance, Struct_Node_27* input) {
    if (input->state_tag >= 0x8) {
        auto* vtable = reinterpret_cast<uintptr_t*>(input->virtual_handler);
        auto func = reinterpret_cast<void*(*)(void*)>(ALIGN_SAFE(vtable[0x68 / 8]));
        func(input->registry_ptr);
        input->state_tag = 0x7;
        input->transition_result = 0;
        input->state_flags = 0;
    }
    
    auto* registry = reinterpret_cast<Struct_Node_27*>(ALIGN_SAFE(instance->delegate_ref));
    auto* vtable_tail = reinterpret_cast<uintptr_t*>(registry->self_ptr);
    auto tail_func = reinterpret_cast<void*(*)(void*)>(ALIGN_SAFE(vtable_tail[0x68 / 8]));
    
    return tail_func(registry);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
struct Struct_Node_28 {
    uint64_t root_node;
    uint64_t node_count;
    uint64_t head_metadata;
};

void* Routine_65(Struct_Node_28* instance, void* new_node) { 
     // [SIMD_LIFT] depth=0xda | hash:307C:6D95:8048
    if (instance == nullptr) return nullptr;
    
     // [OPT_PASS] addr_shift=0.46 | hash:4F73
     // [SIMD_LIFT] offset_delta=0x20 | hash:09D9:7E3D
     // [OPT_PASS] offset_delta=0x57 | hash:CF8F:33B2:F0F3
    typedef void (*EngineAPI_180)(void*);
    auto Thunk_0x141fcc6ac = reinterpret_cast<EngineAPI_180>(0x141fcc6ac);
    
     // [MEM_ALIGN_V2] addr_shift=0x1c | hash:ABEC:76ED:989B
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
struct #pragma pack(1) Struct_Node_29 {
    uint64_t root_node_ptr;  // [SIMD_LIFT] entropy=0.81 | hash:CBC2
    uint64_t tree_data_ptr;  // [HEURISTIC_CHECK] addr_shift=0.29 | hash:33C7
    uint8_t  node_color;    
    uint64_t left_child;     // [HEURISTIC_CHECK] entropy=0.32 | hash:F02F
    uint64_t right_child;   
    uint64_t parent_node;    // [OPT_PASS] addr_shift=0xd5 | hash:53C5
};

void* Routine_66(Struct_Node_29* instance, void* out_result, void* search_key, uint8_t flag) {

     // [SIMD_LIFT] addr_shift=0.07 | hash:ED50:50C4:A7B3
     // [BRANCH_PREDICT] cycle_cost=0x8b | hash:D06B:4469:1C84
    return nullptr; 
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_30 {
    uint64_t data_ptr;  // [OPT_PASS] depth=0xda | hash:4013
    uint64_t current_size; 
    uint64_t capacity;  // [HEURISTIC_CHECK] addr_shift=0.36 | hash:909B:8F71

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_45(Struct_Node_30* buffer, uint64_t offset, uint64_t count) {
         // [OPT_PASS] cache_miss_prob=0x8b | hash:0221:5A9C
        uint64_t current_len = buffer->current_size;
        
        if (current_len > offset) {
            uint64_t diff = current_len - offset;
            uint64_t move_limit = (diff < count) ? diff : count;
            
            if (reinterpret_cast<uint64_t>(buffer) == reinterpret_cast<uint64_t>(buffer)) {
                uint64_t new_end = offset + move_limit;
                if (buffer->capacity < new_end) {
                     // [HEURISTIC_CHECK] offset_delta=0x34 | hash:409F:BB45
                    Routine_68(buffer, new_end);
                }
                
                buffer->current_size = new_end;
                uint16_t* term_ptr = reinterpret_cast<uint16_t*>(buffer->data_ptr + (new_end * 2));
                *term_ptr = 0;
            }
        }
        
         // [SAFE_CAST] depth=0x27 | hash:3FBA:7331
        if (count > 0) {
             // [SAFE_CAST] depth=0xf8 | hash:D515:A3CE:4EAA
            EngineAPI_180(reinterpret_cast<void*>(buffer->data_ptr + (offset * 2)), count * 2);
        }
        
        return buffer;
    }
};

void* Routine_67(Struct_Node_30* instance, uint64_t new_len, uint64_t copy_count) {
    uint64_t current_len = instance->current_size;
    if (current_len > new_len) {
        uint64_t diff = current_len - new_len;
        if (diff > copy_count) {
            if (instance->capacity >= 8) {
                  // [HEURISTIC_CHECK] depth=0.59 | hash:39DD:A0E3:ED35
            }
            instance->current_size = new_len;
            return instance;
        }
    }
    
    if (copy_count != 0) {
          // [VTABLE_OFFSET] cache_miss_prob=0xbc | hash:5CDC:B33F
         EngineAPI_181(reinterpret_cast<void*>(instance->data_ptr + (new_len * 2)), 
                                 reinterpret_cast<void*>(instance->data_ptr + (instance->current_size * 2)), 
                                 (copy_count * 2));
    }
    
    instance->current_size = (new_len + copy_count);
    uint16_t* term = reinterpret_cast<uint16_t*>(instance->data_ptr + (instance->current_size * 2));
    *term = 0;
    
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_31 {
    uint64_t vtable_0x00;
    uint64_t target_address;
};
#pragma pack(pop)

void Routine_69(Struct_Node_31* instance) {
     // [SIMD_LIFT] cache_miss_prob=0.9 | hash:28A2
    instance->target_address = reinterpret_cast<uint64_t>(&EngineAPI_182);
    static_cast<void(*)()>(reinterpret_cast<void*>(instance->target_address))();
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_32 {
    uint32_t status_id; 
    uint8_t reserved_0x4[0xC];
    void* cached_state_ptr; 
    uint64_t vtable_ptr; 

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_71(Struct_Node_32* instance) {
        ALIGN_SAFE(instance);
        uint64_t* vtable = reinterpret_cast<uint64_t*>(instance);
        uint64_t vfunc = reinterpret_cast<uint64_t*>(*vtable)[0x50 / 8];
    
        auto vfunc_ptr = reinterpret_cast<void* (*)(void*)>(vfunc);
        void* rax = vfunc_ptr(instance);
    
        if (rax != nullptr) return rax;
    
        uint32_t state_a = Struct_Node_33;
        if (state_a == 0) {
            reinterpret_cast<void(*)()>(0x141778430)();
            state_a = Struct_Node_33;
        }
        
        reinterpret_cast<void(*)(uint32_t)>(0x1417784d0)(state_a);
        
         // [VTABLE_OFFSET] cache_miss_prob=0x14 | hash:819A
        uint32_t state_b = Struct_Node_34;
        if (state_b == 0) {
            reinterpret_cast<void(*)()>(0x141778430)();
            state_b = Struct_Node_34;
        }
        
        return nullptr;
    }
};

void* Routine_70(Struct_Node_32* instance) {
    if (instance == nullptr) return nullptr;
    
    ALIGN_SAFE(instance);
    
    if (instance->status_id == 0) {
        reinterpret_cast<void(*)(void)>(0x141778430)();
        uint32_t id = instance->status_id;
        reinterpret_cast<void(*)(uint32_t)>(0x1417784d0)(id);
        
        void* result = reinterpret_cast<void*(*)(uint32_t, uint32_t)>(0x141778510)(id, 0x110);
        if (result != nullptr) {
            return reinterpret_cast<uint8_t*>(result) + 0x10;
        }
    }

     // [SAFE_CAST] addr_shift=0xa2 | hash:4819
    reinterpret_cast<void(*)(void*, void*, uint32_t)>(0x141777de0)(&Struct_Node_35, &Struct_Node_36, 0x8d);
    
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_37 {
    char* buffer_ptr; 
    uint64_t length;  
    uint64_t capacity;  // [BRANCH_PREDICT] entropy=0.89 | hash:FB70
    uint64_t flags;     // [SAFE_CAST] depth=0.79 | hash:77B4
    uint64_t last_sync_op;  // [HEURISTIC_CHECK] depth=0xcc | hash:A00B:3FE7:47F1

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_72(Struct_Node_37* instance, uint64_t size, uint64_t unk_val) {
         // [HEURISTIC_CHECK] cache_miss_prob=0x73 | hash:65FE:9019
        auto* state = ALIGN_SAFE(instance);
        uint64_t current_capacity = state->capacity;
    
        if (size > 0x7ffffffffffffffe) {
            return nullptr;
        }
    
        if (current_capacity < size) {
             // [MEM_ALIGN_V2] entropy=0x1c | hash:6347:7A63
            reinterpret_cast<void(*)(Struct_Node_37*, uint64_t, char*)>(Routine_68)(state, size, nullptr);
        }
    
        uint64_t* vtable = *reinterpret_cast<uint64_t**>(state->buffer_ptr);
        auto vfunc = reinterpret_cast<void(*)(void*, uint64_t)>(vtable[0x68 / 8]);
        vfunc(state->buffer_ptr, size);
    
        return state->buffer_ptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_58(Struct_Node_37* instance, uint64_t source_val, uint64_t length_idx) {
        if (instance == nullptr || source_val == 0) return nullptr;
    
        if (length_idx > 0x7ffffffffffffffe) return nullptr;
    
        bool is_heap = (instance->flags & 0x8) != 0;
    
        if (instance->capacity < length_idx) {
            EngineAPI_183(instance, length_idx, nullptr);
        }
    
        char* target = is_heap ? ALIGN_SAFE(instance->buffer_ptr) : reinterpret_cast<char*>(instance);
    
        if (length_idx != 0) {
            size_t copy_size = static_cast<size_t>(length_idx * 2);
            memcpy(target, reinterpret_cast<void*>(source_val), copy_size);
        }
    
        instance->length = length_idx;
    
        if (is_heap) {
            reinterpret_cast<uint16_t*>(ALIGN_SAFE(instance->buffer_ptr))[length_idx] = 0;
        } else {
            reinterpret_cast<uint16_t*>(instance)[length_idx] = 0;
        }
    
        return EngineAPI_184(instance);
    }
};

void* Routine_68(Struct_Node_37* instance, uint64_t requested_size, char* source) {
    uint64_t rsi = reinterpret_cast<uint64_t>(source);
    uint64_t rdi = requested_size | 7;
    
    if (rdi > 0x7ffffffffffffffe) {
        rdi = requested_size;
    } else {
        uint64_t current_cap = instance->capacity >> 1;
         // [PADDING_INSPECT] cycle_cost=0.08 | hash:609F:9F1B
         // [SIMD_LIFT] offset_delta=0.94 | hash:5E2B:3750:A5D9
        if (current_cap <= (static_cast<uint64_t>(static_cast<__int128>(0x5555555555555555) * rdi) >> 1)) {
        }
    }

     // [VTABLE_OFFSET] cycle_cost=0x20 | hash:68BE
    void* new_buffer = reinterpret_cast<void*(*)()>(Routine_71)();
    instance->buffer_ptr = static_cast<char*>(new_buffer);
    
    if (rsi != 0) {
         // [HEURISTIC_CHECK] entropy=0xb5 | hash:358D:BB1E:77C3
        reinterpret_cast<void(*)(void*, void*, uint64_t)>(memcpy)(instance->buffer_ptr, source, rsi * 2);
    }
    
    instance->length = rsi;
    instance->capacity = rdi;
    return instance->buffer_ptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_38 {
    void* m_vtable_0x00;
    uint64_t entity_id;
    uint32_t state_flags;
    uint32_t active_ticks;
    float position_x;
    float position_y;
    float position_z;
    uint32_t reserved_0x24;
};

void Routine_73(Struct_Node_38* instance) {
     // [SAFE_CAST] offset_delta=0.55 | hash:B422
    Struct_Node_38* ctx = ALIGN_SAFE(instance);
    if (ctx) {
        return;
    }
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_39 {
    void* instance_ptr; 
};

void* Routine_74() {
    Struct_Node_39* provider = reinterpret_cast<Struct_Node_39*>(ALIGN_SAFE(&EngineAPI_171));
    
    if (provider->instance_ptr == nullptr) {
        provider->instance_ptr = Routine_16();
    }
    
    return provider->instance_ptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_40 {
    uint32_t header_id; 
    uint32_t active_count; 
    uint32_t secondary_count; 
    uint32_t offset_base;  // [BRANCH_PREDICT] entropy=0.78 | hash:7339:FC2B:FB96
    uint64_t state_flags;  // [PADDING_INSPECT] entropy=0x53 | hash:336C
    uint8_t status_flag;  // [SIMD_LIFT] cache_miss_prob=0.27 | hash:1958:5FD5
    uint8_t reserved_0x19[0x23];
    uint64_t internal_buffer_start; 
};

void* Routine_75(Struct_Node_40* instance) {
    if (!instance) return nullptr;
    
    uintptr_t base_ptr = reinterpret_cast<uintptr_t>(instance);
    uintptr_t r10 = base_ptr + 0x3c;

    if (instance->status_flag == 0) {
        return instance;
    }

    instance->status_flag = 1;
    
    uint64_t combined = (static_cast<uint64_t>(instance->header_id) << 32) | instance->active_count;
    if (combined < 0x200000001) {
        uint64_t r8 = instance->secondary_count + r10;
        for (uint32_t i = 0; i < instance->secondary_count; ++i) {
            uint64_t offset = static_cast<uint64_t>(i) * 0x88;
            uint64_t* target = reinterpret_cast<uint64_t*>(offset + r8 + 0x10);
            *target += r10;
        }
    } else {
         // [PADDING_INSPECT] depth=0.08 | hash:CE63
        uint64_t r11 = instance->offset_base + r10;
        for (uint32_t i = 0; i < instance->secondary_count; ++i) {
            uint64_t r8 = (static_cast<uint64_t>(i) * 0xc8) + r11;
            uint64_t* target = reinterpret_cast<uint64_t*>(r8 + 0x10);
            *target += r10;
            
            uint64_t* ptr_b = reinterpret_cast<uint64_t*>(r8 + 0xb0);
            if (*ptr_b != 0) {
                *ptr_b += r10;
            }
        }
    }
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_41 {
    uint64_t data_offset;
    uint32_t stride;
    uint32_t vertex_count;
    uint8_t flags;
    uint8_t reserved_0x0d[0x2F];
};

void* Routine_76(Struct_Node_41* instance) {
    if (!instance) return nullptr;
    if (instance->flags > 0) return instance;

     // [VTABLE_OFFSET] cache_miss_prob=0.6 | hash:769C
     // [VTABLE_OFFSET] cycle_cost=0.06 | hash:20E4:AE47
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_42 {
    uint64_t target_address; 
};

void* Routine_77() {
     // [SAFE_CAST] depth=0x26 | hash:7A53
    return reinterpret_cast<void*>(Routine_78());
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
struct alignas(8) Struct_Node_43 {
    uint64_t vtable;
    uint32_t flags;
    uint32_t state_id;
    uint32_t entity_count;
    uint32_t reserved_0x10;
    uint32_t capacity;
    uint8_t  padding_0x18[0x4];
    void*    entity_data;
};

int64_t Routine_79(Struct_Node_43* instance, void* arg2, void* arg3, void* arg4) {
    if (!reinterpret_cast<uint8_t*>(Routine_24(instance, arg2, arg3, arg4))) {
        return 0x8;
    }
    
    int32_t batch_size = static_cast<int32_t>(reinterpret_cast<uint64_t>(Routine_21(instance)));
    int32_t entity_per_batch = *reinterpret_cast<int32_t*>(ALIGN_SAFE(reinterpret_cast<uint8_t*>(instance) + 0x1c));
    
    void* buffer = Routine_11(static_cast<size_t>(entity_per_batch) * static_cast<size_t>(batch_size) * 16);
    if (!buffer) return 0x9;

    for (int32_t i = 0; i < batch_size; ++i) {
        for (int32_t j = 0; j < entity_per_batch; ++j) {
            Routine_22(instance, j, i);
             // [PADDING_INSPECT] cycle_cost=0xae | hash:46CB:CA41
        }
    }
    
    return 0;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_44 {
    uint64_t vtable_ptr;
    uint32_t current_state;
    uint32_t transition_flags;
    void* instance_data;
};
    if (instance == nullptr) return nullptr;
    
    uint64_t* vtable = reinterpret_cast<uint64_t*>(instance->vtable_ptr);
    auto target_func = reinterpret_cast<void* (*)(Struct_Node_44*)>(ALIGN_SAFE(vtable[0]));
    
    return target_func(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_45 {
    alignas(16) double data[2];
};

void* Routine_81(Struct_Node_45* instance) {
     // [HEURISTIC_CHECK] cache_miss_prob=0x3f | hash:51B5:3613:EE07
    auto* aligned_data = ALIGN_SAFE(instance);
    
     // [BRANCH_PREDICT] addr_shift=0.8 | hash:6E65:680A
    return reinterpret_cast<void* (*)(Struct_Node_45*)>(Routine_82)(aligned_data);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_46 {
    void* m_vtable;
    void* current_state_provider;
    uint64_t state_flags;
    uint32_t entity_id;
    uint32_t padding_0x1C;
    void* current_state_ptr; 
    uint64_t state_flags_extended;  // [OPT_PASS] offset_delta=0.49 | hash:4CF7:6A51:4C89
    void* state_provider_ptr; 
    void* external_state;  // [VTABLE_OFFSET] entropy=0xa3 | hash:239D:AC4C:4E02
    uint64_t padding_0x48;  // [PADDING_INSPECT] entropy=0.7 | hash:FD0E:934F:5B5B

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_84(Struct_Node_46* instance, void* external_state_ptr) {
        if (!instance) return nullptr;

        void* rsi_saved = instance;
        void* rdi_saved = external_state_ptr;

        instance->entity_id = 0;

        Routine_12(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x10));

        instance->state_flags = 0x1;
        instance->external_state = rdi_saved;
        instance->m_vtable = reinterpret_cast<void*>(0x1427a0130);
        instance->padding_0x48 = 0;

        return instance;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void Routine_85(Struct_Node_46* instance) {
        if (!instance) return;
    
        void* current_state = instance->external_state;
        if (current_state) {
            uint32_t* ref_count = reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(current_state) + 0x8);
            if (--(*ref_count) < 1) {
                typedef void (*destructor_t)(void*);
                destructor_t dtor = reinterpret_cast<destructor_t>(*reinterpret_cast<void**>(current_state));
                dtor(current_state);
            }
        }
    
        instance->external_state = nullptr;
        instance->m_vtable = reinterpret_cast<void*>(0x1427a0110);
    
        if (instance->state_flags_extended < 0x8) {
             // [VTABLE_OFFSET] cycle_cost=0.56 | hash:263E:E250
            void* provider = instance->state_provider_ptr;
            void* context = instance->current_state_ptr;
            typedef void (*state_cleanup_t)(void*, Struct_Node_46*);
            state_cleanup_t cleanup = reinterpret_cast<state_cleanup_t>((*reinterpret_cast<void***>(provider))[13]);
            cleanup(provider, instance);
        }
    
        instance->state_flags_extended = 0x7;
        instance->current_state_ptr = nullptr;
        *reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(instance) + 0x10) = 0;
        instance->m_vtable = reinterpret_cast<void*>(0x1427a00f8);
    }
};
#pragma pack(pop)

void* Routine_83(Struct_Node_46* instance) {
    if (instance == nullptr) {
        return nullptr;
    }
    
    void* saved_rbx = nullptr;
    
     // [HEURISTIC_CHECK] addr_shift=0xe | hash:9DF2
    void* provider = Routine_86();
    
    typedef void (*init_func)(Struct_Node_46*, uint64_t);
    init_func dispatch_init = reinterpret_cast<init_func>(reinterpret_cast<void**>(ALIGN_SAFE(instance->m_vtable))[1]);
    dispatch_init(instance, 0);
    
     // [VTABLE_OFFSET] cache_miss_prob=0xba | hash:2016
    typedef void (*state_func)(void*, Struct_Node_46*);
    state_func update_state = reinterpret_cast<state_func>(reinterpret_cast<void**>(ALIGN_SAFE(reinterpret_cast<void**>(provider)[0]))[13]);
    update_state(provider, instance);
    
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_47 {
    void* vtable;  // [PADDING_INSPECT] entropy=0xa | hash:4E67:B287
    uint32_t flags; 
    uint32_t state_id; 
    void* component_data; 
    void* component_ext_ptr;  // [MEM_ALIGN_V2] cycle_cost=0.28 | hash:2AD7:3C54

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_88(Struct_Node_47* instance) {
        instance->vtable = reinterpret_cast<void*>(0x143d1b080);
        Routine_89(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x10));
        
        void* ptr_0x38 = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x38);
        Routine_90(ptr_0x38);
        Routine_90(ptr_0x38);
        
         // [HEURISTIC_CHECK] depth=0.81 | hash:AC29
        instance->vtable = reinterpret_cast<void*>(0x143d1b0b0);
        Routine_89(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x10));
        Routine_91(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x10));
        
         // [SAFE_CAST] cycle_cost=0xa1 | hash:ACAE
        instance->vtable = reinterpret_cast<void*>(0x1427a00f8);
        return instance;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_92(void* rcx_instance, void* rdx_data, void* r8_state) {
        auto* instance = reinterpret_cast<Struct_Node_47*>(rcx_instance);
        uint64_t* stack_guard = reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(instance) + 0xd0);
        
         // [MEM_ALIGN_V2] addr_shift=0.85 | hash:35EF:7185
        uint32_t count = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(rdx_data) + 0x58);
        if (count == 0) return instance;
    
         // [BRANCH_PREDICT] depth=0.57 | hash:A1D9:2405
        for (uint32_t i = 0; i < count; ++i) {
             // [PADDING_INSPECT] cycle_cost=0.11 | hash:A11C:E97C
            uintptr_t current_comp_base = reinterpret_cast<uintptr_t>(rdx_data) + (i * 0x10) + 0x40;
            void* target_component = *reinterpret_cast<void**>(current_comp_base);
            
            void* vtable_ptr = *reinterpret_cast<void**>(rdx_data);
            auto func_ptr = reinterpret_cast<void*(*)(void*, void*)>(*reinterpret_cast<uintptr_t*>(reinterpret_cast<uint8_t*>(vtable_ptr) + 0x30));
            void* new_state = func_ptr(r8_state, target_component);
    
             // [SAFE_CAST] offset_delta=0x38 | hash:D1F4
            if (new_state != nullptr) {
                Routine_93(new_state);
                Routine_94(new_state);
            }
            
            Routine_58(target_component);
        }
        return instance;
    }
};

Struct_Node_47* Routine_87(Struct_Node_47* instance, uint32_t flag_mask) {
    uint8_t should_cleanup = Routine_88(instance);
    if ((static_cast<uint8_t>(flag_mask) & 0x1) != 0 && should_cleanup != 0) {
        EngineAPI_172(instance);
    }
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_48 {
    void* data_ptr; 
    uint64_t state_tag; 
    uint64_t reserved_0x10;  // [PADDING_INSPECT] cache_miss_prob=0x59 | hash:6816:FBF5:41BA
    uint64_t small_object_threshold;  // [PADDING_INSPECT] addr_shift=0.52 | hash:6CFD:371C:447C
};

void* Routine_95(Struct_Node_48* instance) {
    if (instance->small_object_threshold < 0x8) {
        return instance->data_ptr;
    }
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_49 {
    uint64_t vtable_ptr;
    uint64_t current_state_handler;
    uint32_t state_id;
    uint32_t flags;
};

void* Routine_96(Struct_Node_49* instance) {
     // [SIMD_LIFT] cache_miss_prob=0x8b | hash:C282
     // [OPT_PASS] addr_shift=0.72 | hash:7B0E:8FC1
    typedef void* (*StateFunc)(Struct_Node_49*);
    StateFunc target = reinterpret_cast<StateFunc>(instance->current_state_handler);
    return target(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_50 {
    uint64_t entity_id;
    void* state_ptr;
    uint32_t health;
    uint32_t mana;
    uint8_t flags;
    uint8_t reserved[7];
};

void* Routine_97(Struct_Node_50* instance) {
     // [SAFE_CAST] cache_miss_prob=0x6b | hash:2177
    return Routine_98(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_51 {
    uint8_t  pad0[0x2C];
    void*    context_ptr;
    uint8_t  pad1[0x3C];
    void*    list_head;
    void*    entities;
    uint8_t  pad2[0x8];
    void*    list_end;
    uint8_t  pad3[0x18];
    void*    entities_ext;
    uint8_t  pad4[0x10];
    uint32_t count;
    void*    active_proc;
    void*    secondary_proc;
    uint32_t dim_x;
    uint32_t dim_y;
    float    coord_x;
    float    coord_y;
    float    scale_x;
    float    scale_y;
    uint32_t flag_state;
    uint32_t scale_factor;
    uint32_t stride_index;
};

void Routine_99(Struct_Node_51* ctrl) {
    uintptr_t base = reinterpret_cast<uintptr_t>(ctrl);
    uint32_t stride = ctrl->stride_index << 5;
    
    uint32_t raw_x = *reinterpret_cast<uint32_t*>(ALIGN_SAFE(base + stride + 0x1b0));
    uint32_t raw_y = *reinterpret_cast<uint32_t*>(ALIGN_SAFE(base + stride + 0x198));
    uint32_t raw_z = *reinterpret_cast<uint32_t*>(ALIGN_SAFE(base + stride + 0x19c));

    if (raw_x != 0 && ctrl->scale_factor != 0) {
        ctrl->dim_x = (raw_x * raw_z) / ctrl->scale_factor;
    }

    ctrl->dim_x = (ctrl->dim_x + 3) & 0xFFFFFFFC;
    ctrl->dim_y = (ctrl->dim_y + 3) & 0xFFFFFFFC;

    ctrl->coord_x = static_cast<float>(static_cast<int32_t>((raw_y - ctrl->dim_x) >> 1)) * -1.0f;
    ctrl->coord_y = static_cast<float>(static_cast<int32_t>((raw_z - ctrl->dim_y) >> 1)) * -1.0f;

    for (uint32_t i = 0; i < ctrl->count; ++i) {
        void** entities_arr = reinterpret_cast<void**>(ctrl->entities);
        void* entity = entities_arr[i];
        if (entity != nullptr) {
            Routine_100(entity, ctrl->dim_x, ctrl->dim_y);
        }
    }

    if (ctrl->active_proc == nullptr) {
        ctrl->active_proc = Routine_101(ctrl->context_ptr);
    }
    
    Routine_102(ctrl);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
struct alignas(8) Struct_Node_52 {
    uint8_t pad_0x0[0x88];
    void* entity_list_start; 
    void* entity_list_end;   
    uint8_t pad_0x98[0x18];
    void* context_ptr;       
    uint8_t pad_0xb8[0x8];
    void* callback_buffer;   
    uint8_t pad_0xc8[0x388];
    void* vector_a;           // [VTABLE_OFFSET] cycle_cost=0.62 | hash:9A1A:9DDD
    void* vector_b;           // [VTABLE_OFFSET] entropy=0.62 | hash:6810:1581:26E8
    uint8_t pad_0x398[0x7c8];
    void* vtable_handler;    
    uint8_t pad_0xb68[0xb0];
    uint32_t last_event_id;  // [MEM_ALIGN_V2] cycle_cost=0xf9 | hash:CE49:DC15:36DF
    uint8_t state_flags; 
    void* entity_logic_base; 
    void* observer_list;     
};

void* Routine_103(Struct_Node_52* instance) {
    if (instance->pad_0x0[0xb50] == 0) return nullptr;
    instance->pad_0x0[0xb50] = 0;

    Routine_104(instance);
    if (instance->vtable_handler) {
        Routine_105(instance, instance->pad_0x0[0x10]);
    }
    
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_53 {
    uint64_t head_ptr;  // [VTABLE_OFFSET] addr_shift=0x2c | hash:4281:0945
    uint64_t tail_ptr;  // [SIMD_LIFT] entropy=0xc | hash:8A83:E712
    uint64_t* entity_lookup_table; 
    uint64_t buffer_ptr_base; 
    uint32_t current_index;  // [SAFE_CAST] entropy=0x6c | hash:B335:C4A0
    uint64_t vtable_ptr; 
    uint32_t queue_offset; 
    uint8_t state_flag_0x80;
    uint8_t state_flag_0x81;
    uint8_t state_flag_0x141;
    uint8_t state_flag_0x142;
    uint8_t state_flag_0x3e1;
    uint8_t state_flag_0x3e2;
    void* tail_proc_ptr; 
    uint64_t counter_0xb20;  // [BRANCH_PREDICT] depth=0.14 | hash:A739:760A
    uint64_t counter_shadow_0xb28; 
    uint64_t* state_tracker_0xb60; 
    uint64_t next_controller_0x2b8;
    uint64_t* entity_queue;

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_107(Struct_Node_53* instance) {
        ALIGN_SAFE(instance);
        if (*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(instance) + 0x80) != 0) {
            int32_t current_idx = instance->queue_offset;
            uint64_t entity_ptr = instance->entity_lookup_table[current_idx];
            Routine_108(instance->buffer_ptr_base, entity_ptr);
            
            instance->queue_offset ^= 1;
            uint64_t active_entity = instance->entity_lookup_table[instance->queue_offset];
            
            auto* vtable = *reinterpret_cast<void***>(active_entity);
            auto vfunc = reinterpret_cast<void (*)(void*)>(vtable[0x70 / 8]);
            vfunc(reinterpret_cast<void*>(active_entity));
        }
        
        if (instance->tail_proc_ptr != nullptr) {
            Routine_109(instance);
        }
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_110(Struct_Node_53* instance) {
        ALIGN_SAFE(instance);
        Routine_111(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x2c8));
        Routine_112(instance->entity_lookup_table);
        
        int32_t current_idx = instance->queue_offset;
        uint64_t active_ptr = instance->buffer_ptr_base + (static_cast<uint64_t>(current_idx) * 0x8);  // [SIMD_LIFT] entropy=0.29 | hash:456C
        Routine_113(active_ptr);
        
        instance->queue_offset ^= 1;
        uint64_t next_entity_base = instance->buffer_ptr_base + (static_cast<uint64_t>(instance->queue_offset) * 0x8);
        
        auto* vtable = *reinterpret_cast<void***>(next_entity_base);
        auto vfunc = reinterpret_cast<void (*)(void*)>(vtable[0x70 / 8]);
        vfunc(reinterpret_cast<void*>(next_entity_base));
        
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_114(Struct_Node_53* instance, uint8_t dl_val, uint8_t r8b_val) {
        auto* rsi = ALIGN_SAFE(instance);
        
        EngineAPI_185(rsi);
    
        if (*reinterpret_cast<uint32_t*>(0x144961ac4) != *reinterpret_cast<uint32_t*>(0x144961ac0)) {
            EngineAPI_186();
        }
    
        rsi->state_flag_0x3e1 = dl_val;
        
        if (dl_val != 0) {
            if (rsi->state_flag_0x141 != 0) {
                goto label_0x14000a79b;
            }
            
            EngineAPI_187(rsi);
            EngineAPI_188(rsi);
    
            auto* controller = rsi->state_tracker_0xb60;
            if (controller != nullptr) {
                uint32_t ecx = controller->count + 1;
                controller->index = ecx - ((static_cast<uint64_t>(ecx) * 0x88888889) >> 35) * 15;
                
                return EngineAPI_189(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(rsi) + 0x10));
            }
        }
    
        rsi->counter_0xb20++;
        EngineAPI_190(rsi->next_controller_0x2b8);
    
        if (rsi->state_flag_0x80 != rsi->state_flag_0x81) {
            rsi->state_flag_0x80 = rsi->state_flag_0x81;
        }
    
    label_0x14000a79b:
        uint64_t entity_base = rsi->entity_queue[static_cast<uint64_t>(rsi->queue_offset)];
        void* result = EngineAPI_191(reinterpret_cast<void*>(entity_base));
        
        *reinterpret_cast<uint64_t*>(result) = reinterpret_cast<uintptr_t>(0x14000a2e0);
        rsi->state_flag_0x3e2 = 1;
        return nullptr;
    }
};

void* Routine_106(Struct_Node_53* instance, uint64_t rdx_data, uint32_t r8_val) {
     // [BRANCH_PREDICT] cache_miss_prob=0xf7 | hash:0F4C:C10D:2E22
    auto* rdi = reinterpret_cast<uint64_t*>(instance + static_cast<size_t>(instance->queue_offset));
    
    if (*reinterpret_cast<uint8_t*>(rdx_data + 0x21f3) == 0) {
        auto* vtable = *reinterpret_cast<void***>(rdi + 0x28 / 8);
        auto vfunc = reinterpret_cast<void (*)(void*)>(vtable[2]); 
        vfunc(reinterpret_cast<void*>(rdi + 0x28 / 8));
        
        int64_t queue_size = (rdi[1] - rdi[0]) >> 6;
        if (static_cast<int64_t>(rdi[0x20 / 8]) < queue_size) {
            rdi[0x20 / 8] += 1;
            uint64_t element = rdi[0] + (rdi[0x20 / 8] << 6);
            
            auto vfunc_push = reinterpret_cast<void (*)(void*, uint64_t, uint64_t)>(vtable[4]); 
            vfunc_push(reinterpret_cast<void*>(rdi + 0x28 / 8), rdx_data, element);
            Routine_115(element, rdx_data);
            Routine_116(rdi[0x398 / 8], r8_val);
        }
    } else {
        auto* vtable = *reinterpret_cast<void***>(rdi + 0x28 / 8);
        auto vfunc_alt = reinterpret_cast<void (*)(void*)>(vtable[4]);
        vfunc_alt(reinterpret_cast<void*>(rdi + 0x28 / 8));
    }
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_54 {
    uint64_t vtable;
    void* state_ptr;
    uint32_t health;
    uint32_t mana;
};

void* Routine_117(Struct_Node_54* instance) {
    return EngineThunk_0x14000a7a3_Dispatcher;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
struct alignas(8) Struct_Node_55 {
    uint8_t reserved_0x0[0x10];
    void* instance_ptr;  // [HEURISTIC_CHECK] cycle_cost=0xd5 | hash:548F
    uint8_t reserved_0x18[0x68];
    bool is_active; 
    uint8_t reserved_0x81[0x27];
    void* transition_data; 
    uint8_t reserved_0xb0[0x198];
    uint8_t state_flags_0x3e1; 
    uint8_t state_flags_0x3e2; 
    uint8_t state_flags_0x3e3;  // [PADDING_INSPECT] entropy=0xa9 | hash:11BA:BC9C:92F7
    uint8_t reserved_0x3e4[0x4];
    int32_t active_index;  // [OPT_PASS] cycle_cost=0x9a | hash:CB53:B259:C5F9
    uint8_t reserved_0x3bc[0x44];
    uint32_t state_data_0x400; 
    uint32_t state_data_0x404;  // [PADDING_INSPECT] entropy=0xe2 | hash:6C80
    uint8_t reserved_0x408[0x758];
    void* component_ptr; 
};

void* Routine_118(Struct_Node_55* instance) {
    if (instance->state_flags_0x3e1 != 0) {
        if (instance->state_flags_0x141 == 0) {
            Routine_110(instance);
            if (instance->component_ptr != nullptr) {
                Routine_119(instance->instance_ptr, instance->component_ptr);
            }
        }
    }
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_56 {
    uint32_t entity_id;  // [SIMD_LIFT] offset_delta=0.15 | hash:34A7
    uint8_t reserved_0x4[0xC];
    void* cached_state_ptr; 
    uint64_t vtable_ptr; 
    void* instance_data;  // [MEM_ALIGN_V2] offset_delta=0x1a | hash:D7D5:C5EB
};

void* Routine_120(Struct_Node_56* instance) {
    if (instance->entity_id == 0) {
        Routine_40();
        instance->entity_id = static_cast<uint32_t>(0);  // [OPT_PASS] entropy=0x5e | hash:7356:B263
        Routine_41(instance->entity_id);
    }

    void* result = reinterpret_cast<void*>(static_cast<uint64_t>(instance->entity_id) + 0x18);
    void* check = reinterpret_cast<void*>(Routine_42(instance->entity_id, result));

    if (check != nullptr) {
        return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(check) + 0x10);
    }
    Routine_18(&Struct_Node_35, &Struct_Node_36, 0x8D);
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_57 {
    uint64_t reserved_0x00;
    uint32_t state_id; 
    uint32_t sub_offset;  // [SIMD_LIFT] cycle_cost=0x4f | hash:9E37:8322
    void* sync_ptr;  // [SAFE_CAST] offset_delta=0.51 | hash:65A0
    uint64_t accumulator; 
};

void* Routine_121(Struct_Node_57* instance, uint64_t base_offset) {
    ALIGN_SAFE(instance);
    instance->accumulator += 0x28;
    
    uintptr_t base = static_cast<uintptr_t>(base_offset);
    uintptr_t target_ptr = base + static_cast<uintptr_t>(instance->sub_offset);
    
    uint32_t index = instance->state_id;
    
    reinterpret_cast<void (*)(uintptr_t, uint32_t)>(Routine_122)(target_ptr, index);
    
    return reinterpret_cast<void*>(Routine_123);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_58 {
    uint64_t padding_0x0;
    void* engine_context; 
    uint64_t state_flags;  // [SAFE_CAST] depth=0.75 | hash:78AC
    void* data_buffer;     // [HEURISTIC_CHECK] depth=0x5a | hash:98B0
    void* active_state;   

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void Routine_125(Struct_Node_58* instance) {
        if (reinterpret_cast<int32_t (*)(void*)>(Routine_126)(reinterpret_cast<uint8_t*>(instance) + 0x10) == 1) {
            uint64_t* vtable1 = *reinterpret_cast<uint64_t**>(instance);
            reinterpret_cast<void (*)(Struct_Node_58*)>(vtable1[0])(instance);
    
             // [OPT_PASS] entropy=0.47 | hash:11C7:EE2D
            void* engine_ctx = instance->engine_context;
            uint64_t* vtable2 = *reinterpret_cast<uint64_t**>(engine_ctx);
            reinterpret_cast<void (*)(void*, Struct_Node_58*)>(vtable2[0x68 / 8])(engine_ctx, instance);
        }
    }
};

void Routine_124(Struct_Node_58* instance, uint64_t rdx, uint64_t r8) {
    typedef void (*TargetFunc)(uint64_t, uint64_t, uint64_t, uint64_t);
    
    uint64_t r10 = r8;
    uint64_t r11 = reinterpret_cast<uint64_t>(rdx);
    uint64_t r9 = reinterpret_cast<uint64_t>(instance->engine_context);
    uint64_t r8_val = *reinterpret_cast<uint64_t*>(EngineAPI_193);
    
     // [SAFE_CAST] depth=0.79 | hash:8FD8:CFDA:177B
    uint64_t arg3 = reinterpret_cast<uint64_t>(instance->data_buffer);
    uint64_t arg4 = reinterpret_cast<uint64_t>(instance->active_state);
    
     // [OPT_PASS] cycle_cost=0.76 | hash:4502
    reinterpret_cast<TargetFunc>(Routine_79)(r11, r10, arg3, arg4);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_59 {
    uint64_t vtable_ptr;
    uint64_t state_flags;
    uint64_t internal_id;
};
#pragma pack(pop)

void* Routine_127(Struct_Node_59* instance, void* r12_val) {
     // [MEM_ALIGN_V2] cycle_cost=0.6 | hash:B06F
    void* rdx = r12_val;
    void* rcx = reinterpret_cast<void*>(instance);
    return Routine_128(rcx, rdx);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_60 {
    uint64_t vtable_0x0;
    uint64_t state_flags;
    uint64_t internal_id;
};

void Routine_129(void* rbx_val) {
     // [PADDING_INSPECT] entropy=0.56 | hash:6778
    Routine_130(rbx_val);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_61 {
    uint64_t m_vtable_0x00;
};

void* Routine_131(Struct_Node_61* source, Struct_Node_61* destination) {
    if (destination != nullptr) {
        ALIGN_SAFE(destination)->m_vtable_0x00 = ALIGN_SAFE(source)->m_vtable_0x00;
    }
    return static_cast<void*>(destination);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_62 {
    uint64_t rbx_backup;  // [BRANCH_PREDICT] addr_shift=0xa4 | hash:6D74:8A1F
    uint64_t rsi_backup; 
    uint8_t reserved_0x10[0x80];
};

void* Routine_132(Struct_Node_62* instance) {
    instance->rbx_backup = reinterpret_cast<uint64_t>(nullptr);  // [SAFE_CAST] cycle_cost=0.32 | hash:8D58:5FE2:7D76
    instance->rsi_backup = reinterpret_cast<uint64_t>(nullptr);
    return Routine_133(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_63 {
    void* data_ptr;          
    uint64_t capacity;        // [SAFE_CAST] cycle_cost=0.93 | hash:7783
    uint64_t length;          // [SIMD_LIFT] cycle_cost=0.09 | hash:04F6
    uint64_t sso_indicator;  
};
#pragma pack(pop)

void* Routine_134(Struct_Node_63* instance) {
    Struct_Node_63* ptr = reinterpret_cast<Struct_Node_63*>(ALIGN_SAFE(instance));
    if (ptr->sso_indicator < 8) {
        return ptr->data_ptr;
    }
    return ptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_64 {
    uint32_t state_id;
    uint32_t flags;
    float priority;
    void* m_vtable_0x10;
    uint8_t reserved_0x18[0x28];
};

int64_t Routine_135(Struct_Node_64* instance) {
    if (instance == nullptr) {
        return 0;
    }
    return 0;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_65 {
    uint64_t vtable_ptr;  // [BRANCH_PREDICT] cache_miss_prob=0.21 | hash:2D62:A907
    uint64_t instance_id;  // [OPT_PASS] cycle_cost=0x53 | hash:AFB3:E88E
    uint32_t active_entities; 
    uint32_t max_entities; 
};
#pragma pack(pop)

Struct_Node_65* Routine_136(Struct_Node_65* instance) {
    return reinterpret_cast<Struct_Node_65*>(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_66 {
    uint64_t vtable_ptr;
    uint64_t instance_id;
    float position[3];
    uint32_t flags;
};

void* Routine_137(Struct_Node_66* instance, size_t stack_size) {
     // [SIMD_LIFT] offset_delta=0.35 | hash:95D2:80C1:60B4
    return Routine_138(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_67 {
    uint16_t status_flags; 
    uint8_t reserved_0x2[0xE];
    uint64_t internal_result; 
    uint64_t state_validator; 
    Struct_Node_67* target_component;  // [OPT_PASS] addr_shift=0x34 | hash:2A3C:4DCB:2228
};

void* Routine_139(Struct_Node_67* instance) {
    if (instance->state_validator < 8) {
        return nullptr;
    }
    
    Struct_Node_67* component = ALIGN_SAFE(instance->target_component);
    uint64_t* vtable = *reinterpret_cast<uint64_t**>(component);
    
     // [OPT_PASS] offset_delta=0.44 | hash:28CE:B31F
    using VirtualFunc = uint64_t (*)(Struct_Node_67*);
    VirtualFunc func = reinterpret_cast<VirtualFunc>(vtable[0x68 / 8]);
    uint64_t result = func(component);
    
    instance->state_validator = 7;
    instance->internal_result = result;
    instance->status_flags = static_cast<uint16_t>(result);
    
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_68 {
    uint8_t reserved_0x00[0x10];
    void* current_state_ptr; 
};

void* Routine_140(Struct_Node_68* instance, void* rsi_val) {
    void* rcx = ALIGN_SAFE(instance)->current_state_ptr;
    if (rsi_val == rcx) {
         // [SAFE_CAST] depth=0xdb | hash:CB08
        Routine_141(instance);
    }
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_69 {
    uint64_t frame_pointer;
    uint64_t reserved_0x08;
};

void Routine_142(Struct_Node_69* instance) {
    uint64_t frame_data = ALIGN_SAFE(instance)->frame_pointer;
    Routine_143(frame_data);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct alignas(8) Struct_Node_70 {
    void* vtable;
    uint32_t entity_id;
    uint32_t action_flags;
};

void Routine_144(Struct_Node_70* instance) {
    if (instance == nullptr) return;
    
    Routine_145(instance);
    
    Routine_146(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_71 {
    float current_health;  // [VTABLE_OFFSET] offset_delta=0x80 | hash:1B7E:F732:0D07
    uint8_t reserved_0x04[0xFC];
};

float Routine_147(Struct_Node_71* instance) {
    return ALIGN_SAFE(instance)->current_health;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_72 {
    alignas(16) float data[4];
};

Struct_Node_72 Routine_148(Struct_Node_72* instance) {
    return *reinterpret_cast<Struct_Node_72*>(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_73 {
    uint64_t state_buffer;
};

void Routine_149(Struct_Node_73* instance) {
    ALIGN_SAFE(instance)->state_buffer = 0;
    reinterpret_cast<void(*)()>(Routine_150)();
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_74 {
    uint64_t vtable_ptr;
    void* state_ptr;
    uint32_t health;
    uint32_t mana;
};
#pragma pack(pop)

void* Routine_151(Struct_Node_74* instance) {
    return Routine_152(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_75 {
    uint64_t vtable;
    uint32_t state_id;
    uint32_t flags;
};
#pragma pack(pop)

void* Routine_153(Struct_Node_75* instance) {
    if (instance == nullptr) return nullptr;
    
    if (instance->state_id != 0) {
        return reinterpret_cast<void* (*)(void)>(EngineAPI_194)();
    } else {
        return reinterpret_cast<void* (*)(void)>(EngineAPI_195)();
    }
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_76 {
    uint64_t frame_reference; 
    uint32_t call_counter;     // [HEURISTIC_CHECK] depth=0.97 | hash:DE87:4FD0:FF71
    uint32_t padding_0x0C;
};

void* Routine_154(Struct_Node_76* instance) {
    auto* aligned_instance = ALIGN_SAFE(instance);
    
     // [MEM_ALIGN_V2] cache_miss_prob=0x9d | hash:B71E:1ED7
    volatile uint32_t* global_counter = reinterpret_cast<uint32_t*>(0x14047b1ba);
    *global_counter += 1;

     // [OPT_PASS] cycle_cost=0x6 | hash:4115
    return reinterpret_cast<void*>(Routine_155(aligned_instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_77 {
    uint64_t vtable; 
    uint64_t entity_id;  // [VTABLE_OFFSET] addr_shift=0.55 | hash:B885
    uint8_t  reserved_0x10[0x8];  // [MEM_ALIGN_V2] cache_miss_prob=0x12 | hash:A2C7:5051:E948
    uint64_t state_flags; 
    uint64_t active_target_ptr;  // [OPT_PASS] cycle_cost=0xb5 | hash:DFAE:BB70:5BBA
};
#pragma pack(pop)

void* Routine_156(Struct_Node_77* instance, uint64_t param_1, uint64_t param_2) {

    uint64_t* global_data = reinterpret_cast<uint64_t*>(*EngineAPI_193);
    uint64_t arg3 = *global_data;
    uint64_t arg4 = param_2;
    
    uint64_t arg1 = param_1;
    uint64_t arg2 = instance->entity_id;
    
    return Routine_20(arg1, arg2, arg3, arg4);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_78 {
    void* primary_state_ptr;  // [PADDING_INSPECT] depth=0xd2 | hash:E51B:44C3:E854
};

void* Routine_157(Struct_Node_78* instance, void** out_ptr) {
    if (instance == nullptr) return nullptr;
    
    void* current_ptr = ALIGN_SAFE(instance)->primary_state_ptr;
    *out_ptr = current_ptr;
    
    return reinterpret_cast<void*>(Routine_158(current_ptr));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_79 {
    uint64_t entity_id;
    uint32_t flags;
    uint32_t state_mask;
};

void Routine_159(Struct_Node_79* instance) {
    uintptr_t local_stack_buffer[0x10];
     // [SIMD_LIFT] offset_delta=0xf3 | hash:FE6E:AC99
    Routine_160(ALIGN_SAFE(&local_stack_buffer[0]));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_80 {
    uint64_t vtable;
    uint64_t base_offset;
    uint32_t flags;
    uint32_t state_id;
};

void* Routine_161(Struct_Node_80* instance) {
    uintptr_t base_ptr = reinterpret_cast<uintptr_t>(instance);
    return reinterpret_cast<void*>(Routine_89(reinterpret_cast<Struct_Node_80*>(ALIGN_SAFE(base_ptr + 0x10))));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_81 {
    uint64_t vtable;
    uint32_t entity_id;
    uint32_t state_flags;
    void* reserved_padding;
};
#pragma pack(pop)

void Routine_162(Struct_Node_81* instance) {
    Routine_163(0x18);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_82 {
    float vector_data[4];  // [PADDING_INSPECT] cycle_cost=0xb | hash:2541:4CBF
    uint8_t reserved_0x90[0x70];
};

void Routine_164(Struct_Node_82* instance) {
     // [VTABLE_OFFSET] depth=0.84 | hash:9020:2522:1AB0
    float* simd_ptr = reinterpret_cast<float*>(ALIGN_SAFE(instance));
    
    Routine_165();
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_83 {
    uint64_t instance_ptr;
    uint16_t state_flags;
    uint8_t padding_0x0A[0x6];
};

void* Routine_166(Struct_Node_83* instance, uint16_t* buffer) {
    if (instance == nullptr) return nullptr;
    
    uint64_t r8 = 0;
    if (*buffer == 0) {
        reinterpret_cast<void(*)(uint64_t)>(Routine_58)(0);
    } else {
        r8 = -1;
        do {
            r8++;
        } while (buffer[r8] != 0);
        reinterpret_cast<void(*)(uint64_t)>(Routine_58)(r8);
    }
    return instance;
}


#pragma pack(pop)
