//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GTMCarbonEventHandler.h"

@class NSMutableArray;

@interface GTMCarbonEventDispatcherHandler : GTMCarbonEventHandler
{
    NSMutableArray *hotkeys_;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedEventDispatcherHandler;
- (int)handleEvent:(id)arg1 handler:(struct OpaqueEventHandlerCallRef *)arg2;
- (BOOL)handleHotKeyEvent:(id)arg1;
- (void)unregisterHotKey:(id)arg1;
- (id)registerHotKey:(unsigned long long)arg1 modifiers:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 userInfo:(id)arg5 whenPressed:(BOOL)arg6;
- (struct OpaqueEventTargetRef *)eventTarget;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

