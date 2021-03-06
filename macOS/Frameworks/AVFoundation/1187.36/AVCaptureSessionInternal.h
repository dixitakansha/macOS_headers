//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSessionInternalState, NSError, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface AVCaptureSessionInternal : NSObject
{
    NSString *sessionPreset;
    int beginConfigRefCount;
    NSObject<OS_dispatch_queue> *buildAndRunGraphQueue;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSMutableArray *connections;
    NSMutableSet *activeConnections;
    NSMutableSet *activeOutputs;
    NSMutableSet *activeInputs;
    struct __CFArray *videoPreviewLayers;
    NSError *stopError;
    BOOL running;
    AVCaptureSessionInternalState *state;
    struct OpaqueCMClock *masterClock;
}

@end

