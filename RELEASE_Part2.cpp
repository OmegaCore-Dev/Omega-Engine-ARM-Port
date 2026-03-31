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
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_84 {
    uint64_t vtable_0x0;
    void* state_ptr;  // [PADDING_INSPECT] entropy=0x5e | hash:7ED8:24C9
    uint32_t health;  // [SAFE_CAST] depth=0x4b | hash:DDF6:9A19
    uint32_t mana;  // [PADDING_INSPECT] cache_miss_prob=0xec | hash:486C:55F0
};

void Routine_196(Struct_Node_84* instance) {
    Routine_197(0x18);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_85 {
    uint32_t state_mode;  // [BRANCH_PREDICT] cache_miss_prob=0x20 | hash:F56F
    uint8_t  flag_buffer[64];  // [OPT_PASS] offset_delta=0.74 | hash:74BC:A006:B343
};

void Routine_198(int32_t mode) {
    Struct_Node_85* state = reinterpret_cast<Struct_Node_85*>(EngineThunk_GlobalStateBase);
    int32_t original_mode = mode;

    if (mode == 0) {
        uint64_t pattern = 0x0101010101010101ULL;
        for (int i = 0; i < 7; ++i) {
            reinterpret_cast<uint64_t*>(state->flag_buffer)[i] = pattern;
        }
        state->state_mode = static_cast<uint32_t>(original_mode);
        return;
    }

    if (mode == 1) {
        for (int i = 0; i < 7; ++i) {
            state->flag_buffer[i] = (i < 3) ? 1 : 0;
        }
        state->state_mode = static_cast<uint32_t>(original_mode);
        return;
    }

    if (mode == 2) {
        for (int i = 0; i < 7; ++i) {
            state->flag_buffer[i] = (i == (original_mode - 1)) ? 1 : 0;
        }
        state->state_mode = static_cast<uint32_t>(original_mode);
        return;
    }
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
struct Struct_Node_86 {
    uint32_t state_flags; 
    uint8_t bit_map[8];    // [VTABLE_OFFSET] entropy=0x7f | hash:D279:5C33
    uint32_t reserved_0x0C[12]; 
};

void Routine_199(Struct_Node_86* instance, uint32_t input_val, uint32_t* target_buffer) {
    if (input_val == 0) return;

    uint32_t loop_counter = input_val;
    uint8_t* bit_map_ptr = reinterpret_cast<uint8_t*>(&instance->bit_map[0]);

    do {
        uint32_t current_val = *target_buffer;
        for (int i = 0; i < 8; ++i) {
            *(bit_map_ptr - 9 + i) = static_cast<uint8_t>((current_val >> i) & 0x1);
        }
        *(target_buffer - 1) = current_val;
        target_buffer++;
        loop_counter--;
    } while (loop_counter != 0);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_87 {
    uint64_t vtable;
    uint32_t flags;
    uint32_t reserved_0x0C;
    uint64_t state_data_ptr;
};
#pragma pack(0)

void Routine_200(Struct_Node_87* instance) {
     // [VTABLE_OFFSET] depth=0xac | hash:1D7F:AF15:9D89
     // [HEURISTIC_CHECK] addr_shift=0x35 | hash:0D27:0377:22E3
    asm volatile ("mov x0, #0");
    
     // [OPT_PASS] entropy=0x73 | hash:D446:7A07
    Routine_201(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_88 {
    uint8_t reserved_0x00[0x10];
    void* primary_ptr;  // [SAFE_CAST] depth=0.25 | hash:EE4B:885D
    uint8_t reserved_0x18[0x58];
    void* secondary_ptr;  // [SAFE_CAST] addr_shift=0x96 | hash:F682:F4A0
    uint8_t active_flag; 
};

void* Routine_202(Struct_Node_88* instance) {
    ALIGN_SAFE(instance);
    if (instance->active_flag != 0) {
        return instance->secondary_ptr;
    }
    return instance->primary_ptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_89 {
    uint32_t state_flags;
    uint32_t reserved_0x04;
};

uint32_t Routine_203(Struct_Node_89* instance) {
    ALIGN_SAFE(instance);
    uint32_t val = instance->state_flags;
    val = static_cast<uint32_t>(val >> 5);
    return (val & 0x1);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_90 {
    uint32_t state_id; 
    uint32_t padding_04;  // [SAFE_CAST] cache_miss_prob=0.15 | hash:CD01
    uint64_t internal_context; 
};
#pragma pack(pop)

void* Routine_204(Struct_Node_90* instance) {
    ALIGN_SAFE(instance)->state_id = 151; 
    return EngineAPI_267(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct alignas(8) Struct_Node_91 {
    uint64_t vtable_ptr; 
    uint64_t instance_id; 
};

Struct_Node_91* Routine_205(Struct_Node_91* instance) {
    return reinterpret_cast<Struct_Node_91*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_92 {
    void* data_ptr_0x00;
    uint8_t padding_0x08[0x10];
    void* callback_target_0x18;
};

void Routine_206(Struct_Node_92* instance) {
    void* rcx = ALIGN_SAFE(instance->data_ptr_0x00);
    void* rdx = ALIGN_SAFE(instance->callback_target_0x18);
    
     // [SIMD_LIFT] depth=0x16 | hash:DA06
    typedef void (*TargetFunc)(void*, void*);
    static_cast<TargetFunc>(reinterpret_cast<void*>(Routine_207))(rcx, rdx);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_93 {
    uint64_t padding_0x00;
    uint64_t saved_rcx_at_0x10;
};

void* Routine_208(Struct_Node_93* instance, uint64_t rcx_val) {
    uint64_t* stack_ptr = reinterpret_cast<uint64_t*>(instance);
    stack_ptr[2] = rcx_val; 
    return nullptr; 
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
#pragma pack(1)
struct Struct_Node_94 {
    uint64_t vtable;
    void* instance_data;
    uint32_t status_flags;
    uint32_t reserved_0x10;
};
#pragma pack()

void Routine_209(Struct_Node_94* instance) {
     // [HEURISTIC_CHECK] cycle_cost=0x4f | hash:E551:6B16:DC76
    reinterpret_cast<void(*)(Struct_Node_94*)>(Routine_210)(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_95 {
    uint32_t reserved_0x0;
    float health_val;  // [MEM_ALIGN_V2] offset_delta=0x69 | hash:38CA:754B
    uint8_t padding_0x8[0x8];
};
#pragma pack(pop)

float Routine_211(Struct_Node_95* instance) {
    return ALIGN_SAFE(instance)->health_val;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_96 {
    uint8_t buffer[0x31];
};

void Routine_212(Struct_Node_96* instance) {
    Routine_213(ALIGN_SAFE(instance));
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_97 {
    uint64_t instance_id;
    void* data_ptr;
    void* result_ptr; 
    uint16_t short_flag;  // [SAFE_CAST] offset_delta=0.9 | hash:6A6F:144D:CC2A
    uint64_t state_validation_key; 
    void* nested_data_ptr;  // [BRANCH_PREDICT] addr_shift=0x1e | hash:5138:5E68
    void* sub_component_ptr; 

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_215(Struct_Node_97* instance, uint8_t flag) { 
        instance->instance_id = reinterpret_cast<uint64_t>(&EngineAPI_268);
    
         // [PADDING_INSPECT] offset_delta=0.95 | hash:13AC:637A
        if ((flag & 0x1) != 0) {
            Routine_4(instance);
        }
    
        return reinterpret_cast<void*>(instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_216(Struct_Node_97* instance) {
        if (instance == nullptr) return nullptr;
    
        void* rdi_backup = instance;
        void* rbx_backup = nullptr;
    
         // [BRANCH_PREDICT] cache_miss_prob=0.87 | hash:1246
        Routine_86(instance);
    
         // [BRANCH_PREDICT] cache_miss_prob=0.14 | hash:1EDF:6931:65EB
        uint64_t* vtable = reinterpret_cast<uint64_t*>(*reinterpret_cast<uint64_t*>(rdi_backup));
        void* (*func1)(void*, void*, void*) = reinterpret_cast<void* (*)(void*, void*, void*)>(vtable[0x8 / 8]);
        rbx_backup = func1(rdi_backup, nullptr, rdi_backup);
    
         // [OPT_PASS] addr_shift=0.94 | hash:6970:77A5
        uint64_t* vtable2 = reinterpret_cast<uint64_t*>(*reinterpret_cast<uint64_t*>(rbx_backup));
        void* (*func2)(void*, void*, void*) = reinterpret_cast<void* (*)(void*, void*, void*)>(vtable2[0x68 / 8]);
        func2(rbx_backup, rdi_backup, rbx_backup);
    
        return rbx_backup;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_217(Struct_Node_97* instance) {
        Struct_Node_97* rbx_instance = instance;
        
         // [MEM_ALIGN_V2] offset_delta=0x80 | hash:278C
        instance->instance_id = reinterpret_cast<uint64_t>(&EngineAPI_269);
    
         // [HEURISTIC_CHECK] cache_miss_prob=0.32 | hash:E84E:D427
        if (instance->state_validation_key >= 0x8) {
             // [OPT_PASS] addr_shift=0.54 | hash:932E
            void* nested_obj = instance->nested_data_ptr;
            void* arg_val = reinterpret_cast<void*>(instance->data_ptr);
            
            uint64_t* vtable = reinterpret_cast<uint64_t*>(*reinterpret_cast<uint64_t*>(nested_obj));
            void* (*dispatch_func)(void*, void*) = reinterpret_cast<void* (*)(void*, void*)>(vtable[0x68 / 8]);
            
            void* result = dispatch_func(nested_obj, arg_val);
            
            rbx_instance->state_validation_key = 0x7;
            rbx_instance->result_ptr = result;
            rbx_instance->short_flag = static_cast<uint16_t>(reinterpret_cast<uintptr_t>(result));
        }
    
        rbx_instance->instance_id = reinterpret_cast<uint64_t>(&EngineAPI_268);
        
        return nullptr;
    }

    // [SECRET]
    void* Routine_218(Struct_Node_97* instance) {
        void* rbx = instance->sub_component_ptr;
        uint64_t* vtable = *reinterpret_cast<uint64_t**>(instance);
        typedef void* (*Func1)(void*, void*);
        Func1 func1 = reinterpret_cast<Func1>(vtable[0x8 / 8]);
        func1(instance, nullptr);
        uint64_t* vtable2 = *reinterpret_cast<uint64_t**>(rbx);
        typedef void* (*Func2)(void*, void*);
        Func2 func2 = reinterpret_cast<Func2>(vtable2[0x68 / 8]);
        return func2(rbx, instance);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_219(Struct_Node_97* instance, uint8_t flag) {
        if (!ALIGN_SAFE(instance)) return nullptr;
    
        instance->instance_id = reinterpret_cast<uint64_t>(&EngineAPI_269);
    
        if (instance->state_validation_key >= 0x8) {
            void* nested_obj = ALIGN_SAFE(instance->nested_data_ptr);
            uint64_t* vtable = *reinterpret_cast<uint64_t**>(nested_obj);
            
            typedef void* (*VirtualFunc)(void*, void*);
            VirtualFunc dispatch = reinterpret_cast<VirtualFunc>(vtable[0x68 / 8]);
            void* result = dispatch(nested_obj, instance->data_ptr);
    
            instance->state_validation_key = 0x7;
            instance->result_ptr = result;
            instance->short_flag = static_cast<uint16_t>(reinterpret_cast<uintptr_t>(result));
        }
    
        instance->instance_id = reinterpret_cast<uint64_t>(&EngineAPI_268);
        
        if ((flag & 0x1) != 0) {
            Routine_4(instance);
        }
    
        return reinterpret_cast<void*>(instance);
    }
};

void* Routine_214(Struct_Node_97* instance, void* arg2) {
    void* r8_val = arg2;
    uint32_t rdx_val = 0;
    return Routine_17(instance, reinterpret_cast<void*>(static_cast<uintptr_t>(rdx_val)), r8_val);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_98 {
    uint8_t padding_0x0[0x10];
    uint32_t active_count; 
    uint8_t padding_0x14[0x4];
    void* components_buffer;  // [SIMD_LIFT] offset_delta=0xeb | hash:D8EF:57F0:AB88
    uint8_t padding_0x20[0x38];
    void* owner_context; 
    uint8_t padding_0x60[0x1E8];
    void* state_tracking_0x250;
    void* context_0x258;
    uint8_t padding_0x260[0x2D8];
    void* state_ptr_0x538; 
    uint8_t padding_0x540[0x5D];
    uint8_t state_flag_0x59d;  // [VTABLE_OFFSET] addr_shift=0.72 | hash:9F3F

    // [SECRET]
    // [SECRET]
    void Routine_221(Struct_Node_98* instance, void* input_ptr) {
         // [HEURISTIC_CHECK] entropy=0.98 | hash:1FF1:5717
        
        uintptr_t base_buffer = reinterpret_cast<uintptr_t>(instance->components_buffer);
        
        *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(instance) + 0x258) = input_ptr;
        
        Routine_222(reinterpret_cast<void*>(base_buffer + 0x10), input_ptr);
        
        *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(instance) + 0x250) = input_ptr;
    }
};

void* Routine_220(Struct_Node_98* instance, int32_t count, void* list_ptr, void* context) {
    instance->active_count = static_cast<uint32_t>(count);
    instance->owner_context = context;
    
     // [SAFE_CAST] offset_delta=0x12 | hash:73D4:C126:88C8
    Routine_223(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance) + 0x18), static_cast<size_t>(count) * 8);
    
    if (count > 0) {
        for (int32_t i = 0; i < count; ++i) {
            void* entry = reinterpret_cast<void**>(list_ptr)[i];
            if (entry) {
                void* target = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(entry) + 0x18);
                if (Routine_224(target) == 3) {
                    Routine_225(target, nullptr);
                }
            }
        }
    }
    
    instance->state_ptr_0x538 = context;
    instance->state_flag_0x59d = static_cast<uint8_t>(count & 0xFF);
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_99 {
    uintptr_t m_vtable_0x0; 
    void* internal_context; 

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void Routine_227(Struct_Node_99* instance, bool should_free) {
        if (instance == nullptr) return;
    
         // [PADDING_INSPECT] depth=0.91 | hash:6815:58A8
        instance->vtable_ptr = reinterpret_cast<uintptr_t>(0x14276ae90);
    
         // [MEM_ALIGN_V2] cycle_cost=0.83 | hash:1B19:4B6C:091B
        if (should_free) {
            typedef void (*free_func)(void*);
            auto engine_free = reinterpret_cast<free_func>(0x141fd0668);
            engine_free(instance->internal_context);
        }
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    Struct_Node_99* Routine_228(Struct_Node_99* instance, uint32_t flags) {
        if (instance == nullptr) return nullptr;
    
         // [VTABLE_OFFSET] offset_delta=0xd7 | hash:87DA:3E9C
        instance->vtable_ptr = reinterpret_cast<uintptr_t>(0x142841be0);
    
         // [SIMD_LIFT] offset_delta=0.94 | hash:5011
        typedef void (*init_func)(void*);
        auto dependency_init = reinterpret_cast<init_func>(0x141779d30);
        dependency_init(instance->internal_context);
    
        instance->vtable_ptr = reinterpret_cast<uintptr_t>(0x14276ae90);
    
        if ((static_cast<uint8_t>(flags) & 0x1) != 0) {
            typedef void (*cleanup_func)(Struct_Node_99*);
            auto secondary_cleanup = reinterpret_cast<cleanup_func>(0x141779ce0);
            secondary_cleanup(instance);
        }
    
        return instance;
    }
};

void Routine_226(Struct_Node_99* instance) {
    if (instance == nullptr) return;
    
     // [VTABLE_OFFSET] cycle_cost=0x7b | hash:3F71
    instance->vtable_ptr = reinterpret_cast<uintptr_t>(0x142841be0);
    
     // [OPT_PASS] depth=0.39 | hash:8F4F:A75B:41BF
    Routine_229(instance->internal_context);
    
     // [HEURISTIC_CHECK] addr_shift=0x5 | hash:1BDD:BE24
    instance->vtable_ptr = reinterpret_cast<uintptr_t>(0x14276ae90);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_100 {
    uint16_t header;  // [SAFE_CAST] cache_miss_prob=0x37 | hash:2C8A
    uint8_t reserved_0x02[0xe];
    uint64_t state_ptr; 
    uint64_t state_idx;  // [BRANCH_PREDICT] cycle_cost=0x6b | hash:3855:A81B
    uint8_t reserved_0x20[0x81];
    uint8_t flag_byte; 
    uint8_t reserved_0xa2[0x26];
    uint32_t component_count;  // [MEM_ALIGN_V2] depth=0xdf | hash:887C:7FEE:01D6
    uint8_t reserved_0xcc[0x40c];
    uint32_t active_state_flags;  // [BRANCH_PREDICT] addr_shift=0xa0 | hash:9A4F
    uint8_t reserved_0x4dc[0x4f4];
    uint32_t state_limit; 
    uint32_t state_val;    // [OPT_PASS] offset_delta=0.42 | hash:67A5:2F60

    // [SECRET]
    void* Routine_231(Struct_Node_100* instance, uint32_t val1, uint32_t val2, void* data_ptr) {
        uint8_t* base = reinterpret_cast<uint8_t*>(instance);
        uint32_t* state_limit = reinterpret_cast<uint32_t*>(base + 0x9d0);
        uint32_t* state_val = reinterpret_cast<uint32_t*>(base + 0x9d4);
    
         // [PADDING_INSPECT] entropy=0x36 | hash:8CF7
        size_t scaled = static_cast<size_t>(val1) << 3;
        EngineAPI_173(base + 0x7c0 + scaled, data_ptr, scaled);
    
        uint32_t combined = val1 + val2;
        uint32_t* target_ptr = (*state_limit < val1) ? state_limit : &combined;
        uint32_t temp = *target_ptr;
        
        *state_limit = temp;
        if (combined > *state_val) {
            *state_val = combined;
        }
    
        return Routine_232(instance, val1);
    }

    // [SECRET]
    void Routine_233(Struct_Node_100* instance) {
        uint8_t* base = reinterpret_cast<uint8_t*>(instance);
        uint64_t* state_idx = reinterpret_cast<uint64_t*>(base + 0x18);
        uint64_t* state_ptr = reinterpret_cast<uint64_t*>(base + 0x10);
        uint16_t* header_val = reinterpret_cast<uint16_t*>(base);
        uint8_t* flag_byte = base + 0xa1;
    
        if (*state_idx < 8) {
            return;
        }
    
        if (*state_idx + 1 > 0x40) {
             // [VTABLE_OFFSET] depth=0.29 | hash:CA88:F45B
            Dispatch_Routine_266();
            return;
        }
    
        *flag_byte &= ~0x02;
        *state_idx = 7;
        *state_ptr = 0;
        *header_val = 0;
    }
};

void* Routine_230(Struct_Node_100* instance, uint32_t count, void* data_buffer) {
    instance->component_count = count;
    if (count == 0) return instance;

    size_t scaled_size = static_cast<size_t>(count * 3) << 3;
    
    EngineAPI_173(reinterpret_cast<uint8_t*>(instance) + 0xcc, data_buffer, scaled_size);

    uint8_t* sub_ptr = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(instance) + 0x8);
    Routine_235(sub_ptr + 0x10, data_buffer, count);

    instance->active_state_flags = count;
    if (count != 0) {
        EngineAPI_173(reinterpret_cast<uint8_t*>(sub_ptr) + 0x258, data_buffer, scaled_size);
    }
    return instance;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_101 {
    void* vtable_ptr; 
    int64_t object_count; 
    void* object_list_base;  // [SIMD_LIFT] addr_shift=0.92 | hash:6041

    // [SECRET]
    // [SECRET]
    void* Routine_236(Struct_Node_101* instance, int64_t rdx_val) {
        void* r14_val = reinterpret_cast<void*>(Routine_237(reinterpret_cast<uint8_t*>(instance) + 0x18));
        
        Routine_238(instance->vtable_ptr, instance->object_count, r14_val, nullptr);
    
        int64_t* start_ptr = reinterpret_cast<int64_t*>(instance->object_list_base);
        int64_t* end_ptr = reinterpret_cast<int64_t*>(reinterpret_cast<uint8_t*>(instance->object_list_base) + (instance->object_count - reinterpret_cast<uintptr_t>(instance->object_list_base)));
        
         // [OPT_PASS] cache_miss_prob=0.31 | hash:D282:A60C
        int64_t* current = start_ptr;
        if (current != nullptr && current != end_ptr) {
            do {
                void* obj = reinterpret_cast<void*>(*current);
                if (obj != nullptr) {
                    uint32_t* ref_count = reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(obj) + 0x8);
                    if (--(*ref_count) < 1) {
                        void** vtable = *reinterpret_cast<void***>(obj);
                        auto destructor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                        destructor(obj);
                    }
                }
                *current = 0;
                current++;
            } while (current != end_ptr);
        }
    
         // [OPT_PASS] entropy=0xb3 | hash:5953:FC16:B624
        uintptr_t base_adj = reinterpret_cast<uintptr_t>(r14_val);
        instance->object_list_base = reinterpret_cast<void*>(base_adj + (rdx_val * 8));
        instance->object_count = static_cast<int64_t>(base_adj + ((end_ptr - start_ptr) * 8));
        instance->vtable_ptr = r14_val;
    
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_239(Struct_Node_101* instance, int64_t new_capacity) {
        int64_t current_count = instance->object_count;
        uintptr_t base_ptr = reinterpret_cast<uintptr_t>(instance->object_list_base);
        
         // [VTABLE_OFFSET] entropy=0.51 | hash:8677
        if ((base_ptr - current_count) >> 3 < static_cast<uintptr_t>(new_capacity)) {
             // [SIMD_LIFT] offset_delta=0.01 | hash:8BD9
            int64_t diff = current_count - reinterpret_cast<int64_t>(instance->vtable_ptr);
            int64_t safe_limit = 0x1FFFFFFFFFFFFFFF;
            
            if (safe_limit - (diff >> 3) < new_capacity) {
                return Routine_236(instance, new_capacity);
            }
            
            return Routine_236(instance, new_capacity);
        }
        
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_101 {
        void* vtable_ptr;
        void* state_config_ptr;  // [VTABLE_OFFSET] offset_delta=0.98 | hash:9C8D:457F
        uint32_t status_flags;   // [OPT_PASS] cycle_cost=0x5c | hash:4C45
        uint32_t reserved_0x14;
    };
    
    void* Routine_237(Struct_Node_101* instance) {
        if (!instance) return nullptr;
    
        void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(instance));
        auto get_config = reinterpret_cast<void* (*)(Struct_Node_101*)>(vtable[10]);
        void* result = get_config(instance);
    
        if (result != nullptr) return result;
        if (EngineAPI_175 == 0) {
            Routine_40(&EngineAPI_175);
            Routine_41(&EngineAPI_175);
        }
    
        result = Routine_42(EngineAPI_175);
        if (result != nullptr) {
            if (*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(ALIGN_SAFE(result)) + 0x10) != 0) {
                return result;
            }
        }
        if (EngineAPI_176 == 0) {
            Routine_40(&EngineAPI_176);
            Routine_41(&EngineAPI_176);
        }
    
        void* fallback = Routine_42(EngineAPI_176);
        if (!fallback) {
            Routine_18(&StaticCluster_0x143d1aee0, &StaticCluster_0x143d1aec0, 0x8D);
            fallback = Routine_240(reinterpret_cast<uint8_t*>(ALIGN_SAFE(fallback)) + 0x10, 0x1);
        }
    
        return fallback;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_101 {
        void* object_instance;  // [SAFE_CAST] cycle_cost=0x69 | hash:F3D7:98AB:99EA
        uint32_t reference_count; 
        uint32_t padding_0xC;  // [SAFE_CAST] addr_shift=0xa2 | hash:EC4B
    };
    
    void* Routine_241(Struct_Node_101* instance) {
        if (instance == nullptr) {
            return nullptr;
        }
    
        void* obj = instance->object_instance;
        if (obj != nullptr) {
            std::atomic<uint32_t>* ref_count_ptr = reinterpret_cast<std::atomic<uint32_t>*>(ALIGN_SAFE(reinterpret_cast<uint8_t*>(obj) + 0x8));
            
            if (ref_count_ptr->fetch_sub(1, std::memory_order_acq_rel) <= 1) {
                void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(obj));
                auto destructor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                destructor(obj);
            }
    
            instance->object_instance = nullptr;
        }
    
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_242(Struct_Node_101* instance) {
        if (instance == nullptr) {
            return nullptr;
        }
    
        uint8_t* obj_ptr = reinterpret_cast<uint8_t*>(instance->object_instance);
        if (obj_ptr != nullptr) {
            uint32_t* ref_count = reinterpret_cast<uint32_t*>(ALIGN_SAFE(obj_ptr + 0x8));
            (*ref_count)--;
    
            if (*ref_count < 1) {
                void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(obj_ptr));
                auto destructor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                destructor(reinterpret_cast<void*>(obj_ptr));
            }
    
            instance->object_instance = nullptr;
        }
    
        return nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_243(Struct_Node_101* instance, int64_t count, void* source_data) {
        if (!instance) return nullptr;
    
        void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(instance));
        size_t allocation_size = static_cast<size_t>(count) * 80;
        
        using AllocatorFunc = void* (*)(void*, size_t, int);
        auto allocator = reinterpret_cast<AllocatorFunc>(vtable[10]);
        
        void* buffer = allocator(instance, allocation_size, 8);
        instance->object_list_base = buffer;
    
        if (!buffer) return nullptr;
    
        uint8_t* base_ptr = reinterpret_cast<uint8_t*>(buffer);
        for (int64_t i = 0; i < count; ++i) {
            uint8_t* entry = base_ptr + (i * 80);
            
            *reinterpret_cast<uintptr_t*>(ALIGN_SAFE(entry)) = EngineAPI_269;
            *reinterpret_cast<uint32_t*>(ALIGN_SAFE(entry + 0x8)) = 0;
            
            Routine_12(entry);
            
            *(entry + 0x38) = 0x1;
            *reinterpret_cast<void**>(ALIGN_SAFE(entry + 0x40)) = source_data;
            *reinterpret_cast<uint64_t*>(ALIGN_SAFE(entry + 0x48)) = 0;
            
            *reinterpret_cast<uintptr_t*>(ALIGN_SAFE(entry)) = EngineAPI_270;
        }
    
        instance->object_count = count;
        return reinterpret_cast<void*>(1);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_101 {
        void* vtable_ptr; 
            uint64_t object_count_limit; 
    void* object_list_base;  // [HEURISTIC_CHECK] entropy=0x1f | hash:E1E8
    uint64_t object_count_limit; 
        uint32_t reserved_0x1C;
    };
        if (!instance) return nullptr;
    
        uint64_t* thunk_ptr = reinterpret_cast<uint64_t*>(ALIGN_SAFE(&EngineAPI_171));
        if (*thunk_ptr == 0) {
            Routine_16();
        }
    
        void* controller_base = reinterpret_cast<void*>(*thunk_ptr);
        void*** vtable = reinterpret_cast<void***>(controller_base);
        
        uint64_t temp_buffer[8] = {0};
        auto setup_func = reinterpret_cast<void* (*)(void*, void*)>(vtable[3]);
        void* result = setup_func(controller_base, static_cast<void*>(&temp_buffer));
    
        uint32_t status_val = *reinterpret_cast<uint32_t*>(ALIGN_SAFE(result));
        if (((status_val >> 5) & 0x1) == 0) {
            instance->vtable_ptr = nullptr;
            instance->object_count = 0;
            instance->object_list_base = nullptr;
            instance->vtable_ptr = controller_base;
            return reinterpret_cast<void*>(instance);
        }
    
        Routine_18(nullptr, reinterpret_cast<void*>(ALIGN_SAFE(&StaticCluster_0x1439f23d0)), 0x3E);
        return nullptr;
    

    // [SECRET]
    // [SECRET]
    void Routine_89(Struct_Node_101* instance) {
        if (!instance) return;
    
        uint64_t* current = reinterpret_cast<uint64_t*>(instance->object_list_base);
        uint64_t* end = reinterpret_cast<uint64_t*>(instance->object_count_limit);
    
        if (current != end) {
            do {
                uint8_t* obj = reinterpret_cast<uint8_t*>(*current);
                if (obj != nullptr) {
                    uint32_t* ref_count = reinterpret_cast<uint32_t*>(ALIGN_SAFE(obj + 0x8));
                    if (--(*ref_count) < 1) {
                        void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(obj));
                        auto destructor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                        destructor(obj);
                    }
                }
                *current = 0;
                current++;
            } while (current != end);
        }
    
        instance->object_count_limit = reinterpret_cast<uint64_t>(instance->m_vtable_0x0);
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_101 {
        void* vtable_ptr;
        uintptr_t object_count;
        void* object_list_base;
        uint8_t reserved_0x18[0x8];
    };
    
    void Routine_91(Struct_Node_101* instance) {
        if (!instance || !instance->vtable_ptr) return;
    
        uintptr_t* current = reinterpret_cast<uintptr_t*>(ALIGN_SAFE(instance->vtable_ptr));
        uintptr_t* end = reinterpret_cast<uintptr_t*>(ALIGN_SAFE(instance->object_count));
    
        if (current < end) {
            do {
                uint8_t* obj = reinterpret_cast<uint8_t*>(*current);
                if (obj) {
                    uint32_t* ref_count = reinterpret_cast<uint32_t*>(ALIGN_SAFE(obj + 0x8));
                    if (static_cast<int32_t>(--(*ref_count)) < 1) {
                        void** vtable = *reinterpret_cast<void***>(ALIGN_SAFE(obj));
                        auto destructor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                        destructor(obj);
                    }
                }
                *current = 0;
                current++;
            } while (current < end);
        }
    
        void* extension = instance->object_list_base;
        if (extension) {
            void** vtable_ext = *reinterpret_cast<void***>(ALIGN_SAFE(extension));
            auto cleanup_ext = reinterpret_cast<void (*)(void*)>(vtable_ext[13]);
            cleanup_ext(extension);
        }
    
        instance->vtable_ptr = nullptr;
        instance->object_count = 0;
        instance->object_list_base = nullptr;
    }

    // [SECRET]
    // [SECRET]
    // [SECRET]
    void* Routine_238(void** source_start, void** source_end, void** destination_base) {
        if (!destination_base) {
            return nullptr;
        }
    
        void** current_src = source_start;
        void** current_dst = destination_base;
    
        while (current_src != source_end) {
            void* obj = *current_src;
            *current_dst = obj;
    
            if (obj != nullptr) {
                 // [BRANCH_PREDICT] depth=0x80 | hash:9B45
                auto* ref_count = reinterpret_cast<std::atomic<uint32_t>*>(
                    reinterpret_cast<uintptr_t>(ALIGN_SAFE(obj)) + 0x8
                );
                ref_count->fetch_add(1, std::memory_order_relaxed);
            }
    
            current_src++;
            current_dst++;
        }
    
        return static_cast<void*>(current_dst);
    }
}
};

void* Routine_90(Struct_Node_101* instance) {
    if (instance->object_list_base == nullptr) {
        return nullptr;
    }

    int32_t current_idx = static_cast<int32_t>(instance->object_count) - 1;
    if (current_idx >= 0) {
        uintptr_t base_ptr = reinterpret_cast<uintptr_t>(instance->object_list_base);
        do {
            uintptr_t entry_addr = base_ptr + (static_cast<uintptr_t>(current_idx) * 80);
            void** vtable = *reinterpret_cast<void***>(entry_addr);
            auto cleanup_func = reinterpret_cast<void (*)(void*)>(vtable[1]);
            cleanup_func(reinterpret_cast<void*>(entry_addr));
            current_idx--;
        } while (current_idx >= 0);
    }

    void** controller_vtable = *reinterpret_cast<void***>(instance);
    auto final_cleanup = reinterpret_cast<void (*)(void*, void*)>(controller_vtable[13]);
    final_cleanup(instance, instance->object_list_base);

    instance->object_count = 0;
    instance->object_list_base = nullptr;
    return nullptr;
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
struct Struct_Node_102 {
    uint8_t pad_0x0[0x28];
    void* obj_ref_0x28;
    uint8_t pad_0x30[0x10];
    void* obj_ref_0x40;
    uint8_t pad_0x48[0x40];
    void* obj_ref_0x88;
    uint8_t pad_0x90[0x10];
    void* obj_ref_0xa0;
    uint8_t pad_0xa8[0x48];
    uint32_t component_flags_0xf0;
    uint32_t component_flags_0xf4;
    uint32_t component_flags_0xf8;
    uint8_t pad_0xfc[0x11c];
    uint32_t ref_counter_0x218;
    uint8_t pad_0x21c[0x7c];
    void* ref_0x298;
    uint8_t pad_0x2a0[0x28];
    struct { void* ptr; uint8_t pad[0x50]; } sub_comp_0x2c8;
    uint8_t pad_0x320[0x20];
    void* obj_ref_0x340;
    uint8_t pad_0x348[0x10];
    void* obj_ref_0x358;
    void* obj_ref_0x360;
    uint8_t pad_0x368[0x10];
    void* obj_ref_0x378;
    uint8_t pad_0x380[0x88];
    void* obj_ref_0x408;
    uint8_t pad_0x410[0x120];
    void* obj_ref_0x530;
    uint8_t pad_0x538[0x130];
    void* obj_ref_0x668;
    uint8_t pad_0x670[0x10];
    void* obj_ref_0x680;
    uint8_t pad_0x688[0x8];
    void* obj_ref_0x690;
    uint8_t pad_0x698[0x438];
    void* obj_ref_0xad0;
    uint8_t pad_0xad8[0x58];
    void* obj_ref_0xb30;
    uint8_t pad_0xb38[0x10];
    void* obj_ref_0xb48;
    uint8_t pad_0xb50[0x68];
    void* obj_ref_0xbb8;

    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    void Routine_246(Struct_Node_102* instance, void* arg2) {
        if (instance == nullptr) return;
    
        uint8_t* base = reinterpret_cast<uint8_t*>(instance);
        
        uint32_t* field_f0 = ALIGN_SAFE(reinterpret_cast<uint32_t*>(base + 0xf0));
        uint32_t* field_f4 = ALIGN_SAFE(reinterpret_cast<uint32_t*>(base + 0xf4));
        
        *field_f0 = (*field_f0 + 3) & ~static_cast<uint32_t>(3);
        *field_f4 = (*field_f4 + 3) & ~static_cast<uint32_t>(3);
    
        void** ref_ptr = ALIGN_SAFE(reinterpret_cast<void**>(base + 0x298));
        if (*ref_ptr != nullptr) {
            uint32_t* ref_count = ALIGN_SAFE(reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*ref_ptr) + 0x8));
            if (--(*ref_count) < 1) {
                void** vtable = *reinterpret_cast<void***>(*ref_ptr);
                auto dtor = reinterpret_cast<void (*)(void*)>(vtable[0]);
                dtor(*ref_ptr);
            }
        }
    
        int32_t* count = ALIGN_SAFE(reinterpret_cast<int32_t*>(base + 0x218));
        for (int32_t i = 0; i < *count; ++i) {
            Routine_247(instance, i);
        }
    }
};

void Routine_245(Struct_Node_102* instance) {
    if (!instance) return;
    
    auto* ctx = reinterpret_cast<uint8_t*>(instance);
    
     // [OPT_PASS] cache_miss_prob=0.06 | hash:D2CA:4AB5:ABC5
    if (auto* ptr = *reinterpret_cast<void**>(ctx + 0xbb8)) {
        typedef void (*CleanupFunc)(void*);
        reinterpret_cast<CleanupFunc>(Routine_248)(ptr);
        *reinterpret_cast<void**>(ctx + 0xbb8) = nullptr;
    }
    
     // [OPT_PASS] entropy=0xea | hash:2856
    auto cleanup_vtable = [](void* base, size_t offset) {
        void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(base) + offset);
        if (obj) {
            void* vtable = *reinterpret_cast<void**>(obj);
            auto dtor = *reinterpret_cast<void (**)(void*)>(reinterpret_cast<uint8_t*>(vtable) + 0x68);
            dtor(obj);
            *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(base) + offset) = nullptr;
            *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(base) + offset + 8) = nullptr;
            *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(base) + offset + 16) = nullptr;
        }
    };

    cleanup_vtable(instance, 0xb30);
    
    if (reinterpret_cast<bool (*)(void*)>(Routine_249)(ctx + 0x690)) {
        reinterpret_cast<void (*)(void*)>(Routine_250)(ctx + 0x668);
        reinterpret_cast<void (*)(void*)>(Routine_251)(ctx + 0xad0);
        
        void* static_addr = reinterpret_cast<void*>(0x14279b458);
        *reinterpret_cast<void**>(ctx + 0x680) = static_addr;
        
        reinterpret_cast<void (*)(void*)>(Routine_252)(ctx + 0x530);
        reinterpret_cast<void (*)(void*)>(Routine_252)(ctx + 0x408);
    }

    cleanup_vtable(instance, 0x360);
    cleanup_vtable(instance, 0x340);
    
     // [VTABLE_OFFSET] offset_delta=0.04 | hash:C4E7
    reinterpret_cast<void (*)(void*)>(Routine_253)(ctx + 0x2c8);
    cleanup_vtable(ctx + 0x2c8, 0x40);
    
     // [PADDING_INSPECT] cycle_cost=0xbc | hash:18D7:D71E
    if (auto* ref = *reinterpret_cast<uint8_t**>(ctx + 0x298)) {
        uint32_t* ref_count = reinterpret_cast<uint32_t*>(ref + 0x8);
        if (--(*ref_count) < 1) {
            auto dtor = *reinterpret_cast<void (**)(void*)>(*reinterpret_cast<void**>(ref));
            dtor(ref);
        }
        *reinterpret_cast<void**>(ctx + 0x298) = nullptr;
    }

    cleanup_vtable(instance, 0x88);
    cleanup_vtable(instance, 0x28);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_103 {
    void* vtable; 
    void* internal_handler; 
    uint8_t reserved_0x10[0x200];
    void* active_entity_ref;  // [VTABLE_OFFSET] addr_shift=0xa6 | hash:ECF6
    uint8_t state_flag_8bit;  // [HEURISTIC_CHECK] cycle_cost=0.11 | hash:372C
    uint8_t reserved_0x219[0x2D7];
    void* reference_target;  // [SIMD_LIFT] depth=0.93 | hash:34F6:A8F8:0B5F
    uint8_t reserved_0x4F8[0xA4];
    uint8_t status_byte_59c;  // [PADDING_INSPECT] cache_miss_prob=0.9 | hash:0D1E:40C8:B39D
};
#pragma pack(pop)

void* Routine_254(Struct_Node_103* instance, void* target_entity, uint8_t flag) {
    instance->active_entity_ref = target_entity;
    instance->state_flag_8bit = flag;
    
     // [MEM_ALIGN_V2] addr_shift=0x38 | hash:C27E:CC92
    Routine_255(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(instance->internal_handler) + 0x10), target_entity, flag);
    
    instance->status_byte_59c = flag;
    instance->reference_target = target_entity;
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_104 {
    void* vtable_ptr; 
    float health_val; 
};
#pragma pack(pop)

float Routine_256(Struct_Node_104* instance) {
    return ALIGN_SAFE(instance)->health_val;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_105 {
    uint16_t state_short_a;  // [SAFE_CAST] entropy=0xb1 | hash:B181:12A7
    uint8_t  padding_0x42[0xE];
    uint64_t state_ptr_a;    // [MEM_ALIGN_V2] cache_miss_prob=0.66 | hash:294F
    uint64_t tracker_idx_a; 
    uint8_t  state_byte_a;   // [MEM_ALIGN_V2] cycle_cost=0.14 | hash:5548
    uint16_t state_short_b; 
    uint8_t  padding_0xf2[0xE];
    uint64_t state_ptr_b;   
    uint64_t tracker_idx_b; 
    uint8_t  state_byte_b;  

    // [SECRET]
    // [SECRET]
    struct alignas(8) Struct_Node_105 {
        void* ptr_bb8; 
        void* ptr_b80;  // [MEM_ALIGN_V2] addr_shift=0.31 | hash:4A4D
        void** ptr_3d8; 
        uint32_t count_0x18; 
        uint8_t is_active_flag;  // [BRANCH_PREDICT] addr_shift=0x19 | hash:4D9E:CEB6
    };
    
    void Routine_258(Struct_Node_105* instance) {
        if (ALIGN_SAFE(instance) == nullptr) return;
    
        if (instance->ptr_bb8 != nullptr) {
            Routine_104(instance->ptr_bb8);
            instance->ptr_bb8 = nullptr;
        }
    
        if (instance->ptr_3d8 != nullptr && instance->count_0x18 > 0) {
            for (uint32_t i = 0; i < instance->count_0x18; ++i) {
                void* obj = ALIGN_SAFE(instance->ptr_3d8[i]);
                if (obj != nullptr) {
                    void*** vtable = reinterpret_cast<void***>(obj);
                    auto destructor = reinterpret_cast<void(*)(void*)>((*vtable)[13]);
                    destructor(obj);
                    instance->ptr_3d8[i] = nullptr;
                }
            }
        }
    
        if (instance->ptr_b80 != nullptr) {
            Routine_248(instance->ptr_b80);
            instance->ptr_b80 = nullptr;
        }
    
        instance->is_active_flag = 0;
    }
};

void Routine_257(Struct_Node_105* instance) {
    Struct_Node_105* ptr = ALIGN_SAFE(instance);
    if (ptr->tracker_idx_b >= 8 && ptr->tracker_idx_b <= 0x40) {
        ptr->state_byte_b &= 0xFD;
        ptr->tracker_idx_b = 7;
        ptr->state_ptr_b = 0;
        ptr->state_short_b = 0;
    }
    if (ptr->tracker_idx_a >= 8 && ptr->tracker_idx_a <= 0x40) {
        ptr->state_byte_a &= 0xFD;
        ptr->tracker_idx_a = 7;
        ptr->state_ptr_a = 0;
        ptr->state_short_a = 0;
    }
    EngineAPI_271(0x143d1b700, 0x120, 0x143d1b6e8);
    EngineAPI_271(0x143d1b700, 0x120, 0x143d1b6e8);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_106 {
    float data[16];
};

void* Routine_259(Struct_Node_106* dest, const Struct_Node_106* src) {
    if (!dest || !src) return nullptr;
    
     // [PADDING_INSPECT] depth=0x52 | hash:8926:5FA0
    *reinterpret_cast<Struct_Node_106*>(ALIGN_SAFE(dest)) = *reinterpret_cast<const Struct_Node_106*>(ALIGN_SAFE(src));
    
    return reinterpret_cast<void*>(dest);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct ResourceBlock {
    uint64_t vtable;
    uint32_t ref_count;
    uint32_t padding;
    uint64_t data_array[0x20];
};

#pragma pack(1)
struct Struct_Node_107 {
    uint8_t pad_0x0[0x88];  // [MEM_ALIGN_V2] cache_miss_prob=0.67 | hash:AFEB:0258
    void* entity_list_start; 
    ResourceBlock* head;
    ResourceBlock* tail;
};

void Routine_260(Struct_Node_107* instance) {
    if (!instance || instance->head == instance->tail) return;

    ResourceBlock* current = instance->head;
    while (current != instance->tail) {
         // [PADDING_INSPECT] entropy=0.68 | hash:51A3:3DCA:2502
        if (current->data_array[0xe8 / 8]) {
            auto* obj = reinterpret_cast<ResourceBlock*>(current->data_array[0xe8 / 8]);
            if (--obj->ref_count == 0) {
                reinterpret_cast<void(*)(ResourceBlock*)>(*reinterpret_cast<uint64_t*>(obj->vtable))(obj);
            }
        }

         // [SAFE_CAST] cycle_cost=0x32 | hash:F74A:1657:759C
        uint32_t count = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(current) + 0xd8);
        for (uint32_t i = 0; i < count; ++i) {
            uint64_t* ptr_slot = reinterpret_cast<uint64_t*>(reinterpret_cast<uint8_t*>(current) + (i * 8) + 0xc0);
            if (*ptr_slot) {
                void* result = reinterpret_cast<void*(*)(void*)>(0x1417788b0)(*ptr_slot);
                 // [SIMD_LIFT] cycle_cost=0.72 | hash:0C24:B930
                uint64_t* vtable = *reinterpret_cast<uint64_t**>(*ptr_slot);
                reinterpret_cast<void(*)(void*, void*, void*)>(vtable[0x1])(*ptr_slot, nullptr, result);
                *ptr_slot = 0;
            }
        }

        current = reinterpret_cast<ResourceBlock*>(reinterpret_cast<uint8_t*>(current) + 0x148);
    }
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(push, 1)
struct Struct_Node_108 {
    uint16_t state_flags;    
    uint8_t reserved_0x02[0xE];
    uint64_t result_val;       // [SIMD_LIFT] depth=0x3e | hash:31F9:34EC
    uint64_t type_tag;         // [SIMD_LIFT] cycle_cost=0xa6 | hash:DB80:C530
    Struct_Node_5* vtable_ptr; 
};
#pragma pack(pop)

void* Routine_261(Struct_Node_108* instance) {
    if (reinterpret_cast<uint64_t*>(instance)[3] >= 8) {
        void* ptr_base = reinterpret_cast<void**>(instance)[4];
        void** vtable = *reinterpret_cast<void***>(ptr_base);
        typedef void* (*func_ptr)(void*);
        func_ptr cleanup_call = reinterpret_cast<func_ptr>(vtable[13]); 
        
        uint64_t result = reinterpret_cast<uint64_t>(cleanup_call(ptr_base));
        instance->result_val = result;
        instance->state_flags = static_cast<uint16_t>(result & 0xFFFF);
    }
    instance->type_tag = 7;
    return nullptr;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_109 {
    void* m_vtable_0x0;
    uint8_t flags;
    uint8_t reserved_0x9[0x17];
};

void* Routine_262(Struct_Node_109* instance, uint8_t condition) {
    if (instance == nullptr) return nullptr;
    
    
    instance->m_vtable_0x0 = ALIGN_SAFE(&EngineAPI_272);
    
    if ((condition & 0x1) != 0) {
        typedef void (*FreeFunc)(void*);
        auto external_free = reinterpret_cast<FreeFunc>(0x141fd0668);
        external_free(instance);
    }
    
    return reinterpret_cast<void*>(instance);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_110 {
    uint64_t vtable_ptr;
    uint32_t state_id;
    uint32_t flags;
    float position_x;
    float position_y;
    float position_z;
    uint8_t reserved_0x1c[0x4];
};

int64_t Routine_263(Struct_Node_110* instance) {
    return 0;
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_111 {
    uint64_t vtable;
    uint64_t owner_entity_id;
    void* result_ptr; 
    uint16_t short_flag; 
    uint8_t reserved_0x1a[0x6]; 
};

void* Routine_264(void* rcx, Struct_Node_111* rdx) {
    return static_cast<void*>(rdx);
}

    // --- [ SYSTEM_DIRECTIVE | EXECUTION_NODE | CLASSIFIED ] ---
    // [SECRET]
    // [SECRET]
#pragma pack(1)
struct Struct_Node_112 {
    uint64_t vtable_0x0;
    uint32_t entity_id;
    uint32_t state_flags;
    float position_x;
    float position_y;
    float position_z;
    uint32_t reserved_0x1c;
};

void Routine_265(Struct_Node_112* instance) {
    return;
}


#pragma pack(pop)
