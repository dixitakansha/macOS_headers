//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ScreenCapture : NSObject
{
    _Bool _registeredForTouchbarHotKeys;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property(readonly, nonatomic) _Bool registeredForTouchbarHotKeys; // @synthesize registeredForTouchbarHotKeys=_registeredForTouchbarHotKeys;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_msgCaptureScreenInteractive:(id)arg1 dictionary:(id)arg2;
- (void)_msgCaptureScreen:(id)arg1 dictionary:(id)arg2;
- (void)_msgScreenCapture:(id)arg1 dictionary:(id)arg2;
- (void)_acceptConnection:(id)arg1;
- (void)_screencaptureprefschange:(id)arg1;
- (void)_screenCaptureFailed:(id)arg1;
- (void)_enableTouchbarHotKeys:(_Bool)arg1;
- (id)init;

@end

