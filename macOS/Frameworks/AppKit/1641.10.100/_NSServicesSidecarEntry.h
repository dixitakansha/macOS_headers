//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSServiceEntry.h>

@class SidecarService;

__attribute__((visibility("hidden")))
@interface _NSServicesSidecarEntry : _NSServiceEntry
{
    SidecarService *_service;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)internalRunService:(id)arg1 flags:(unsigned long long)arg2 cancelledHint:(const char *)arg3;
- (id)localizedServiceDescription;
- (BOOL)isRestricted;
@property(readonly, nonatomic) SidecarService *sidecarService;
- (void)dealloc;
- (id)initWithService:(id)arg1;

@end

