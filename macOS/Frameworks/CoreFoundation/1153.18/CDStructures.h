//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class __CFWeakCallback;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Block_byref {
    void *_field1;
    struct Block_byref *_field2;
    int _field3;
    unsigned int _field4;
};

struct CFSlice {
    void **items;
    char wantsStrong;
    char wantsWeak;
    char shouldCopyIn;
    char usesStrong;
    char usesWeak;
    char usesSentinel;
    char pointerPersonality;
    char integerPersonality;
    char simpleReadClear;
    __CFWeakCallback *callback;
    CDUnknownFunctionPointerType sizeFunction;
    CDUnknownFunctionPointerType hashFunction;
    CDUnknownFunctionPointerType isEqualFunction;
    CDUnknownFunctionPointerType describeFunction;
    CDUnknownFunctionPointerType acquireFunction;
    CDUnknownFunctionPointerType relinquishFunction;
    CDUnknownFunctionPointerType allocateFunction;
    CDUnknownFunctionPointerType freeFunction;
    CDUnknownFunctionPointerType readAt;
    CDUnknownFunctionPointerType clearAt;
    CDUnknownFunctionPointerType storeAt;
};

struct NSMethodFrameArgInfo {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7;
    char _field8;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned char _field9;
    char _field10[0];
};

struct _CFPrefsShmemEntry {
    unsigned int generation:31;
    unsigned int multiprocess:1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct edge {
    unsigned long long _field1;
    unsigned long long _field2[2];
    unsigned long long _field3;
};

struct vertex {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_52991635;

#pragma mark Typedef'd Unions

typedef union {
    struct _CFPrefsShmemEntry entry;
    int value;
} CDUnion_694411ff;

