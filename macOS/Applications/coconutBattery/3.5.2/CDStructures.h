//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct am_device {
    unsigned char _field1[16];
    unsigned int _field2;
    unsigned int _field3;
    char *_field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned char _field8[8];
};

struct amd_service_connection {
    unsigned char _field1[16];
    unsigned int _field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    unsigned int _field6;
    char _field7[128];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

